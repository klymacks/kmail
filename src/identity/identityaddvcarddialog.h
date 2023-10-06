/*
  SPDX-FileCopyrightText: 2012-2023 Laurent Montel <montel@kde.org>

  SPDX-License-Identifier: GPL-2.0-only
*/

#pragma once
#include "kmail_private_export.h"
#include <QDialog>
#include <QUrl>
class QButtonGroup;
class QComboBox;
class KUrlRequester;

class KMAILTESTS_TESTS_EXPORT IdentityAddVcardDialog : public QDialog
{
    Q_OBJECT
public:
    enum DuplicateMode {
        Empty,
        ExistingEntry,
        FromExistingVCard,
    };

    explicit IdentityAddVcardDialog(const QStringList &shadowIdentities, QWidget *parent = nullptr);
    ~IdentityAddVcardDialog() override;

    [[nodiscard]] DuplicateMode duplicateMode() const;
    [[nodiscard]] QString duplicateVcardFromIdentity() const;
    [[nodiscard]] QUrl existingVCard() const;

private:
    QButtonGroup *const mButtonGroup;
    QComboBox *const mComboBox;
    KUrlRequester *const mVCardPath;
};
