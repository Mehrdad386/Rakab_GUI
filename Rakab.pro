QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../../Rakab/Entity/Declration/Bahar.cpp \
    ../../Rakab/Entity/Declration/Card.cpp \
    ../../Rakab/Entity/Declration/City.cpp \
    ../../Rakab/Entity/Declration/Foksefid.cpp \
    ../../Rakab/Entity/Declration/Game.cpp \
    ../../Rakab/Entity/Declration/Map.cpp \
    ../../Rakab/Entity/Declration/Matarsak.cpp \
    ../../Rakab/Entity/Declration/ParchamDar.cpp \
    ../../Rakab/Entity/Declration/PirpleCard.cpp \
    ../../Rakab/Entity/Declration/Player.cpp \
    ../../Rakab/Entity/Declration/RakhshSefid.cpp \
    ../../Rakab/Entity/Declration/RishSefid.cpp \
    ../../Rakab/Entity/Declration/ShirDokht.cpp \
    ../../Rakab/Entity/Declration/ShirZan.cpp \
    ../../Rakab/Entity/Declration/ShirinAghl.cpp \
    ../../Rakab/Entity/Declration/TablZan.cpp \
    ../../Rakab/Entity/Declration/YellowCard.cpp \
    ../../Rakab/Entity/Declration/Zemestan.cpp \
    gameoutput.cpp \
    help.cpp \
    information.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../../Rakab/Entity/Interface/Bahar.h \
    ../../Rakab/Entity/Interface/Card.h \
    ../../Rakab/Entity/Interface/City.h \
    ../../Rakab/Entity/Interface/FokSefid.h \
    ../../Rakab/Entity/Interface/Game.h \
    ../../Rakab/Entity/Interface/Map.h \
    ../../Rakab/Entity/Interface/Matarsak.h \
    ../../Rakab/Entity/Interface/ParchamDar.h \
    ../../Rakab/Entity/Interface/PirpleCard.h \
    ../../Rakab/Entity/Interface/Player.h \
    ../../Rakab/Entity/Interface/RakhshSefid.h \
    ../../Rakab/Entity/Interface/RishSefid.h \
    ../../Rakab/Entity/Interface/ShirDokht.h \
    ../../Rakab/Entity/Interface/ShirZan.h \
    ../../Rakab/Entity/Interface/ShirinAghl.h \
    ../../Rakab/Entity/Interface/TablZan.h \
    ../../Rakab/Entity/Interface/YellowCard.h \
    ../../Rakab/Entity/Interface/Zemestan.h \
    gameoutput.h \
    help.h \
    information.h \
    mainwindow.h

FORMS += \
    gameoutput.ui \
    help.ui \
    information.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
