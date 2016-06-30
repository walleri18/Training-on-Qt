#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    // Создание кнопки и задание надписи на ней
    QPushButton *button = new QPushButton("Quit");

    // Соединение сигнала от кнопки к слоту главного окна (конкретнее к слоту для закрытия приложения)
    QObject::connect(button, SIGNAL(clicked(bool)), &application, SLOT(quit()));

    button->show();

    return application.exec();
}
