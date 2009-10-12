/* -*- mode: C++; c-file-style: "gnu" -*-
  This file is part of KMail, the KDE mail client.
  Copyright (c) 2009 Montel Laurent <montel@kde.org>

  KMail is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License, version 2, as
  published by the Free Software Foundation.

  KMail is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License along
  with this program; if not, write to the Free Software Foundation, Inc.,
  51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef FOLDERTREEVIEW_H
#define FOLDERTREEVIEW_H

#include <akonadi/entitytreeview.h>

class FolderTreeView : public Akonadi::EntityTreeView
{
  Q_OBJECT
public:
  explicit FolderTreeView( QWidget *parent = 0 );

  explicit FolderTreeView( KXMLGUIClient *xmlGuiClient, QWidget *parent = 0 );

  virtual ~FolderTreeView();

  void selectNextUnreadFolder();
  void selectPrevUnreadFolder();
protected:
  void init();
  void selectModelIndex( const QModelIndex & );
  QModelIndex selectNextFolder( const QModelIndex & current );

public slots:
  void slotFocusNextFolder();
  void slotFocusPrevFolder();
};



#endif /* FOLDERTREEVIEW_H */

