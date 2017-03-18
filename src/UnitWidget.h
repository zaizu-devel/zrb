#ifndef H_ZRB_UNITWIDGET
#define H_ZRB_UNITWIDGET
#include "ui_unit.h"

class UnitWidget : public QWidget, private Ui::UnitForm
{
    Q_OBJECT

public:
    UnitWidget(QWidget* parent = 0) : QWidget(parent)
    {
        setupUi(this);
    }

    QWidget* contentWidget()
    {
    	return ContentWidget;
    }

    void addItem(QWidget* item)
    {
        ContentWidget->layout()->addWidget(item);
    }


};
#endif //H_ZRB_UNITWIDGET
