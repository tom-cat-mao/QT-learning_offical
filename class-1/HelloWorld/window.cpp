#include "window.h"
#include <QPushButton>
#include <QApplication>

Window::Window(QWidget *parent) :
    QWidget(parent) {
    // Set size of the window
    setFixedSize(100, 50);

    //Create and position the button
    m_button = new QPushButton("Hello world", this);
    m_button->setGeometry(10, 10, 80, 30);

    // Make the connection
    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
}
