#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>

class MyObject : public QObject {
    Q_OBJECT

public:
    explicit MyObject(QObject *parent = nullptr);

signals:
    void customSignal();  // <-- Force moc generation

public slots:
    void onClicked();
};

#endif // MYOBJECT_H
