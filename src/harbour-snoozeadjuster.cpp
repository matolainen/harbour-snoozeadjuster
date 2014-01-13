#ifdef QT_QML_DEBUG
#include <QtQuick>
#endif

#include <sailfishapp.h>

#include <QtGlobal>
#include <QtQml>
#include <QQmlExtensionPlugin>

#include "adjustment.h"

int main(int argc, char *argv[])
{
    qmlRegisterType<Adjustment>("harbour.snoozeadjuster.adjustment",1,0,"Adjustment");
    return SailfishApp::main(argc, argv);
}
