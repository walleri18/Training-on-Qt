#include <QApplication>
#include "finddialog.h"

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    MainWidget *dialog = new MainWidget;
    dialog->show();

    return application.exec();
}
