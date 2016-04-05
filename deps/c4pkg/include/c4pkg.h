#pragma once

#define C4DROID_PKG_NAME "com.n0n3m4.droidc"
#define C4DROID_DATA "/data/data/" C4DROID_PKG_NAME

#define C4PKG_DATA C4DROID_DATA "/c4pkg"
#define C4PKG_PKG_PATH C4PKG_DATA "/packages"

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include "c4pkg_version.h"
#include "c4pkg_package.h"
#include "c4pkg_install.h"

static inline bool c4pkg_check_root()
{
  return geteuid() == 0 || getuid() == 0;
}
