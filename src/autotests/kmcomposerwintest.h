/*
  SPDX-FileCopyrightText: 2021 Sandro Knauß <sknauss@kde.org>

  SPDX-License-Identifier: GPL-2.0-or-later
*/

#pragma once

#include <QDir>
#include <QObject>
class KMKernel;

class KMComposerWinTest : public QObject
{
    Q_OBJECT
public:
    explicit KMComposerWinTest(QObject *parent = nullptr);
    ~KMComposerWinTest() override;

private Q_SLOTS:
    void init();
    void cleanup();

    void initTestCase();
    void cleanupTestCase();

    void testEncryption_data();
    void testEncryption();

    void testSigning_data();
    void testSigning();

    void testNearExpiryWarningIdentity_data();
    void testNearExpiryWarningIdentity();

    void testChangeIdentity();
    void testChangeIdentityNearExpiryWarning();

private:
    void resetIdentities();
    KMKernel *mKernel = nullptr;
    QDir autocryptDir;
};
