#include <QApplication>
//#include <QMainWindow>
//#include <QWidget>

//#include "controllerwindow.h"

#include "MainWindow.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    MainWindow mainWidget(0);
    mainWidget.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWidget.show();



    //mainWidget.pushButton->setText("0");

    //QWidget* embedWidget = 0;
	//QVBoxLayout* layout = 0;

	//	embedWidget = new ClosableWidget();
//
//
	//layout = new QVBoxLayout(mainWidget.widget_3);
	//layout->setSpacing(0);
	//layout->setContentsMargins(0, 0, 0, 0);
	//mainWidget.widget_3->setLayout(layout);


	//MainWindow* embedWidget = new MainWindow(mainWidget.widget_3);
	//embedWidget->pushButton->setText("1");
//mainWidget.widget_3->layout()->addWidget(embedWidget);

	//MainWindow* embedWidget2 = new MainWindow();
	//embedWidget2->pushButton->setText("2");


	//MainWindow* embedWidget21 = new MainWindow();
	//embedWidget21->pushButton->setText("3");
	//MainWindow* embedWidget3 = new MainWindow(embedWidget2->widget_3);


	//layout = new QVBoxLayout(embedWidget->widget_3);
	//layout->setSpacing(0);
	//layout->setContentsMargins(0, 0, 0, 0);
	////layout->addWidget(embedWidget);
	//layout->addWidget(embedWidget2);
	//layout->addWidget(embedWidget21);
	//layout->addWidget(embedWidget3);
       // embedWidget3->widget_3->setMaximumSize(QSize(16777215, 0));


    //QVBoxLayout *mainLayout = new QVBoxLayout;
    //mainLayout->setSpacing(0);
	//mainLayout->setContentsMargins(0, 0, 0, 0);
    //mainLayout->addWidget(embedWidget2);
    //mainLayout->addWidget(embedWidget21);
    //mainLayout->addLayout(embedWidget3);
    //embedWidget->widget_3->setLayout(mainLayout);



    return app.exec();
}
