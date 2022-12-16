#include "filecontainer.h"

FileContainer::FileContainer()
{

}

const QString &FileContainer::dirName() const
{
    return _dirName;
}

void FileContainer::setDirName(const QString &newDir)
{
    _dirName = newDir;
}

const QString &FileContainer::dirType() const
{
    return _dirType;
}

void FileContainer::setDirType(const QString &newDirType)
{
    _dirType = newDirType;
}

const QString &FileContainer::fileName() const
{
    return _fileName;
}

void FileContainer::setFileName(const QString &newFileName)
{
    _fileName = newFileName;
}

const QString &FileContainer::filePath() const
{
    return _filePath;
}

void FileContainer::setFilePath(const QString &newFilePath)
{
    _filePath = newFilePath;
}

