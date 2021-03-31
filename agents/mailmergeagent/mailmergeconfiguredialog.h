/*
   SPDX-FileCopyrightText: 2021 Laurent Montel <montel@kde.org>

   SPDX-License-Identifier: GPL-2.0-or-later
*/

#pragma once

#include <QDialog>

class MailMergeConfigureDialog : public QDialog
{
    Q_OBJECT
public:
    explicit MailMergeConfigureDialog(QWidget *parent = nullptr);
    ~MailMergeConfigureDialog() override;
};