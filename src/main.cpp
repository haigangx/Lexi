#include "LexiApp.h"
#include <QApplication>
#include <QWidget>

int main(int argc, char* argv[])
{
    LexiApp lexi;
    lexi.run();

    QApplication app(argc, argv);
    QWidget* pWidget = new QWidget();
    pWidget->show();
    return app.exec();
};
