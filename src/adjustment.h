#ifndef ADJUSTMENT_H
#define ADJUSTMENT_H

#include<QString>
#include<QObject>
#include<QProcess>

class Adjustment : public QObject {
    Q_OBJECT
public:
    Q_INVOKABLE void set_adjustment(double delay);
    Q_INVOKABLE double get_adjustment();
};

#endif // ADJUSTMENT_H
