#ifndef SIGNALDEMO_H
#define SIGNALDEMO_H

#include <QObject>

class SignalDemo : public QObject
{
    Q_OBJECT
public:
    explicit SignalDemo(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SIGNALDEMO_H