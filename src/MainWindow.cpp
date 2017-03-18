#include "UnitWidget.h"
#include "MainWindow.h"


MainWindow::MainWindow(QWidget* parent) : QWidget(parent)
{
    setupUi(this);
    _unitWidget = new UnitWidget(this->ContentTreeWidget);

    this->ContentTreeWidget->layout()->addWidget(_unitWidget);

    QObject::connect(this->TitleExitButton, SIGNAL(clicked()), this, SLOT(close()));


    UnitWidget* _unitWidget2 = new UnitWidget(_unitWidget->contentWidget());
    _unitWidget->addItem(_unitWidget2);

    //exit hotkey
    QAction *quitAction = new QAction(tr("E&xit"), this);
    quitAction->setShortcut(tr("Ctrl+Q"));
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
    addAction(quitAction);


}

MainWindow::~MainWindow()
{
    delete _unitWidget;
}


void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPos() - dragPosition);
        event->accept();
    }
}

void MainWindow::paintEvent(QPaintEvent *)
{
    //setupUi(this);
}
