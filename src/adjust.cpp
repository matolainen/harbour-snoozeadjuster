#include "adjustment.h"

void Adjustment::set_adjustment(double delay) {
    QProcess *process = new QProcess(this);
    delay = delay*60;
    QString delay_str = QString::number(delay);
    QString cmd = "timedclient-qt5 --set-snooze=" + delay_str;
    process->start(cmd);
}
double Adjustment::get_adjustment() {
    QProcess *process = new QProcess(this);
    QString cmd = "timedclient-qt5 --get-snooze";
    process->start(cmd);
    process->waitForReadyRead();
    QString delay_sec = process->readAllStandardOutput();
    process->close();
    double delay = (delay_sec.toDouble())/60;
    return delay;
}

