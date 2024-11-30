#include <QApplication>
#include <QPushButton>
#include <QFont>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QPushButton button;
    QFont font ("Courier");
    button.setFont(font);
    button.setText("My text");
    button.setToolTip("A tooltip");
    button.show();

    return app.exec();
}
