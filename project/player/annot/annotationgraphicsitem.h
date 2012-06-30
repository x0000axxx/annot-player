#ifndef ANNOTATIONGRAPHICSITEM_H
#define ANNOTATIONGRAPHICSITEM_H

// annotationgraphicsitem.h
// 7/16/2011

#include "module/annotcloud/annotation.h"
#include <QtGui/QGraphicsTextItem>

QT_BEGIN_NAMESPACE
class QColor;
class QContextMenuEvent;
//class QGraphicsView;
class QGraphicsScene;
class QMouseEvent;
class QPoint;
class QPropertyAnimation;
class QStringList;
class QTimer;
QT_END_NAMESPACE

class AnnotationGraphicsEffect;
class AnnotationGraphicsView;
class DataManager;
class SignalHub;

class AnnotationGraphicsItem : public QGraphicsTextItem
{
  Q_OBJECT
  Q_DISABLE_COPY(AnnotationGraphicsItem)
  Q_PROPERTY(QPointF pos READ pos WRITE setPos)
  Q_PROPERTY(QPointF relativePos READ relativePos WRITE setRelativePos)
  Q_PROPERTY(qreal x READ x WRITE setX)
  Q_PROPERTY(qreal relativeX READ relativeX WRITE setRelativeXSmoothly)
  Q_PROPERTY(qreal opacity READ opacity WRITE setOpacity)

  typedef AnnotationGraphicsItem Self;
  typedef QGraphicsTextItem Base;

  typedef AnnotCloud::Annotation Annotation;

signals:
  void message(const QString &text);

public:
  enum { AnnotationGraphicsItemType = UserType + 1 };
  enum Style { FloatStyle = 0, FlyStyle, SubtitleStyle, TopStyle, BottomStyle, MotionlessStyle };  // Appear style

  static void warmUp(); ///< optional, caching fonts on first load

  //enum Effect { DefaultEffect = 0, TransparentEffect, ShadowEffect, BlurEffect, EffectCount };

public:
  AnnotationGraphicsItem(DataManager *data, SignalHub *hub, AnnotationGraphicsView *viewWithScene);

  const Annotation &annotation() const { return annot_; }
  Annotation &annotation() { return annot_; }

  void setAnnotation(const Annotation &annot);
  void updateText();
  void updateComponents();
  void updateToolTip();

  const QString &text() const { return text_; } ///< tidied HTML
  const QString &plainText() const;

  bool autoDelete() const { return !scene(); }
  bool isMetaVisible() const;
  bool isAvatarVisible() const;
  bool isDragging() const;
  bool isOwner() const;

  ///  Override
  virtual int type() const { return AnnotationGraphicsItemType; }
  Style style() const { return style_; }
  void setStyle(Style style) { style_ = style; }

  bool isPaused() const;

  //  \reimp  Make the item easier to be selected. - TODO: It is better to do this at viewer level rather the messing up the item itself.
  //virtual bool contains(const QPointF &point) const
  //{ return Base::boundingRect().contains(point); }

  bool isSubtitle() const { return style_ == SubtitleStyle; }

  QString summary() const;

  QPointF relativePos() const { return pos() - origin_; }
  qreal relativeX() const { return x() - origin_.x(); }
  qreal relativeY() const { return y() - origin_.y(); }

  qreal opacity() const;

protected:
  void updateMeta();
  void updateAvatar();

  //QString parse(const QString &text);
  //static bool isSubtitle(const QString &text);

public slots:
  void setOutlineColor(const QColor &color);
  void resetOutlineColor();
  void updateOutlineColor();
  void setMetaVisible(bool t) { metaVisible_ = t; }
  void setMetaVisibleAndUpdate(bool t);
  void setAvatarVisible(bool t) { avatarVisible_ = t; }
  void setAvatarVisibleAndUpdate(bool t);
  void setVisible(bool t) { Base::setVisible(t); }
  void setRelativePos(const QPointF &offset) { setPos(origin_ + offset); }
  void setRelativeX(qreal xOffset) { setX(origin_.x() + xOffset); }
  void setRelativeY(qreal yOffset) { setY(origin_.y() + yOffset); }
  void setRelativeXSmoothly(qreal xOffset);
  void setScale(qreal value) { Base::setScale(value); }
  void showMe();   // Add me to graphics scene, and autmatic remove me.
  void selectMe();
  void analyzeMe();

  void reset();
  void pause();
  void resume();
  void escapeFrom(const QPointF &pos);
  void rushTo(const QPointF &pos);

  void setOpacity(qreal value);

  void disappear();
protected slots:
  void addMe();
  void removeMe(); // Remove me from graphics scene
  void deleteMe(); // Delete corresponding annotation

  void searchWithEngine(int engine);
  void searchWithGoogle();
  void searchWithBing();

  void translate(int lang);
  void showTraditionalChinese();
  void translateToEnglish();
  void translateToJapanese();
  void translateToChinese();
  void translateToKorean();

  void fly();
  void stay(Style location = TopStyle);
  void removeLater(int msecs);

  void edit();
  void copyToClipboard() const;

  void setText(const QString &text); ///< The default way to set text
  void setTags(const QStringList &tags); ///< Apply tags.

  void blessMe();
  void curseMe();
  void blockMe();
  void blockUser();

  void setPositionResolution(int value) { positionResolution_ = value; }

protected:
  bool isEditable() const;
  void fly(qreal fromX, qreal toX, qreal y, int msecs);
  void escapeTo(const QPointF &pos, int msecs);
  void rushTo(const QPointF &pos, int msecs);
  //void stay(const QPointF &pos, int msecs);
  void appear(const QPointF &pos, int msecs);

  int flyTime() const;  ///< in msecs
  int stayTime() const; ///< in msecs

  void fadeIn(int msecs);
  void fadeOut(int msecs);

  QPointF boundedToScene(const QPointF &pos) const;
  QPointF reflected(const QPointF &pos) const;

  // Events:
public:
  virtual void contextMenuEvent(QContextMenuEvent *event); ///< \reimp
  virtual void mouseDoubleClickEvent(QMouseEvent *event); ///< \reimp
  virtual void mousePressEvent(QMouseEvent *event); ///< \reimp
  virtual void mouseReleaseEvent(QMouseEvent *event); ///< \reimp
  virtual void mouseMoveEvent(QMouseEvent *event); ///< \reimp
protected:
  virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent *event); ///< \reimp
  virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event); ///< \reimp
  virtual void mousePressEvent(QGraphicsSceneMouseEvent *event); ///< \reimp
  virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event); ///< \reimp
  virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event); ///< \reimp

  //virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event); ///< \reimp
  //virtual void hoverMoveEvent(QGraphicsSceneHoverEvent *event); ///< \reimp
  //virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event); ///< \reimp

private:
  void setDefaultStyle();

  int nextY(int visibleTime, Style style) const;

private:
  bool metaVisible_;
  bool avatarVisible_;
  Annotation annot_;
  QString prefix_, suffix_; // cached
  QString text_; // cached
  mutable QString plainText_; // cached
  AnnotationGraphicsEffect *effect_;

  QPointF origin_;
  AnnotationGraphicsView *view_;
  QGraphicsScene *scene_;
  DataManager *data_;
  SignalHub *hub_;

  Style style_;
  int positionResolution_;
  QTimer *removeLaterTimer_;
  QPropertyAnimation *flyAni_,*flyOpacityAni_,
                     *escapeAni_, *rushAni_,
                     *appearOpacityAni_, *fadeAni_;

  QPointF dragPos_;
};

#endif // ANNOTATIONGRAPHICSITEM_H
