#ifndef VLINK_H
#define VLINK_H

#include <QString>

struct VLink
{
    QString name;
    QString path;
    QString icon;
    QString dirName;

    bool isDefaultIcon = true;
};

#endif // VLINK_H
