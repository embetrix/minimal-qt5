#include "myobject.h"
#include <QDebug>

MyObject::MyObject(QObject *parent) : QObject(parent) {}

void MyObject::onClicked() {
    qDebug() << "Button clicked!";
}
