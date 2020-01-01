/*
   Copyright (C) 2013-2020 Laurent Montel <montel@kde.org>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
*/
#ifndef FOLDERARCHIVEACCOUNTINFO_H
#define FOLDERARCHIVEACCOUNTINFO_H

#include <KConfigGroup>
#include <AkonadiCore/Collection>

class FolderArchiveAccountInfo
{
public:
    FolderArchiveAccountInfo();
    FolderArchiveAccountInfo(const KConfigGroup &config);
    ~FolderArchiveAccountInfo();

    enum FolderArchiveType {
        UniqueFolder,
        FolderByMonths,
        FolderByYears
    };

    Q_REQUIRED_RESULT bool isValid() const;

    Q_REQUIRED_RESULT QString instanceName() const;
    void setInstanceName(const QString &instance);

    void setArchiveTopLevel(Akonadi::Collection::Id id);
    Q_REQUIRED_RESULT Akonadi::Collection::Id archiveTopLevel() const;

    void setFolderArchiveType(FolderArchiveType type);
    Q_REQUIRED_RESULT FolderArchiveType folderArchiveType() const;

    void setEnabled(bool enabled);
    Q_REQUIRED_RESULT bool enabled() const;

    void setKeepExistingStructure(bool b);
    Q_REQUIRED_RESULT bool keepExistingStructure() const;

    void writeConfig(KConfigGroup &config);
    void readConfig(const KConfigGroup &config);

    Q_REQUIRED_RESULT bool operator==(const FolderArchiveAccountInfo &other) const;

private:
    Akonadi::Collection::Id mArchiveTopLevelCollectionId = -1;
    QString mInstanceName;
    FolderArchiveAccountInfo::FolderArchiveType mArchiveType = UniqueFolder;
    bool mEnabled = false;
    bool mKeepExistingStructure = false;
};

#endif // FOLDERARCHIVEACCOUNTINFO_H
