/*
   SPDX-FileCopyrightText: 2019-2021 Laurent Montel <montel@kde.org>

   SPDX-License-Identifier: GPL-2.0-or-later
*/

#ifndef REFRESHSETTRINGSFINISHPAGE_H
#define REFRESHSETTRINGSFINISHPAGE_H

#include <QWidget>
class QPlainTextEdit;
class RefreshSettringsFinishPage : public QWidget
{
    Q_OBJECT
public:
    explicit RefreshSettringsFinishPage(QWidget *parent = nullptr);
    ~RefreshSettringsFinishPage() override;

Q_SIGNALS:
    void cleanDoneInfo(const QString &info);

private:
    void slotCleanDoneInfo(const QString &info);
    QPlainTextEdit *mTextEdit = nullptr;
};

#endif // REFRESHSETTRINGSFINISHPAGE_H
