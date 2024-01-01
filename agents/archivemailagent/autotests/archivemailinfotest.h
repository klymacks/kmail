/*
   SPDX-FileCopyrightText: 2014-2024 Laurent Montel <montel@kde.org>

   SPDX-License-Identifier: GPL-2.0-or-later
*/

#pragma once

#include <QObject>

class ArchiveMailInfoTest : public QObject
{
    Q_OBJECT
public:
    explicit ArchiveMailInfoTest(QObject *parent = nullptr);
    ~ArchiveMailInfoTest() override;

private Q_SLOTS:
    void shouldHaveDefaultValue();
    void shouldCopyArchiveInfo();
    void shouldRestoreFromSettings();
};
