# browser.pro
# 3/29/2012

VERSION = 0.1.0.2

DEFINES += PROJECT_BROWSER

include(../../config.pri)
include($$ROOTDIR/project/common/common.pri)
include($$ROOTDIR/module/debug/debug.pri)

## Libraries

include($$ROOTDIR/module/nicoutil/nicoutil.pri)
include($$ROOTDIR/module/mrlanalysis/mrlanalysis.pri)
include($$ROOTDIR/module/qt/qt.pri)
include($$ROOTDIR/module/qtext/qtext.pri)
include($$ROOTDIR/module/crypt/crypt.pri)
include($$ROOTDIR/module/download/download.pri)
include($$ROOTDIR/module/compress/compress.pri)
include($$ROOTDIR/module/webbrowser/webbrowser.pri)

#!mac: include($$ROOTDIR/module/ipc/ipc.pri)

win32 {
    include($$ROOTDIR/win/dwm/dwm.pri)
    include($$ROOTDIR/win/qtwin/qtwin.pri)
}
mac {
    include($$ROOTDIR/mac/qtmac/qtmac.pri)
}

QT      += core gui network webkit
#CONFIG(static): QTPLUGIN += qsqlite

DEFINES += WITH_QT_CORE \
           WITH_QT_GUI \
           WITH_QT_NETWORK \
           WITH_QT_WEBKIT

## Sources

TEMPLATE      = app
win32:  TARGET = annot-browser
unix:   TARGET = annot-browser
mac:   TARGET = "Annot Browser"

win32: CONFIG += windows

INCLUDEPATH     += $$SUBPATH
DEPENDPATH      += $$SUBPATH

HEADERS += \
    application.h \
    global.h \
    mainwindow.h \
    mainwindow_p.h \
    rc.h \
    settings.h

SOURCES += \
    application.cc \
    main.cc \
    mainwindow.cc \
    settings.cc


RESOURCES += browser.qrc

OTHER_FILES += \
    annot-browser.desktop \
    annot-browser.png \
    Info.plist \
    browser.rc \
    browser.ico \
    browser.icns \
    debian.control \
    debian.rules \
    deploy-debian.sh \
    deploy-fedora.sh \
    rpm.spec

win32 {
    !wince*: LIBS += -lshell32
    RC_FILE += browser.rc
}

mac {
    ICON = browser.icns
    QMAKE_INFO_PLIST = Info.plist
}

## Translations

TRANSLATIONS += \
    $$PWD/tr/tr_en.ts \
    $$PWD/tr/tr_ja.ts \
    $$PWD/tr/tr_zh.ts

CODECFORTR = UTF-8

OTHER_FILES += $$TRANSLATIONS \
    $$PWD/tr/lrelease_tr.cmd \
    $$PWD/tr/lrelease_tr.sh \
    $$PWD/tr/lupdate_tr.cmd \
    $$PWD/tr/lupdate_tr.sh

# Deployment

unix:!mac {
    INSTALLS += target desktop desktop-kde icon doc image

    target.path = $$BINDIR

    desktop.path = $$DATADIR/applications
    desktop.files += $${TARGET}.desktop

    desktop-kde.path = $$DATADIR/kde4/apps/solid/actions
    desktop-kde.files += $${TARGET}.desktop

    #service.path = $$DATADIR/dbus-1/services
    #service.files += $${TARGET}.service

    icon.path = $$DATADIR/icons/hicolor/256x256/apps
    icon.files += $${TARGET}.png

    DOCDIR = $$DATADIR/annot/browser/doc
    doc.path = $$DOCDIR
    doc.files = $$DOC_FILES

    IMAGEDIR = $$DATADIR/annot/browser/images
    image.path = $$IMAGEDIR
    image.files = $$IMAGE_FILES
}

# EOF