# Core sources allowed to include only third-party and base source files.

set(core-src
    ${CMAKE_CURRENT_SOURCE_DIR}/client.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/client.h
    ${CMAKE_CURRENT_SOURCE_DIR}/logger.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/logger.h
    ${CMAKE_CURRENT_SOURCE_DIR}/settings.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/settings.h
    ${CMAKE_CURRENT_SOURCE_DIR}/settings_secure.h
    ${CMAKE_CURRENT_SOURCE_DIR}/settings_types.h
    PARENT_SCOPE)
