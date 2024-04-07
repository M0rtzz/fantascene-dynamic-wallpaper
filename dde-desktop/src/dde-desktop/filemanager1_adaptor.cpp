/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i filemanager1_adaptor.h -l DBusFileManager1 -a :filemanager1_adaptor.cpp dbus/filemanager1/org.freedesktop.FileManager1.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "filemanager1_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class FileManager1Adaptor
 */

FileManager1Adaptor::FileManager1Adaptor(DBusFileManager1 *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

FileManager1Adaptor::~FileManager1Adaptor()
{
    // destructor
}

QStringList FileManager1Adaptor::GetMonitorFiles()
{
    // handle method call org.freedesktop.FileManager1.GetMonitorFiles
    return parent()->GetMonitorFiles();
}

void FileManager1Adaptor::ShowFolders(const QStringList &URIs, const QString &StartupId)
{
    // handle method call org.freedesktop.FileManager1.ShowFolders
    parent()->ShowFolders(URIs, StartupId);
}

void FileManager1Adaptor::ShowItemProperties(const QStringList &URIs, const QString &StartupId)
{
    // handle method call org.freedesktop.FileManager1.ShowItemProperties
    parent()->ShowItemProperties(URIs, StartupId);
}

void FileManager1Adaptor::ShowItems(const QStringList &URIs, const QString &StartupId)
{
    // handle method call org.freedesktop.FileManager1.ShowItems
    parent()->ShowItems(URIs, StartupId);
}

void FileManager1Adaptor::Trash(const QStringList &URIs)
{
    // handle method call org.freedesktop.FileManager1.Trash
    parent()->Trash(URIs);
}

void FileManager1Adaptor::closeTask()
{
    // handle method call org.freedesktop.FileManager1.closeTask
    parent()->closeTask();
}

bool FileManager1Adaptor::topTaskDialog()
{
    // handle method call org.freedesktop.FileManager1.topTaskDialog
    return parent()->topTaskDialog();
}
