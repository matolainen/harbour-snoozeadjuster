# The name of your app.
# NOTICE: name defined in TARGET has a corresponding QML filename.
#         If name defined in TARGET is changed, following needs to be
#         done to match new name:
#         - corresponding QML filename must be changed
#         - desktop icon filename must be changed
#         - desktop filename must be changed
#         - icon definition filename in desktop file must be changed
TARGET = harbour-snoozeadjuster

CONFIG += sailfishapp

SOURCES += src/harbour-snoozeadjuster.cpp \
    src/adjust.cpp

OTHER_FILES += qml/harbour-snoozeadjuster.qml \
    qml/cover/CoverPage.qml \
    qml/pages/FirstPage.qml \
    rpm/harbour-snoozeadjuster.spec \
    rpm/harbour-snoozeadjuster.yaml \
    harbour-snoozeadjuster.desktop

HEADERS += \
    src/adjustment.h

