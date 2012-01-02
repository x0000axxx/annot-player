#ifndef TR_H
#define TR_H

// tr.h
// 7/18/2011
// Global parameters.

#include "translatormanager.h"

#define TR(_tid)        TranslatorManager::globalInstance()->translate(_tid)

// TODO: Clean up id define
// remove redundent translation

#define T_NULL          0x1

// - Basic words -
#define T_POSITION      0x2
#define T_VOLUME        0x3
#define T_USER          0x4
#define T_LOGIN         0x5
#define T_OK            0x6
#define T_SAVE          0x7
#define T_CANCEL        0x8

#define T_COLOR         0x201
#define T_BOLD          0x202
#define T_ITALIC        0x203
#define T_UNDERLINE     0x204
#define T_MENU          0x205
#define T_HTML          0x206
#define T_RICH          0x207
#define T_CODE          0x208
#define T_STRIKEOUT     0x209
#define T_VERBATIM      0x20a
#define T_FOREGROUNDCOLOR 0x20b
#define T_BACKGROUNDCOLOR 0x20c
#define T_WORDCOUNT     0x20d
#define T_UNKNOWN       0x20e
#define T_SUBTITLE      0x20f
#define T_SECTION       0x210

#define T_BLESS         0x211
#define T_CURSE         0x212
#define T_BLOCK         0x213

#define T_ATTACH        0x214
#define T_DETACH        0x215
#define T_ATTACHED      0x216
#define T_DETACHED      0x217
#define T_REFRESH       0x218
#define T_RESET         0x219
#define T_ADD           0x21a
#define T_MESSAGE       0x21b

#define T_BLACK         0x301
#define T_BLUE          0x302
#define T_BROWN         0x303
#define T_CYAN          0x304
#define T_GRAY          0x305
#define T_GREY          T_GRAY
#define T_MAGENTA       0x306
#define T_ORANGE        0x307
#define T_PINK          0x308
#define T_PURPLE        0x309
#define T_RED           0x30a
#define T_WHITE         0x30b
#define T_YELLOW        0x30c
#define T_GREEN         0x30d
#define T_LIGHTBLUE     0x30e

#define T_ALIEN         0x311
#define T_ENGLISH       0x312
#define T_JAPANESE      0x313
#define T_CHINESE       0x314
#define T_TRADITIONALCHINESE    0x315
#define T_SIMPLIFIEDCHINESE     0x316
#define T_KOREAN                0x317
#define T_UNKNOWNLANGUAGE       T_ALIEN
#define T_ANYLANGUAGE           0x318

#define T_MENUTEXT_UNKNOWNLANGUAGE  T_UNKNOWNLANGUAGE
#define T_TIP_UNKNOWNLANGUAGE       T_UNKNOWNLANGUAGE
#define T_TOOLTIP_UNKNOWNLANGUAGE   T_TIP_UNKNOWNLANGUAGE
#define T_STATUSTIP_UNKNOWNLANGUAGE T_TIP_UNKNOWNLANGUAGE

#define T_MENUTEXT_ANYLANGUAGE  0x319
#define T_TIP_ANYLANGUAGE       0x31a
#define T_TOOLTIP_ANYLANGUAGE   T_TIP_ANYLANGUAGE
#define T_STATUSTIP_ANYLANGUAGE T_TIP_ANYLANGUAGE

#define T_MENUTEXT_ENGLISH      T_ENGLISH
#define T_TIP_ENGLISH           T_ENGLISH
#define T_TOOLTIP_ENGLISH       T_TIP_ENGLISH
#define T_STATUSTIP_ENGLISH     T_TIP_ENGLISH

#define T_MENUTEXT_JAPANESE     T_JAPANESE
#define T_TIP_JAPANESE          T_JAPANESE
#define T_TOOLTIP_JAPANESE      T_TIP_JAPANESE
#define T_STATUSTIP_JAPANESE    T_TIP_JAPANESE

#define T_MENUTEXT_CHINESE      T_CHINESE
#define T_TIP_CHINESE           T_CHINESE
#define T_TOOLTIP_CHINESE       T_TIP_CHINESE
#define T_STATUSTIP_CHINESE     T_TIP_CHINESE

#define T_MENUTEXT_KOREAN       T_KOREAN
#define T_TIP_KOREAN            T_KOREAN
#define T_TOOLTIP_KOREAN        T_TIP_KOREAN
#define T_STATUSTIP_KOREAN      T_TIP_KOREAN

#define T_MENUTEXT_TRADITIONALCHINESE  T_TRADITIONALCHINESE
#define T_TIP_TRADITIONALCHINESE       T_TRADITIONALCHINESE
#define T_TOOLTIP_TRADITIONALCHINESE   T_TIP_TRADITIONALCHINESE
#define T_STATUSTIP_TRADITIONALCHINESE T_TIP_TRADITIONALCHINESE

#define T_MENUTEXT_SIMPLIFIEDCHINESE   T_SIMPLIFIEDCHINESE
#define T_TIP_SIMPLIFIEDCHINESE        T_SIMPLIFIEDCHINESE
#define T_TOOLTIP_SIMPLIFIEDCHINESE    T_TIP_SIMPLIFIEDCHINESE
#define T_STATUSTIP_SIMPLIFIEDCHINESE  T_TIP_SIMPLIFIEDCHINESE

#define T_FILTER_PATTERN        0x401
#define T_FILTER_SYNTAX         0x402
#define T_FILTER_COLUMN         0x403
#define T_FILTER_REGEX          0x404
#define T_FILTER_WILDCARD       0x405
#define T_FILTER_FIXED          0x406

#define T_ACTIVE        0x411
#define T_DELETED       0x412
#define T_BLOCKED       0x413
#define T_ANNOT         0x414
#define T_NA            0x415
#define T_ANONYMOUS     0x416

#define T_PREVIOUS      0x417
#define T_NEXT          0x418

#define T_MENUTEXT_PREVIOUS         T_PREVIOUS
#define T_TIP_PREVIOUS              T_MENUTEXT_PREVIOUS
#define T_TOOLTIP_PREVIOUS          T_TIP_PREVIOUS
#define T_STATUSTIP_PREVIOUS        T_TIP_PREVIOUS

#define T_MENUTEXT_NEXT         T_NEXT
#define T_TIP_NEXT              T_MENUTEXT_NEXT
#define T_TOOLTIP_NEXT          T_TIP_NEXT
#define T_STATUSTIP_NEXT        T_TIP_NEXT

#define T_MENUTEXT_PREVIOUSSECTION        T_MENUTEXT_PREVIOUS
#define T_TIP_PREVIOUSSECTION             T_TIP_PREVIOUS
#define T_TOOLTIP_PREVIOUSSECTION         T_TIP_PREVIOUSSECTION
#define T_STATUSTIP_PREVIOUSSECTION       T_TIP_PREVIOUSSECTION

#define T_MENUTEXT_NEXTSECTION        T_MENUTEXT_NEXT
#define T_TIP_NEXTSECTION             T_TIP_NEXT
#define T_TOOLTIP_NEXTSECTION         T_TIP_NEXTSECTION
#define T_STATUSTIP_NEXTSECTION       T_TIP_NEXTSECTION


#define T_ID            0x500
#define T_USER_ID       0x501
#define T_USER_ALIAS    0x502
#define T_TOKEN_ID      0x503
#define T_HASH          0x504
#define T_TEXT          0x505
#define T_POS           0x506
#define T_CREATETIME    0x507
#define T_UPDATETIME    0x508
#define T_LANGUAGE      0x509
#define T_STATUS        0x50a
#define T_FLAGS         0x50b
#define T_BLESSEDCOUNT  0x50c
#define T_CURSEDCOUNT   0x50d
#define T_BLOCKEDCOUNT  0x50e
#define T_VISITEDCOUNT  0x50f
#define T_ANNOTCOUNT    0x510
#define T_TYPE          0x511
#define T_ALIAS         0x512
#define T_TAG           0x513
#define T_ANNOTATION    0x514
#define T_PID           0x515
#define T_NAME          0x516
#define T_FOLDER        0x517
#define T_PATH          0x518

// - Defaults -
#define T_DEFAULT_USERNAME      0x9
#define T_DEFAULT_PASSWORD      0xa

// - Titles -

#define T_TITLE_PROGRAM         0xb
#define T_TITLE_USER            0xc
#define T_TITLE_LOGIN           0xd
#define T_TITLE_SEEK            0xe

#define T_TITLE_OPENFILE        0x11
#define T_TITLE_OPENDEVICE      0x12
#define T_TITLE_OPENVIDEODEVICE 0x13
#define T_TITLE_OPENAUDIODEVICE 0x14
#define T_TITLE_OPENSUBTITLE    0x15

#define T_TITLE_ANNOTATIONBROWSER       0x19
#define T_TITLE_TOKENVIEW       0x1a
#define T_TITLE_COMMENTVIEW     0x1b
#define T_TITLE_CLOUDVIEW       0x1c
#define T_TITLE_SIGNALVIEW      0x1d
#define T_TITLE_LIVE            0x1e
#define T_TITLE_SYNC            0x1f
#define T_TITLE_ANNOTATIONEDITOR        0x20

// - Messages -

#define T_ERROR_UNKNOWN_COMMAND         0x21
#define T_ERROR_SNAPSHOT_FAILED         0x22
#define T_ERROR_HASH_TOKEN              0x23
#define T_ERROR_BAD_USERNAME            0x24
#define T_ERROR_BAD_PASSWORD            0x25
#define T_ERROR_BAD_POS                 0x26
#define T_ERROR_BAD_TOKEN               0x27
#define T_ERROR_BAD_DEVICEPATH          0x28
#define T_ERROR_BAD_FILEPATH            0x29
#define T_ERROR_BAD_SUBTITLE            0x2a
#define T_ERROR_CLIPBOARD_UNAVAILABLE   0x2b
#define T_ERROR_SUBMIT_TOKEN            0x2c
#define T_ERROR_SUBMIT_ANNOTATION       0x2d
#define T_ERROR_SYNC_FAILURE            0x2e
#define T_ERROR_LOGINFROMCACHE_FAILURE  0x2f
#define T_ERROR_NO_MEDIA                0x30

#define T_SUCCEED_SNAPSHOT_SAVED        0x41
#define T_SUCCEED_COPIED                0x42
#define T_SUCCEED_LOGINFROMCACHE        0x43

#define T_WARNING_LONG_STRING_TRUNCATED         0x50
#define T_MESSAGE_ENABLE_WINDOWSTAYSONTOP       0x51
#define T_MESSAGE_TRY_LOGINFROMCACHE            0x52


// - Widgets -
#define T_USERNAME              0x61
#define T_LABEL_USERNAME        T_USERNAME
#define T_TOOLTIP_USERNAME      T_USERNAME
#define T_PASSWORD              0x62
#define T_LABEL_PASSWORD        T_PASSWORD
#define T_TOOLTIP_PASSWORD      T_PASSWORD

#define T_TOOLTIP_ANNOTATIONITEM 0x63
#define T_TOOLTIP_INPUTLINE      0x64
#define T_TOOLTIP_PREFIXLINE     0x65

#define T_SEEK                  0x66
#define T_LABEL_SEEK            T_SEEK

#define T_TIMESLOT              0x67
#define T_LABEL_TIMESLOT        T_TIMESLOT
#define T_TOOLTIP_TIMESLOT      T_TIMESLOT

// - Formats -
#define T_FORMAT_ALL           0x71
#define T_FORMAT_SUPPORTED     0x72
#define T_FORMAT_VIDEO         0x73
#define T_FORMAT_AUDIO         0x74
#define T_FORMAT_PICTURE       0x75
#define T_FORMAT_SUBTITLE      0x76
#define T_FORMAT_PROGRAM       0x77

// - Actions -

#define T_MENUTEXT_OPEN        0x80
#define T_TIP_OPEN             0x81
#define T_TOOLTIP_OPEN         T_TIP_OPEN
#define T_STATUSTIP_OPEN       T_TIP_OPEN

#define T_MENUTEXT_OPENFILE    0x82
#define T_TIP_OPENFILE         0x83
#define T_TOOLTIP_OPENFILE     T_TIP_OPENFILE
#define T_STATUSTIP_OPENFILE   T_TIP_OPENFILE

#define T_MENUTEXT_OPENDEVICE  0x84
#define T_TIP_OPENDEVICE       0x85
#define T_TOOLTIP_OPENDEVICE   T_TIP_OPENDEVICE
#define T_STATUSTIP_OPENDEVICE T_TIP_OPENDEVICE

#define T_MENUTEXT_OPENVIDEODEVICE  0x86
#define T_TIP_OPENVIDEODEVICE       0x87
#define T_TOOLTIP_OPENVIDEODEVICE   T_TIP_OPENVIDEODEVICE
#define T_STATUSTIP_OPENVIDEODEVICE T_TIP_OPENVIDEODEVICE

#define T_MENUTEXT_OPENAUDIODEVICE  0x88
#define T_TIP_OPENAUDIODEVICE       0x89
#define T_TOOLTIP_OPENAUDIODEVICE   T_TIP_OPENAUDIODEVICE
#define T_STATUSTIP_OPENAUDIODEVICE T_TIP_OPENAUDIODEVICE

#define T_MENUTEXT_OPENSUBTITLE  0x8a
#define T_TIP_OPENSUBTITLE       0x8b
#define T_TOOLTIP_OPENSUBTITLE   T_TIP_OPENSUBTITLE
#define T_STATUSTIP_OPENSUBTITLE T_TIP_OPENSUBTITLE

#define T_MENUTEXT_OPENCONTEXTMENU  0x8c
#define T_TIP_OPENCONTEXTMENU       0x8d
#define T_TOOLTIP_OPENCONTEXTMENU   T_TIP_OPENCONTEXTMENU
#define T_STATUSTIP_OPENCONTEXTMENU T_TIP_OPENCONTEXTMENU

#define T_MENUTEXT_PLAY         0x8e
#define T_TIP_PLAY              0x8f
#define T_TOOLTIP_PLAY          T_TIP_PLAY
#define T_STATUSTIP_PLAY        T_TIP_PLAY

#define T_MENUTEXT_PAUSE        0x90
#define T_TIP_PAUSE             0x91
#define T_TOOLTIP_PAUSE         T_TIP_PAUSE
#define T_STATUSTIP_PAUSE       T_TIP_PAUSE

#define T_MENUTEXT_STOP         0x92
#define T_TIP_STOP              0x93
#define T_TOOLTIP_STOP          T_TIP_STOP
#define T_STATUSTIP_STOP        T_TIP_STOP

#define T_MENUTEXT_NEXTFRAME    0x94
#define T_TIP_NEXTFRAME         0x95
#define T_TOOLTIP_NEXTFRAME     T_TIP_NEXTFRAME
#define T_STATUSTIP_NEXTFRAME   T_TIP_NEXTFRAME

#define T_MENUTEXT_REPLAY       0x96
#define T_TIP_REPLAY            0x97
#define T_TOOLTIP_REPLAY        T_TIP_REPLAY
#define T_STATUSTIP_REPLAY      T_TIP_REPLAY

#define T_MENUTEXT_MINI         0x98
#define T_TIP_MINI              0x99
#define T_TOOLTIP_MINI          T_TIP_MINI
#define T_STATUSTIP_MINI        T_TIP_MINI

#define T_MENUTEXT_FULLSCREEN   0x9a
#define T_TIP_FULLSCREEN        0x9b
#define T_TOOLTIP_FULLSCREEN    T_TIP_FULLSCREEN
#define T_STATUSTIP_FULLSCREEN  T_TIP_FULLSCREEN

#define T_MENUTEXT_SNAPSHOT     0x9c
#define T_TIP_SNAPSHOT          0x9d
#define T_TOOLTIP_SNAPSHOT      T_TIP_SNAPSHOT
#define T_STATUSTIP_SNAPSHOT    T_TIP_SNAPSHOT

#define T_MENUTEXT_ANNOT        0x9e
#define T_TIP_ANNOT             0x9f
#define T_TOOLTIP_ANNOT         T_TIP_ANNOT
#define T_STATUSTIP_ANNOT       T_TIP_ANNOT
#define T_MENUTEXT_SHOWANNOT    0xa0
#define T_TIP_SHOWANNOT         0xa1
#define T_TOOLTIP_SHOWANNOT     T_TIP_SHOWANNOT
#define T_STATUSTIP_SHOWANNOT   T_TIP_SHOWANNOT
#define T_MENUTEXT_HIDEANNOT    0xa2
#define T_TIP_HIDEANNOT         0xa3
#define T_TOOLTIP_HIDEANNOT     T_TIP_HIDEANNOT
#define T_STATUSTIP_HIDEANNOT   T_TIP_HIDEANNOT

#define T_MENUTEXT_QUIT         0xa4
#define T_TIP_QUIT              0xa5
#define T_TOOLTIP_QUIT          T_TIP_QUIT
#define T_STATUSTIP_QUIT        T_TIP_QUIT

#define T_MENUTEXT_USER         0xa6
#define T_TIP_USER              0xa7
#define T_TOOLTIP_USER          T_TIP_USER
#define T_STATUSTIP_USER        T_TIP_USER

#define T_MENUTEXT_SEEK         0xa8
#define T_TIP_SEEK              0xa9
#define T_TOOLTIP_SEEK          T_TIP_SEEK
#define T_STATUSTIP_SEEK        T_TIP_SEEK

#define T_MENUTEXT_LOGIN        0xaa
#define T_TIP_LOGIN             0xab
#define T_TOOLTIP_LOGIN         T_TIP_LOGIN
#define T_STATUSTIP_LOGIN       T_TIP_LOGIN

#define T_MENUTEXT_LOGOUT       0xac
#define T_TIP_LOGOUT            0xad
#define T_TOOLTIP_LOGOUT        T_TIP_LOGOUT
#define T_STATUSTIP_LOGOUT      T_TIP_LOGOUT

#define T_MENUTEXT_LOGINDIALOG          0xae
#define T_TIP_LOGINDIALOG               0xaf
#define T_TOOLTIP_LOGINDIALOG           T_TIP_LOGINDIALOG
#define T_STATUSTIP_LOGINDIALOG         T_TIP_LOGINDIALOG

#define T_MENUTEXT_SEEKDIALOG           0xb1
#define T_TIP_SEEKDIALOG                0xb2
#define T_TOOLTIP_SEEKDIALOG            T_TIP_SEEKDIALOG
#define T_STATUSTIP_SEEKDIALOG          T_TIP_SEEKDIALOG

#define T_TITLE_ABOUT           0xb3
#define T_MENUTEXT_ABOUT        0xb4
#define T_TIP_ABOUT             0xb5
#define T_TOOLTIP_ABOUT         T_TIP_ABOUT
#define T_STATUSTIP_ABOUT       T_TIP_ABOUT

#define T_TITLE_HELP            0xb6
#define T_MENUTEXT_HELP         0xb7
#define T_TIP_HELP              0xb8
#define T_TOOLTIP_HELP          T_TIP_HELP
#define T_STATUSTIP_HELP        T_TIP_HELP

#define T_MENUTEXT_COPY         0xb9
#define T_TIP_COPY              0xba
#define T_TOOLTIP_COPY          T_TIP_COPY
#define T_STATUSTIP_COPY        T_TIP_COPY

#define T_MENUTEXT_PASTE        0xbb
#define T_TIP_PASTE             0xbc
#define T_TOOLTIP_PASTE         T_TIP_PASTE
#define T_STATUSTIP_PASTE       T_TIP_PASTE

#define T_MENUTEXT_SUBTITLE     0xbd
#define T_TIP_SUBTITLE          0xbe
#define T_TOOLTIP_SUBTITLE      T_TIP_SUBTITLE
#define T_STATUSTIP_SUBTITLE    T_TIP_SUBTITLE

#define T_MENUTEXT_SHOWSUBTITLE        0xbf
#define T_TIP_SHOWSUBTITLE             0xc1
#define T_TOOLTIP_SHOWSUBTITLE         T_TIP_SHOWSUBTITLE
#define T_STATUSTIP_SHOWSUBTITLE       T_TIP_SHOWSUBTITLE

#define T_MENUTEXT_HIDESUBTITLE        0xc2
#define T_TIP_HIDESUBTITLE             0xc3
#define T_TOOLTIP_HIDESUBTITLE         T_TIP_HIDESUBTITLE
#define T_STATUSTIP_HIDESUBTITLE       T_TIP_HIDESUBTITLE

#define T_MENUTEXT_REMOVEANNOTATION    0xc4
#define T_TIP_REMOVEANNOTATION         0xc5
#define T_TOOLTIP_REMOVEANNOTATION     T_TIP_REMOVEANNOTATION
#define T_STATUSTIP_REMOVEANNOTATION   T_TIP_REMOVEANNOTATION

#define T_MENUTEXT_ENABLEAUTOCLEARCONSOLE  0xc6
#define T_TIP_ENABLEAUTOCLEARCONSOLE       0xc7
#define T_TOOLTIP_ENABLEAUTOCLEARCONSOLE   T_TIP_ENABLEAUTOCLEARCONSOLE
#define T_STATUSTIP_ENABLEAUTOCLEARCONSOLE T_TIP_ENABLEAUTOCLEARCONSOLE

#define T_MENUTEXT_DISABLEAUTOCLEARCONSOLE  0xc8
#define T_TIP_DISABLEAUTOCLEARCONSOLE       0xc9
#define T_TOOLTIP_DISABLEAUTOCLEARCONSOLE   T_TIP_DISABLEAUTOCLEARCONSOLE
#define T_STATUSTIP_DISABLEAUTOCLEARCONSOLE T_TIP_DISABLEAUTOCLEARCONSOLE

#define T_MENUTEXT_WINDOWSTAYSONTOP    0xca
#define T_TIP_WINDOWSTAYSONTOP         0xcb
#define T_TOOLTIP_WINDOWSTAYSONTOP     T_TIP_WINDOWSTAYSONTOP
#define T_STATUSTIP_WINDOWSTAYSONTOP   T_TIP_WINDOWSTAYSONTOP

#define T_MENUTEXT_ADVANCED            0xcc
#define T_TIP_ADVANCED                 0xcd
#define T_TOOLTIP_ADVANCED             T_TIP_ADVANCED
#define T_STATUSTIP_ADVANCED           T_TIP_ADVANCED

#define T_MENUTEXT_CLEARCACHE          0xce
#define T_TIP_CLEARCACHE               0xcf
#define T_TOOLTIP_CLEARCACHE           T_TIP_CLEARCACHE
#define T_STATUSTIP_CLEARCACHE         T_TIP_CLEARCACHE

#define T_MENUTEXT_BACKWARD     0xd1
#define T_TIP_BACKWARD          T_MENUTEXT_BACKWARD
#define T_TOOLTIP_BACKWARD      T_TIP_BACKWARD
#define T_STATUSTIP_BACKWARD    T_TIP_BACKWARD

#define T_MENUTEXT_FORWARD      0xd2
#define T_TIP_FORWARD           T_MENUTEXT_FORWARD
#define T_TOOLTIP_FORWARD       T_TIP_FORWARD
#define T_STATUSTIP_FORWARD     T_TIP_FORWARD

//#define T_MENUTEXT_FORWARD_(_sec)   tr("Forward " #_sec)
//#define T_TIP_FORWARD_(_sec)        T_MENUTEXT_FORWARD_(_sec)
//#define T_TOOLTIP_FORWARD_(_sec )   T_TIP_FORWARD_(_sec)
//#define T_STATUSTIP_FORWARD_(_sec)  T_TIP_FORWARD_(_sec)
//#define T_MENUTEXT_BACKWARD_(_sec)  tr("Backword " #_sec)
//#define T_TIP_BACKWARD_(_sec)       T_MENUTEXT_BACKWARD_(_sec)
//#define T_TOOLTIP_BACKWARD_(_sec)   T_TIP_BACKWARD_(_sec)
//#define T_STATUSTIP_BACKWARD_(_sec) T_TIP_BACKWARD_(_sec)

#define T_MENUTEXT_FORWARD5S    0xd3
#define T_TIP_FORWARD5S         T_MENUTEXT_FORWARD5S
#define T_TOOLTIP_FORWARD5S     T_TIP_FORWARD10S
#define T_STATUSTIP_FORWARD5S   T_TIP_FORWARD10S
#define T_MENUTEXT_BACKWARD5S   0xd4
#define T_TIP_BACKWARD5S        T_MENUTEXT_BACKWARD5S
#define T_TOOLTIP_BACKWARD5S    T_TIP_BACKWARD5S
#define T_STATUSTIP_BACKWARD5S  T_TIP_BACKWARD5S

#define T_MENUTEXT_FORWARD10S   0xd5
#define T_TIP_FORWARD10S        T_MENUTEXT_FORWARD10S
#define T_TOOLTIP_FORWARD10S    T_TIP_FORWARD10S
#define T_STATUSTIP_FORWARD10S  T_TIP_FORWARD10S
#define T_MENUTEXT_BACKWARD10S  0xd6
#define T_TIP_BACKWARD10S       T_MENUTEXT_BACKWARD10S
#define T_TOOLTIP_BACKWARD10S   T_TIP_BACKWARD10S
#define T_STATUSTIP_BACKWARD10S T_TIP_BACKWARD10S

#define T_MENUTEXT_FORWARD30S   0xd7
#define T_TIP_FORWARD30S        T_MENUTEXT_FORWARD30S
#define T_TOOLTIP_FORWARD30S    T_TIP_FORWARD30S
#define T_STATUSTIP_FORWARD30S  T_TIP_FORWARD30S
#define T_MENUTEXT_BACKWARD30S  0xd8
#define T_TIP_BACKWARD30S       T_MENUTEXT_BACKWARD30S
#define T_TOOLTIP_BACKWARD30S   T_TIP_BACKWARD30S
#define T_STATUSTIP_BACKWARD30S T_TIP_BACKWARD30S

#define T_MENUTEXT_FORWARD60S   0xd9
#define T_TIP_FORWARD60S        T_MENUTEXT_FORWARD60S
#define T_TOOLTIP_FORWARD60S    T_TIP_FORWARD60S
#define T_STATUSTIP_FORWARD60S  T_TIP_FORWARD60S
#define T_MENUTEXT_BACKWARD60S  0xda
#define T_TIP_BACKWARD60S       T_MENUTEXT_BACKWARD60S
#define T_TOOLTIP_BACKWARD60S   T_TIP_BACKWARD60S
#define T_STATUSTIP_BACKWARD60S T_TIP_BACKWARD60S

#define T_MENUTEXT_FORWARD90S   0xdb
#define T_TIP_FORWARD90S        T_MENUTEXT_FORWARD90S
#define T_TOOLTIP_FORWARD90S    T_TIP_FORWARD90S
#define T_STATUSTIP_FORWARD90S  T_TIP_FORWARD90S
#define T_MENUTEXT_BACKWARD90S  0xdc
#define T_TIP_BACKWARD90S       T_MENUTEXT_BACKWARD90S
#define T_TOOLTIP_BACKWARD90S   T_TIP_BACKWARD90S
#define T_STATUSTIP_BACKWARD90S T_TIP_BACKWARD90S

#define T_MENUTEXT_FORWARD1M    0xdd
#define T_TIP_FORWARD1M         T_MENUTEXT_FORWARD1M
#define T_TOOLTIP_FORWARD1M     T_TIP_FORWARD1M
#define T_STATUSTIP_FORWARD1M   T_TIP_FORWARD1M
#define T_MENUTEXT_BACKWARD1M   0xde
#define T_TIP_BACKWARD1M        T_MENUTEXT_BACKWARD1M
#define T_TOOLTIP_BACKWARD1M    T_TIP_BACKWARD1M
#define T_STATUSTIP_BACKWARD1M  T_TIP_BACKWARD1M

#define T_MENUTEXT_FORWARD5M    0xdf
#define T_TIP_FORWARD5M         T_MENUTEXT_FORWARD5M
#define T_TOOLTIP_FORWARD5M     T_TIP_FORWARD5M
#define T_STATUSTIP_FORWARD5M   T_TIP_FORWARD5M
#define T_MENUTEXT_BACKWARD5M   0xe1
#define T_TIP_BACKWARD5M        T_MENUTEXT_BACKWARD5M
#define T_TOOLTIP_BACKWARD5M    T_TIP_BACKWARD5M
#define T_STATUSTIP_BACKWARD5M  T_TIP_BACKWARD5M

#define T_MENUTEXT_FORWARD10M   0xe2
#define T_TIP_FORWARD10M        T_MENUTEXT_FORWARD10M
#define T_TOOLTIP_FORWARD10M    T_TIP_FORWARD10M
#define T_STATUSTIP_FORWARD10M  T_TIP_FORWARD10M
#define T_MENUTEXT_BACKWARD10M  0xe3
#define T_TIP_BACKWARD10M       T_MENUTEXT_BACKWARD10M
#define T_TOOLTIP_BACKWARD10M   T_TIP_BACKWARD10M
#define T_STATUSTIP_BACKWARD10M T_TIP_BACKWARD10M

#define T_MENUTEXT_CONNECT      0xf0
#define T_TIP_CONNECT           0xf1
#define T_TOOLTIP_CONNECT       T_TIP_CONNECT
#define T_STATUSTIP_CONNECT     T_TIP_CONNECT
#define T_MENUTEXT_DISCONNECT   0xf2
#define T_TIP_DISCONNECT        0xf3
#define T_TOOLTIP_DISCONNECT    T_TIP_DISCONNECT
#define T_STATUSTIP_DISCONNECT  T_TIP_DISCONNECT

#define T_MENUTEXT_ANNOTATIONBROWSER    0xf4
#define T_TIP_ANNOTATIONBROWSER         0xf5
#define T_TOOLTIP_ANNOTATIONBROWSER     T_TIP_ANNOTATIONBROWSER
#define T_STATUSTIP_ANNOTATIONBROWSER   T_TIP_ANNOTATIONBROWSER

#define T_MENUTEXT_TOKENVIEW    0xf6
#define T_TIP_TOKENVIEW         0xf7
#define T_TOOLTIP_TOKENVIEW     T_TIP_TOKENVIEW
#define T_STATUSTIP_TOKENVIEW   T_TIP_TOKENVIEW

#define T_MENUTEXT_LIVE         0xf8
#define T_TIP_LIVE              0xf9
#define T_TOOLTIP_LIVE          T_TIP_LIVE
#define T_STATUSTIP_LIVE        T_TIP_LIVE

#define T_MENUTEXT_LIVEDIALOG   0xfa
#define T_TIP_LIVEDIALOG        0xfb
#define T_TOOLTIP_LIVEDIALOG    T_TIP_LIVEDIALOG
#define T_STATUSTIP_LIVEDIALOG  T_TIP_LIVEDIALOG

#define T_MENUTEXT_SYNC         0xfc
#define T_TIP_SYNC              0xfd
#define T_TOOLTIP_SYNC          T_TIP_SYNC
#define T_STATUSTIP_SYNC        T_TIP_SYNC

#define T_MENUTEXT_SYNCDIALOG   0xfe
#define T_TIP_SYNCDIALOG        0xff
#define T_TOOLTIP_SYNCDIALOG    T_TIP_SYNCDIALOG
#define T_STATUSTIP_SYNCDIALOG  T_TIP_SYNCDIALOG

#define T_MENUTEXT_COMMENTVIEW  0x101
#define T_TIP_COMMENTVIEW       0x102
#define T_TOOLTIP_COMMENTVIEW   T_TIP_COMMENTVIEW
#define T_STATUSTIP_COMMENTVIEW T_TIP_COMMENTVIEW

#define T_MENUTEXT_CLOUDVIEW    0x103
#define T_TIP_CLOUDVIEW         0x104
#define T_TOOLTIP_CLOUDVIEW    T_TIP_CLOUDVIEW
#define T_STATUSTIP_CLOUDVIEW  T_TIP_CLOUDVIEW

#define T_MENUTEXT_EDITTHISANNOT    0x105
#define T_TIP_EDITTHISANNOT         0x106
#define T_TOOLTIP_EDITTHISANNOT     T_TIP_EDITTHISANNOT
#define T_STATUSTIP_EDITTHISANNOT   T_TIP_EDITTHISANNOT

#define T_MENUTEXT_BLOCKTHISANNOT   0x107
#define T_TIP_BLOCKTHISANNOT        0x108
#define T_TOOLTIP_BLOCKTHISANNOT    T_TIP_BLOCKTHISANNOT
#define T_STATUSTIP_BLOCKTHISANNOT  T_TIP_BLOCKTHISANNOT

#define T_MENUTEXT_BLESSTHISANNOT   0x109
#define T_TIP_BLESSTHISANNOT        0x10a
#define T_TOOLTIP_BLESSTHISANNOT    T_TIP_BLESSTHISANNOT
#define T_STATUSTIP_BLESSTHISANNOT  T_TIP_BLESSTHISANNOT

#define T_MENUTEXT_CURSETHISANNOT   0x10b
#define T_TIP_CURSETHISANNOT        0x10c
#define T_TOOLTIP_CURSETHISANNOT    T_TIP_CURSETHISANNOT
#define T_STATUSTIP_CURSETHISANNOT  T_TIP_CURSETHISANNOT

#define T_MENUTEXT_HIDETHISANNOT    0x10e
#define T_TIP_HIDETHISANNOT         0x10f
#define T_TOOLTIP_HIDETHISANNOT     T_TIP_HIDETHISANNOT
#define T_STATUSTIP_HIDETHISANNOT   T_TIP_HIDETHISANNOT

#define T_MENUTEXT_SHOWTHISANNOT    0x111
#define T_TIP_SHOWTHISANNOT         0x112
#define T_TOOLTIP_SHOWTHISANNOT     T_TIP_SHOWTHISANNOT
#define T_STATUSTIP_SHOWTHISANNOT   T_TIP_SHOWTHISANNOT

#define T_MENUTEXT_VIEWTHISUSER     0x113
#define T_TIP_VIEWTHISUSER          0x114
#define T_TOOLTIP_VIEWTHISUSER      T_TIP_VIEWTHISUSER
#define T_STATUSTIP_VIEWTHISUSER    T_TIP_VIEWTHISUSER

#define T_MENUTEXT_BLOCKTHISUSER    0x115
#define T_TIP_BLOCKTHISUSER         0x116
#define T_TOOLTIP_BLOCKTHISUSER     T_TIP_BLOCKTHISUSER
#define T_STATUSTIP_BLOCKTHISUSER   T_TIP_BLOCKTHISUSER

#define T_MENUTEXT_COPYTHISANNOT    0x117
#define T_TIP_COPYTHISANNOT         0x118
#define T_TOOLTIP_COPYTHISANNOT     T_TIP_COPYTHISANNOT
#define T_STATUSTIP_COPYTHISANNOT   T_TIP_COPYTHISANNOT

#define T_MENUTEXT_EDIT          0x119
#define T_TIP_EDIT               0x11a
#define T_TOOLTIP_EDIT           T_TIP_EDIT
#define T_STATUSTIP_EDIT         T_TIP_EDIT

#define T_LABEL_CREATEDATE       0x121
#define T_TIP_CREATEDATE         0x122
#define T_TOOLTIP_CREATEDATE     T_TIP_CREATEDATE
#define T_STATUSTIP_CREATEDATE   T_TIP_CREATEDATE

#define T_LABEL_UPDATEDATE       0x123
#define T_TIP_UPDATEDATE         0x124
#define T_TOOLTIP_UPDATEDATE     T_TIP_UPDATEDATE
#define T_STATUSTIP_UPDATEDATE   T_TIP_UPDATEDATE

#define T_LABEL_BLESSEDCOUNT     0x125
#define T_TIP_BLESSEDCOUNT       0x126
#define T_TOOLTIP_BLESSEDCOUNT   T_TIP_BLESSEDCOUNT
#define T_STATUSTIP_BLESSEDCOUNT T_TIP_BLESSEDCOUNT

#define T_LABEL_CURSEDCOUNT      0x127
#define T_TIP_CURSEDCOUNT        0x128
#define T_TOOLTIP_CURSEDCOUNT    T_TIP_CURSEDCOUNT
#define T_STATUSTIP_CURSEDCOUNT  T_TIP_CURSEDCOUNT

#define T_LABEL_BLOCKEDCOUNT     0x129
#define T_TIP_BLOCKEDCOUNT       0x12a
#define T_TOOLTIP_BLOCKEDCOUNT   T_TIP_BLOCKEDCOUNT
#define T_STATUSTIP_BLOCKEDCOUNT T_TIP_BLOCKEDCOUNT

#define T_LABEL_VISITEDCOUNT     0x12b
#define T_TIP_VISITEDCOUNT       0x12c
#define T_TOOLTIP_VISITEDCOUNT   T_TIP_VISITEDCOUNT
#define T_STATUSTIP_VISITEDCOUNT T_TIP_VISITEDCOUNT

#define T_LABEL_ALIAS           0x12d
#define T_TIP_ALIAS             0x12e
#define T_TOOLTIP_ALIAS         T_TIP_ALIAS
#define T_STATUSTIP_ALIAS       T_TIP_ALIAS

#define T_LABEL_ANNOTCOUNT     0x12f
#define T_TIP_ANNOTCOUNT       0x130
#define T_TOOLTIP_ANNOTCOUNT   T_TIP_ANNOTCOUNT
#define T_STATUSTIP_ANNOTCOUNT T_TIP_ANNOTCOUNT

#define T_MENUTEXT_BLESSTHISTOKEN   0x131
#define T_TIP_BLESSTHISTOKEN        0x132
#define T_TOOLTIP_BLESSTHISTOKEN    T_TIP_BLESSTHISTOKEN
#define T_STATUSTIP_BLESSTHISTOKEN  T_TIP_BLESSTHISTOKEN

#define T_MENUTEXT_CURSETHISTOKEN   0x133
#define T_TIP_CURSETHISTOKEN        0x134
#define T_TOOLTIP_CURSETHISTOKEN    T_TIP_CURSETHISTOKEN
#define T_STATUSTIP_CURSETHISTOKEN  T_TIP_CURSETHISTOKEN

#define T_MENUTEXT_ADDALIAS         0x135
#define T_TIP_ADDALIAS              0x136
#define T_TOOLTIP_ADDALIAS          T_TIP_ADDALIAS
#define T_STATUSTIP_ADDALIAS        T_TIP_ADDALIAS

#define T_MENUTEXT_SIGNALVIEW       0x137
#define T_TIP_SIGNALVIEW            0x138
#define T_TOOLTIP_SIGNALVIEW        T_TIP_SIGNALVIEW
#define T_STATUSTIP_SIGNALVIEW      T_TIP_SIGNALVIEW

#define T_MENUTEXT_ATTACHPROCESS    0x139
#define T_TIP_ATTACHPROCESS         0x13a
#define T_TOOLTIP_ATTACHPROCESS     T_TIP_ATTACHPROCESS
#define T_STATUSTIP_ATTACHPROCESS   T_TIP_ATTACHPROCESS

#define T_MENUTEXT_DETACHPROCESS    0x13b
#define T_TIP_DETACHPROCESS         0x13c
#define T_TOOLTIP_DETACHPROCESS     T_TIP_DETACHPROCESS
#define T_STATUSTIP_DETACHPROCESS   T_TIP_DETACHPROCESS

#define T_MENUTEXT_REFRESHPROCESS   0x13d
#define T_TIP_REFRESHPROCESS        0x13e
#define T_TOOLTIP_REFRESHPROCESS    T_TIP_REFRESHPROCESS
#define T_STATUSTIP_REFRESHPROCESS  T_TIP_REFRESHPROCESS

#define T_MENUTEXT_RECENTMESSAGES   0x141
#define T_TIP_RECENTMESSAGES        0x142
#define T_TOOLTIP_RECENTMESSAGES    T_TIP_RECENTMESSAGES
#define T_STATUSTIP_RECENTMESSAGES  T_TIP_RECENTMESSAGES

#define T_MENUTEXT_ANNOTATIONEDITOR     0x143
#define T_TIP_ANNOTATIONEDITOR          0x144
#define T_TOOLTIP_ANNOTATIONEDITOR      T_TIP_ANNOTATIONEDITOR
#define T_STATUSTIP_ANNOTATIONEDITOR    T_TIP_ANNOTATIONEDITOR

#define T_MENUTEXT_APPLANGUAGE          0x145
#define T_TIP_APPLANGUAGE               0x146
#define T_TOOLTIP_APPLANGUAGE           T_TIP_APPLANGUAGE
#define T_STATUSTIP_APPLANGUAGE         T_TIP_APPLANGUAGE

#define T_MENUTEXT_USERLANGUAGE          0x147
#define T_TIP_USERLANGUAGE               0x148
#define T_TOOLTIP_USERLANGUAGE           T_TIP_USERLANGUAGE
#define T_STATUSTIP_USERLANGUAGE         T_TIP_USERLANGUAGE

#define T_MENUTEXT_ANNOTATIONLANGUAGE          0x149
#define T_TIP_ANNOTATIONLANGUAGE               0x14a
#define T_TOOLTIP_ANNOTATIONLANGUAGE           T_TIP_ANNOTATIONLANGUAGE
#define T_STATUSTIP_ANNOTATIONLANGUAGE         T_TIP_ANNOTATIONLANGUAGE

#define T_MENUTEXT_ANONYMOUS   0x14b
#define T_TIP_ANONYMOUS        0x14c
#define T_TOOLTIP_ANONYMOUS    T_TIP_ANONYMOUS
#define T_STATUSTIP_ANONYMOUS  T_TIP_ANONYMOUS

#define T_MENUTEXT_CLEARRECENT  0x14d
#define T_TIP_CLEARRECENT       0x14e
#define T_TOOLTIP_CLEARRECENT   T_TIP_CLEARRECENT
#define T_STATUSTIP_CLEARRECENT T_TIP_CLEARRECENT

#define T_MENUTEXT_RECENT       0x151
#define T_TIP_RECENT            0x152
#define T_TOOLTIP_RECENT        T_TIP_RECENT
#define T_STATUSTIP_RECENT      T_TIP_RECENT

#define T_MENUTEXT_RECENTFILE   T_NULL
#define T_TIP_RECENTFILE        T_NULL
#define T_TOOLTIP_RECENTFILE    T_TIP_RECENTFILE
#define T_STATUSTIP_RECENTFILE  T_TIP_RECENTFILE

#define T_MENUTEXT_PICKDIALOG   0x153
#define T_TIP_PICKDIALOG        0x154
#define T_TOOLTIP_PICKDIALOG    T_TIP_PICKDIALOG
#define T_STATUSTIP_PICKDIALOG  T_TIP_PICKDIALOG

#define T_MENUTEXT_WINDOWPICKDIALOG   0x155
#define T_TIP_WINDOWPICKDIALOG        0x156
#define T_TOOLTIP_WINDOWPICKDIALOG    T_TIP_WINDOWPICKDIALOG
#define T_STATUSTIP_WINDOWPICKDIALOG  T_TIP_WINDOWPICKDIALOG

#define T_MENUTEXT_PROCESSPICKDIALOG   0x157
#define T_TIP_PROCESSPICKDIALOG        0x158
#define T_TOOLTIP_PROCESSPICKDIALOG    T_TIP_PROCESSPICKDIALOG
#define T_STATUSTIP_PROCESSPICKDIALOG  T_TIP_PROCESSPICKDIALOG

#define T_MENUTEXT_MENU         0x159
#define T_TIP_MENU              0x15a
#define T_TOOLTIP_MENU          T_TIP_MENU
#define T_STATUSTIP_MENU        T_TIP_MENU

#define T_MENUTEXT_TRANSLATE    0x15b
#define T_TIP_TRANSLATE         0x15c
#define T_TOOLTIP_TRANSLATE     T_TIP_TRANSLATE
#define T_STATUSTIP_TRANSLATE   T_TIP_TRANSLATE

#define T_MENUTEXT_SUBTITLEONTOP    0x15d
#define T_TIP_SUBTITLEONTOP         0x15e
#define T_TOOLTIP_SUBTITLEONTOP     T_TIP_SUBTITLEONTOP
#define T_STATUSTIP_SUBTITLEONTOP   T_TIP_SUBTITLEONTOP

#define T_MENUTEXT_SECTION      0x15f
#define T_TIP_SECTION           0x160
#define T_TOOLTIP_SECTION       T_TIP_SECTION
#define T_STATUSTIP_SECTION     T_TIP_SECTION

#define T_MENUTEXT_SUBTITLESTYLE          0x161
#define T_TIP_SUBTITLESTYLE               0x162
#define T_TOOLTIP_SUBTITLESTYLE           T_TIP_SUBTITLESTYLE
#define T_STATUSTIP_SUBTITLESTYLE         T_TIP_SUBTITLESTYLE

#define T_MENUTEXT_THEME           0x163
#define T_TIP_THEME                0x164
#define T_TOOLTIP_THEME            T_TIP_THEME
#define T_STATUSTIP_THEME          T_TIP_THEME

#define T_DEFAULT       0x165
#define T_RANDOM        0x166
#define T_WINDOWS       0x167

#define T_REMOVE        0x168
#define T_CLEAR         0x169
#define T_ENABLE        0x16a
#define T_BLACKLIST     0x16b

#define T_MAXIMIZE      0x16c
#define T_MINIMIZE      0x16d
#define T_RESTORE       0x16e

#define T_OPEN       0x16f

#define T_MENUTEXT_RESTORE            T_RESTORE
#define T_TIP_RESTORE                 T_RESTORE
#define T_TOOLTIP_RESTORE             T_TIP_RESTORE
#define T_STATUSTIP_RESTORE           T_TIP_RESTORE

#define T_MENUTEXT_MAXIMIZE            T_MAXIMIZE
#define T_TIP_MAXIMIZE                 T_MAXIMIZE
#define T_TOOLTIP_MAXIMIZE             T_TIP_MAXIMIZE
#define T_STATUSTIP_MAXIMIZE           T_TIP_MAXIMIZE

#define T_MENUTEXT_MINIMIZE            T_MINIMIZE
#define T_TIP_MINIMIZE                 T_MINIMIZE
#define T_TOOLTIP_MINIMIZE             T_TIP_MINIMIZE
#define T_STATUSTIP_MINIMIZE           T_TIP_MINIMIZE

#define T_TITLE_BLACKLIST               T_BLACKLIST
#define T_MENUTEXT_BLACKLIST            T_BLACKLIST
#define T_TIP_BLACKLIST                 T_BLACKLIST
#define T_TOOLTIP_BLACKLIST             T_TIP_BLACKLIST
#define T_STATUSTIP_BLACKLIST           T_TIP_BLACKLIST

#define T_MENUTEXT_DEFAULTCOLOR         T_DEFAULT
#define T_TIP_DEFAULTCOLOR              T_MENUTEXT_DEFAULTCOLOR
#define T_TOOLTIP_DEFAULTCOLOR          T_TIP_DEFAULTCOLOR
#define T_STATUSTIP_DEFAULTCOLOR        T_TIP_DEFAULTCOLOR

#define T_MENUTEXT_REDCOLOR             T_RED
#define T_TIP_REDCOLOR                  T_MENUTEXT_REDCOLOR
#define T_TOOLTIP_REDCOLOR              T_TIP_REDCOLOR
#define T_STATUSTIP_REDCOLOR            T_TIP_REDCOLOR

#define T_MENUTEXT_WHITECOLOR           T_WHITE
#define T_TIP_WHITECOLOR                T_MENUTEXT_WHITECOLOR
#define T_TOOLTIP_WHITECOLOR            T_TIP_WHITECOLOR
#define T_STATUSTIP_WHITECOLOR          T_TIP_WHITECOLOR

#define T_MENUTEXT_BLUECOLOR            T_BLUE
#define T_TIP_BLUECOLOR                 T_MENUTEXT_BLUECOLOR
#define T_TOOLTIP_BLUECOLOR             T_TIP_BLUECOLOR
#define T_STATUSTIP_BLUECOLOR           T_TIP_BLUECOLOR

#define T_MENUTEXT_ORANGECOLOR          T_ORANGE
#define T_TIP_ORANGECOLOR               T_MENUTEXT_ORANGECOLOR
#define T_TOOLTIP_ORANGECOLOR           T_TIP_ORANGECOLOR
#define T_STATUSTIP_ORANGECOLOR         T_TIP_ORANGECOLOR

#define T_MENUTEXT_PURPLECOLOR          T_PURPLE
#define T_TIP_PURPLECOLOR               T_MENUTEXT_PURPLECOLOR
#define T_TOOLTIP_PURPLECOLOR           T_TIP_PURPLECOLOR
#define T_STATUSTIP_PURPLECOLOR         T_TIP_PURPLECOLOR

#define T_MENUTEXT_BLACKCOLOR           T_BLACK
#define T_TIP_BLACKCOLOR                T_MENUTEXT_BLACKCOLOR
#define T_TOOLTIP_BLACKCOLOR            T_TIP_BLACKCOLOR
#define T_STATUSTIP_BLACKCOLOR          T_TIP_BLACKCOLOR

#define T_MENUTEXT_DEFAULTTHEME         T_DEFAULT
#define T_TIP_DEFAULTTHEME              T_MENUTEXT_DEFAULTTHEME
#define T_TOOLTIP_DEFAULTTHEME          T_TIP_DEFAULTTHEME
#define T_STATUSTIP_DEFAULTTHEME        T_TIP_DEFAULTTHEME

#define T_MENUTEXT_RANDOMTHEME          T_RANDOM
#define T_TIP_RANDOMTHEME               T_MENUTEXT_RANDOMTHEME
#define T_TOOLTIP_RANDOMTHEME           T_TIP_RANDOMTHEME
#define T_STATUSTIP_RANDOMTHEME         T_TIP_RANDOMTHEME

#define T_MENUTEXT_BLACKTHEME1          0x170
#define T_TIP_BLACKTHEME1               T_MENUTEXT_BLACKTHEME1
#define T_TOOLTIP_BLACKTHEME1           T_TIP_BLACKTHEME1
#define T_STATUSTIP_BLACKTHEME1         T_TIP_BLACKTHEME1
#define T_MENUTEXT_BLACKTHEME2          0x171
#define T_TIP_BLACKTHEME2               T_MENUTEXT_BLACKTHEME2
#define T_TOOLTIP_BLACKTHEME2           T_TIP_BLACKTHEME2
#define T_STATUSTIP_BLACKTHEME2         T_TIP_BLACKTHEME2

#define T_MENUTEXT_BLUETHEME1           0x172
#define T_TIP_BLUETHEME1                T_MENUTEXT_BLUETHEME1
#define T_TOOLTIP_BLUETHEME1            T_TIP_BLUETHEME1
#define T_STATUSTIP_BLUETHEME1          T_TIP_BLUETHEME1
#define T_MENUTEXT_BLUETHEME2           0x173
#define T_TIP_BLUETHEME2                T_MENUTEXT_BLUETHEME2
#define T_TOOLTIP_BLUETHEME2            T_TIP_BLUETHEME2
#define T_STATUSTIP_BLUETHEME2          T_TIP_BLUETHEME2

#define T_MENUTEXT_BROWNTHEME1          0x174
#define T_TIP_BROWNTHEME1               T_MENUTEXT_BROWNTHEME1
#define T_TOOLTIP_BROWNTHEME1           T_TIP_BROWNTHEME1
#define T_STATUSTIP_BROWNTHEME1         T_TIP_BROWNTHEME1
#define T_MENUTEXT_BROWNTHEME2          0x175
#define T_TIP_BROWNTHEME2               T_MENUTEXT_BROWNTHEME2
#define T_TOOLTIP_BROWNTHEME2           T_TIP_BROWNTHEME2
#define T_STATUSTIP_BROWNTHEME2         T_TIP_BROWNTHEME2

#define T_MENUTEXT_GREENTHEME1          0x176
#define T_TIP_GREENTHEME1               T_MENUTEXT_GREENTHEME1
#define T_TOOLTIP_GREENTHEME1           T_TIP_GREENTHEME1
#define T_STATUSTIP_GREENTHEME1         T_TIP_GREENTHEME1
#define T_MENUTEXT_GREENTHEME2          0x177
#define T_TIP_GREENTHEME2               T_MENUTEXT_GREENTHEME2
#define T_TOOLTIP_GREENTHEME2           T_TIP_GREENTHEME2
#define T_STATUSTIP_GREENTHEME2         T_TIP_GREENTHEME2

#define T_MENUTEXT_LIGHTBLUETHEME1      0x178
#define T_TIP_LIGHTBLUETHEME1           T_MENUTEXT_LIGHTBLUETHEME1
#define T_TOOLTIP_LIGHTBLUETHEME1       T_TIP_LIGHTBLUETHEME1
#define T_STATUSTIP_LIGHTBLUETHEME1     T_TIP_LIGHTBLUETHEME1
#define T_MENUTEXT_LIGHTBLUETHEME2      0x179
#define T_TIP_LIGHTBLUETHEME2           T_MENUTEXT_LIGHTBLUETHEME2
#define T_TOOLTIP_LIGHTBLUETHEME2       T_TIP_LIGHTBLUETHEME2
#define T_STATUSTIP_LIGHTBLUETHEME2     T_TIP_LIGHTBLUETHEME2

#define T_MENUTEXT_ORANGETHEME1         0x17a
#define T_TIP_ORANGETHEME1              T_MENUTEXT_ORANGETHEME1
#define T_TOOLTIP_ORANGETHEME1          T_TIP_ORANGETHEME1
#define T_STATUSTIP_ORANGETHEME1        T_TIP_ORANGETHEME1
#define T_MENUTEXT_ORANGETHEME2         0x17b
#define T_TIP_ORANGETHEME2              T_MENUTEXT_ORANGETHEME2
#define T_TOOLTIP_ORANGETHEME2          T_TIP_ORANGETHEME2
#define T_STATUSTIP_ORANGETHEME2        T_TIP_ORANGETHEME2

#define T_MENUTEXT_PINKTHEME1           0x17c
#define T_TIP_PINKTHEME1                T_MENUTEXT_PINKTHEME1
#define T_TOOLTIP_PINKTHEME1            T_TIP_PINKTHEME1
#define T_STATUSTIP_PINKTHEME1          T_TIP_PINKTHEME1
#define T_MENUTEXT_PINKTHEME2           0x17d
#define T_TIP_PINKTHEME2                T_MENUTEXT_PINKTHEME2
#define T_TOOLTIP_PINKTHEME2            T_TIP_PINKTHEME2
#define T_STATUSTIP_PINKTHEME2          T_TIP_PINKTHEME2

#define T_MENUTEXT_PURPLETHEME1         0x17e
#define T_TIP_PURPLETHEME1              T_MENUTEXT_PURPLETHEME1
#define T_TOOLTIP_PURPLETHEME1          T_TIP_PURPLETHEME1
#define T_STATUSTIP_PURPLETHEME1        T_TIP_PURPLETHEME1
#define T_MENUTEXT_PURPLETHEME2         0x17f
#define T_TIP_PURPLETHEME2              T_MENUTEXT_PURPLETHEME2
#define T_TOOLTIP_PURPLETHEME2          T_TIP_PURPLETHEME2
#define T_STATUSTIP_PURPLETHEME2        T_TIP_PURPLETHEME2

#define T_MENUTEXT_REDTHEME1            0x180
#define T_TIP_REDTHEME1                 T_MENUTEXT_REDTHEME1
#define T_TOOLTIP_REDTHEME1             T_TIP_REDTHEME1
#define T_STATUSTIP_REDTHEME1           T_TIP_REDTHEME1
#define T_MENUTEXT_REDTHEME2            0x181
#define T_TIP_REDTHEME2                 T_MENUTEXT_REDTHEME2
#define T_TOOLTIP_REDTHEME2             T_TIP_REDTHEME2
#define T_STATUSTIP_REDTHEME2           T_TIP_REDTHEME2

#define T_MENUTEXT_YELLOWTHEME1         0x182
#define T_TIP_YELLOWTHEME1              T_MENUTEXT_YELLOWTHEME1
#define T_TOOLTIP_YELLOWTHEME1          T_TIP_YELLOWTHEME1
#define T_STATUSTIP_YELLOWTHEME1        T_TIP_YELLOWTHEME1
#define T_MENUTEXT_YELLOWTHEME2         0x183
#define T_TIP_YELLOWTHEME2              T_MENUTEXT_YELLOWTHEME2
#define T_TOOLTIP_YELLOWTHEME2          T_TIP_YELLOWTHEME2
#define T_STATUSTIP_YELLOWTHEME2        T_TIP_YELLOWTHEME2

#define T_MENUTEXT_WINDOWSTHEME1        0x184
#define T_TIP_WINDOWSTHEME1             T_MENUTEXT_WINDOWSTHEME1
#define T_TOOLTIP_WINDOWSTHEME1         T_TIP_WINDOWSTHEME1
#define T_STATUSTIP_WINDOWSTHEME1       T_TIP_WINDOWSTHEME1
#define T_MENUTEXT_WINDOWSTHEME2        0x185
#define T_TIP_WINDOWSTHEME2             T_MENUTEXT_WINDOWSTHEME2
#define T_TOOLTIP_WINDOWSTHEME2         T_TIP_WINDOWSTHEME2
#define T_STATUSTIP_WINDOWSTHEME2       T_TIP_WINDOWSTHEME2

#define T_MENUTEXT_BROWSE       0x191
#define T_TIP_BROWSE            0x192
#define T_TOOLTIP_BROWSE        T_TIP_BROWSE
#define T_STATUSTIP_BROWSE      T_TIP_BROWSE

#define T_MENUTEXT_EMBED         0x193
#define T_TIP_EMBED              0x194
#define T_TOOLTIP_EMBED          T_TIP_EMBED
#define T_STATUSTIP_EMBED        T_TIP_EMBED

#define T_MENUTEXT_EMBEDONTOP    0x195
#define T_TIP_EMBEDONTOP         0x196
#define T_TOOLTIP_EMBEDONTOP     T_TIP_EMBEDONTOP
#define T_STATUSTIP_EMBEDONTOP   T_TIP_EMBEDONTOP

#define T_MENUTEXT_TRACK         0x197
#define T_TIP_TRACK              0x198
#define T_TOOLTIP_TRACK          T_TIP_TRACK
#define T_STATUSTIP_TRACK        T_TIP_TRACK

#define T_MENUTEXT_AUTOPLAYNEXT         0x199
#define T_TIP_AUTOPLAYNEXT              0x19a
#define T_TOOLTIP_AUTOPLAYNEXT          T_TIP_AUTOPLAYNEXT
#define T_STATUSTIP_AUTOPLAYNEXT        T_TIP_AUTOPLAYNEXT

#define T_MENUTEXT_SHOWMENUBAR         0x19b
#define T_TIP_SHOWMENUBAR              0x19c
#define T_TOOLTIP_SHOWMENUBAR          T_TIP_SHOWMENUBAR
#define T_STATUSTIP_SHOWMENUBAR        T_TIP_SHOWMENUBAR

#define T_MENUTEXT_PLAYLIST       0x19d
#define T_TIP_PLAYLIST            0x19e
#define T_TOOLTIP_PLAYLIST        T_TIP_PLAYLIST
#define T_STATUSTIP_PLAYLIST      T_TIP_PLAYLIST

#define T_MENUTEXT_CLEARPLAYLIST  T_CLEAR
#define T_TIP_CLEARPLAYLIST       T_CLEAR
#define T_TOOLTIP_CLEARPLAYLIST   T_TIP_CLEARPLAYLIST
#define T_STATUSTIP_CLEARPLAYLIST T_TIP_CLEARPLAYLIST

#define T_MENUTEXT_CLEAR          0x19f
#define T_TIP_CLEAR               0x1a0
#define T_TOOLTIP_CLEAR           T_TIP_CLEAR
#define T_STATUSTIP_CLEAR         T_TIP_CLEAR

#define T_MENUTEXT_DELETETHISANNOT    0x1a1
#define T_TIP_DELETETHISANNOT         0x1a2
#define T_TOOLTIP_DELETETHISANNOT     T_TIP_DELETETHISANNOT
#define T_STATUSTIP_DELETETHISANNOT   T_TIP_DELETETHISANNOT

#define T_DELETE                0x1a3
#define T_MENUTEXT_DELETE       T_DELETE
#define T_TIP_DELETE            T_DELETE
#define T_TOOLTIP_DELETE        T_TIP_DELETE
#define T_STATUSTIP_DELETE      T_TIP_DELETE

#define T_TITLE_SUBTITLEVIEW    0x1a4
#define T_MENUTEXT_SUBTITLEVIEW 0x1a5
#define T_TIP_SUBTITLEVIEW      0x1a6
#define T_TOOLTIP_SUBTITLEVIEW     T_TIP_SUBTITLEVIEW
#define T_STATUSTIP_SUBTITLEVIEW   T_TIP_SUBTITLEVIEW

#define T_BACKLOG               0x1a7
#define T_TITLE_BACKLOGVIEW     T_BACKLOG
#define T_MENUTEXT_BACKLOG      T_BACKLOG
#define T_TIP_BACKLOG           T_BACKLOG
#define T_TOOLTIP_BACKLOG       T_TIP_BACKLOG
#define T_STATUSTIP_BACKLOG     T_TIP_BACKLOG

#endif // TR_H
