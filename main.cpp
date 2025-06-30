#include <QApplication>
#include <QPushButton>
#include "myobject.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QPushButton button("Click me");
    MyObject obj;

    QObject::connect(&button, &QPushButton::clicked, &obj, &MyObject::onClicked);

    button.show();
    return app.exec();
}
