#include "base/project_info.h"

#include <cassert>

#include <QtCore>

namespace base {

const unsigned int kProjectMajorVersion = 1;
const unsigned int kProjectMinorVersion = 0;
const unsigned int kProjectPatchVersion = 0;
const char kProjectFullVersion[] = "1.0.0";
const char kProjectFullName[] = "Simple Jabber";

QDir dataDirectory()
{
    QDir data_directory(QStandardPaths::writableLocation(QStandardPaths::AppDataLocation));
    if (!data_directory.exists())
    {
        data_directory.mkpath(".");
        assert(data_directory.exists());
    }
    return data_directory;
}

extern const char kLogFileName[] = "sjabber.log";

}  // namespace base
