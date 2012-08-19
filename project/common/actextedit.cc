// ac/actextedit.cc
// 10/11/2011

#include "project/common/actextedit.h"
#include "project/common/acss.h"

// - Construction -

void
AcTextEdit::init()
{ setStyleSheet(ACSS_TEXTEDIT); }

bool
AcTextEdit::containsPlainText(const QString &text) const
{ return toPlainText().contains(text); }

bool
AcTextEdit::containsHtml(const QString &text) const
{ return toHtml().contains(text); }

// EOF

/*
void
AcTextEdit::contextMenuEvent(QContextMenuEvent *event)
{
#ifdef WITH_WIN_DWM
  Q_ASSERT(event);
  QMenu *m = new QMenu(this);
  AcUi::globalInstance()->setWindowStyle(m, false); // resistent = false

  QMenu *scm = createStandardContextMenu(event->pos());
  m->addActions(scm->actions());

  m->exec(event->globalPos());
  delete scm;
  delete m;
  event->accept();
#else
  Base::contextMenuEvent(event);
#endif // WITH_WIN_DWM
}
*/
