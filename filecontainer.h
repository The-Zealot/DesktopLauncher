#ifndef FILECONTAINER_H
#define FILECONTAINER_H

#include <QString>

class FileContainer
{
public:
    FileContainer();

    const QString &dirName() const;
    void setDirName(const QString &newDir);
    const QString &dirType() const;
    void setDirType(const QString &newDirType);
    const QString &fileName() const;
    void setFileName(const QString &newFileName);
    const QString &filePath() const;
    void setFilePath(const QString &newFilePath);

private:
    QString _dirName;
    QString _dirType;
    QString _fileName;
    QString _filePath;
};

#endif // FILECONTAINER_H
