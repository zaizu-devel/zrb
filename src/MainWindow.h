#ifndef H_ZRB_MAINWINDOW
#define H_ZRB_MAINWINDOW
#include "ui_main.h"

#include <QWidget>
#include <QMouseEvent>

class UnitWidget;

class MainWindow : public QWidget, private Ui::MainForm
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = 0);
    ~MainWindow();

private slots:

protected:
    void mouseMoveEvent(QMouseEvent *event);// Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event);// Q_DECL_OVERRIDE;
    void paintEvent(QPaintEvent *event);// Q_DECL_OVERRIDE;


private:
    QPoint dragPosition;

    UnitWidget* _unitWidget;

};
#endif //H_ZRB_MAINWINDOW
