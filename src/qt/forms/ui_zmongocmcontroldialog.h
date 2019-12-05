/********************************************************************************
** Form generated from reading UI file 'zmongocmcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZMONGOCMCONTROLDIALOG_H
#define UI_ZMONGOCMCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZMONGOCMControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZMONGOCM;
    QLabel *labelZMONGOCM_int;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout3;
    QPushButton *pushButtonAll;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout1;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZMONGOCMControlDialog)
    {
        if (ZMONGOCMControlDialog->objectName().isEmpty())
            ZMONGOCMControlDialog->setObjectName(QStringLiteral("ZMONGOCMControlDialog"));
        ZMONGOCMControlDialog->resize(681, 450);
        ZMONGOCMControlDialog->setMinimumSize(QSize(681, 450));
        verticalLayout = new QVBoxLayout(ZMONGOCMControlDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(-1);
#endif
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 10);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(6, -1, 6, -1);
        labelQuantity = new QLabel(ZMONGOCMControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZMONGOCMControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZMONGOCM = new QLabel(ZMONGOCMControlDialog);
        labelZMONGOCM->setObjectName(QStringLiteral("labelZMONGOCM"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZMONGOCM);

        labelZMONGOCM_int = new QLabel(ZMONGOCMControlDialog);
        labelZMONGOCM_int->setObjectName(QStringLiteral("labelZMONGOCM_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZMONGOCM_int);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setSpacing(14);
        horizontalLayout3->setObjectName(QStringLiteral("horizontalLayout3"));
        horizontalLayout3->setContentsMargins(-1, -1, -1, 10);
        pushButtonAll = new QPushButton(ZMONGOCMControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        horizontalLayout3->addWidget(pushButtonAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout3);

        verticalLayout1 = new QVBoxLayout();
        verticalLayout1->setObjectName(QStringLiteral("verticalLayout1"));
        treeWidget = new QTreeWidget(ZMONGOCMControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(4, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(3, QStringLiteral("zMONGOCM Version"));
        __qtreewidgetitem->setText(2, QStringLiteral("zMONGOCM ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout1->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZMONGOCMControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout1->addWidget(buttonBox);


        verticalLayout->addLayout(verticalLayout1);


        retranslateUi(ZMONGOCMControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZMONGOCMControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZMONGOCMControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZMONGOCMControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZMONGOCMControlDialog)
    {
        ZMONGOCMControlDialog->setWindowTitle(QApplication::translate("ZMONGOCMControlDialog", "Select zMONGOCM to Spend", 0));
        labelQuantity->setText(QApplication::translate("ZMONGOCMControlDialog", "Quantity", 0));
        labelQuantity_int->setText(QApplication::translate("ZMONGOCMControlDialog", "0", 0));
        labelZMONGOCM->setText(QApplication::translate("ZMONGOCMControlDialog", "zMONGOCM", 0));
        labelZMONGOCM_int->setText(QApplication::translate("ZMONGOCMControlDialog", "0", 0));
        pushButtonAll->setText(QApplication::translate("ZMONGOCMControlDialog", "Select/Deselect All", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("ZMONGOCMControlDialog", "Is Spendable", 0));
    } // retranslateUi

};

namespace Ui {
    class ZMONGOCMControlDialog: public Ui_ZMONGOCMControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZMONGOCMCONTROLDIALOG_H
