#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    // Создаём объект на приложение
    QApplication application(argc, argv);

    // Создаём указатель на элемент для надписи
    QLabel *label = new QLabel("Hello Qt!");

    label->show();

    return application.exec();
}
