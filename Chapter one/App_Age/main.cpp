#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Создаём виджет для размещения на нём разнообразных элементов
    QWidget *window = new QWidget;

    // Устанавливаем заголовок для нашего виджета
    window->setWindowTitle("Введите ваш возраст");

    // Создаём spinBox
    QSpinBox *spinBox = new QSpinBox;

    // Создаём slider
    QSlider *slider = new QSlider(Qt::Horizontal);

    // Устанавливаем границу от 0 до 130
    spinBox->setRange(0, 130);

    // Устанавливаем границу от 0 до 130
    slider->setRange(0, 130);

    // Соединяем сигналы и слоты
    QObject::connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

    // Устанавливаем у spinBox значение 35
    spinBox->setValue(35);

    // Создаём горизонтальный слой
    QHBoxLayout *hBoxLayout = new QHBoxLayout;

    // Добавляем в слой виджеты
    hBoxLayout->addWidget(spinBox);
    hBoxLayout->addWidget(slider);

    // Установляем слой для нашего виджета окна
    window->setLayout(hBoxLayout);

    // Показываем окно
    window->show();

    return a.exec();
}
