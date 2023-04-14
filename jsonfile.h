#ifndef JSONFILE_H
#define JSONFILE_H

#include <QString>

struct JsonConfig
{
    bool hasAutoStart       = false;
    bool isFullscreen       = false;
    bool hasButtonIcons     = false;
    bool isDefaultWallpaper = true;

    QString wallpaperImage  = "";
    QString startDirectory  = "";
    QString currentStyle    = "";
};

#endif // JSONFILE_H
