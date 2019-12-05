// Copyright (c) 2017 The MONGOcm developers
// Copyright (c) 2017-2018 The MONGOcm developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZMONGOCMCONTROLDIALOG_H
#define ZMONGOCMCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "primitives/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZMONGOCMControlDialog;
}

class ZMONGOCMControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZMONGOCMControlDialog(QWidget *parent);
    ~ZMONGOCMControlDialog();

    void setModel(WalletModel* model);

    static std::list<std::string> listSelectedMints;
    static std::list<CZerocoinMint> listMints;
    static std::vector<CZerocoinMint> GetSelectedMints();

private:
    Ui::ZMONGOCMControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZMONGOCMCONTROLDIALOG_H
