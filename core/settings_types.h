#pragma once

#include <QtCore>
#include <QtNetwork>


namespace core {
namespace settings {

enum class Logging : int {
    File,
    Stdout,
    None
};

struct Credentials {
    QString login;
    QString password;

    bool operator==(const Credentials& other) const
    {
        return login == other.login && password == other.password;
    }
};

struct Connection {
    enum class OnLaunchMode {
        ClearLogin,
        StoreLogin,
        AutoLogin
    };

    Credentials  user;
    QUrl         server;
    QString      resource;
    OnLaunchMode on_launch_mode;

    bool operator==(const Connection& other) const
    {
        return user == other.user &&
               server == other.server &&
               resource == other.resource &&
               on_launch_mode == other.on_launch_mode;
    }
};

struct Proxy {
    QNetworkProxy::ProxyType type;
    Credentials              user;
    QUrl                     server;

    bool operator==(const Proxy& other)
    {
        return type == other.type && user == other.user && server == other.server;
    }
};

}  // namespace settings
}  // namespace core
