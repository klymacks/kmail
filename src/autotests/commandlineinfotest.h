/*
   SPDX-FileCopyrightText: 2023-2024 Laurent Montel <montel.org>

   SPDX-License-Identifier: GPL-2.0-or-later
*/

#pragma once

#include <QObject>

class CommandLineInfoTest : public QObject
{
    Q_OBJECT
public:
    explicit CommandLineInfoTest(QObject *parent = nullptr);
    ~CommandLineInfoTest() override = default;
private Q_SLOTS:
    void shouldHaveDefaultValues();
    void parseCommandLineInfo_data();
    void parseCommandLineInfo();
};
