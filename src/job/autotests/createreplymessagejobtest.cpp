/*
   Copyright (C) 2020 Laurent Montel <montel@kde.org>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
*/

#include "createreplymessagejobtest.h"
#include "job/createreplymessagejob.h"
#include <QTest>
QTEST_MAIN(CreateReplyMessageJobTest)

CreateReplyMessageJobTest::CreateReplyMessageJobTest(QObject *parent)
    : QObject(parent)
{

}

void CreateReplyMessageJobTest::shouldHaveDefaultValue()
{
    CreateReplyMessageJobSettings settings;
    QVERIFY(settings.url.isEmpty());
    QVERIFY(settings.selection.isEmpty());
    QVERIFY(settings.templateStr.isEmpty());
    QVERIFY(!settings.msg);
    QVERIFY(!settings.noQuote);
    QVERIFY(!settings.replyAsHtml);
    QCOMPARE(settings.replyStrategy, MessageComposer::ReplySmart);
}