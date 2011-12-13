:: annot-player.update.cmd
:: 11/5/2011
setlocal
cd /d d:/devel/releases/player || exit 1
test -e "Delete Caches.cmd" || exit 1

set VERSION=0.1.1.2
set APP=annot-player
set ZIPFILE=%APP%-%VERSION%-win.zip
set ZIP=zip -9

set QT_HOME=/Volumes/win/qt/sdk
set QT_DLLS=QtCore4.dll,QtGui4.dll,QtNetwork4.dll,QtSql4.dll,QtWebkit4.dll,QtXml4.dll,phonon4.dll

set ITH_HOME=/Volumes/win/dev/ith
set ITH_DLLS=ITH.dll,ITH_engine.dll

set ZLIB_HOME=/Volumes/win/dev/zlib
set ZLIB_DLL=zlib1.dll

set VLC_HOME=/Volumes/win/Program Files/VideoLAN/VLC
set VLC_DLLS=libvlc.dll,libvlccore.dll
set VLC_PLUGINS=plugins,lua

set BUILD=/Volumes/local/devel/annot-build-desktop/build.win
set SOURCE=/Volumes/local/devel/annot

:: deploy into app dir

rm -Rf "%APP%"
mkdir "%APP%"
cd "%APP%" || exit 1

cp -v "%BUILD%/Annot Player.exe" .

cp -v "%SOURCE%/README" "Read Me.txt"
unix2dos "Read Me.txt"

rm -Rf licenses
cp -R "%SOURCE%/licenses" .
cp "%SOURCE%/COPYING" licenses/COPYING.txt
cp "%SOURCE%/ChangeLog" licenses/ChangeLog.txt

unix2dos licenses/ChangeLog.txt

:: deploy modules
mkdir modules
cd modules || exit 1

mkdir imageformats
cp -v "%QT_HOME%"/plugins/imageformats/qjpeg4.dll imageformats

mkdir sqldrivers
cp -v "%QT_HOME%"/plugins/sqldrivers/qsqlite4.dll sqldrivers

cp -v "%QT_HOME%"/bin/{%QT_DLLS%} . | exit 1

cp -v "%ITH_HOME%"/bin/{%ITH_DLLS%} . | exit 1
cp -v "%ZLIB_HOME%"/bin/%ZLIB_DLL% . | exit 1

cp -Rv "%VLC_HOME%"/{%VLC_PLUGINS%} . | exit 1
rm -fv plugins/*.dat*

cp -v "%BUILD%"/*.{exe,dll} .

rm -f "Annot Player.exe"
rm -fv hook.dll

cd ..

:: repair permissions

chown -R jichi .
chmod -R 755 .

:: archive
::call "Delete Caches.cmd"

cd ..

rm -f "%ZIPFILE%"
%ZIP% -r "%ZIPFILE%" "%APP%" > nul

:: EOF