#pragma once

#include <QDir>


namespace base {

extern const unsigned int kProjectMajorVersion;
extern const unsigned int kProjectMinorVersion;
extern const unsigned int kProjectPatchVersion;
extern const char kProjectFullVersion[];
extern const char kProjectFullName[];

bool sslSupported();
QString sslVersion();

}  // namespace base
