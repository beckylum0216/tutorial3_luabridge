
#pragma once

extern "C" {
#include "lua/lauxlib.h"
#include "lua/lua.h"
#include "lua/lualib.h"
}

#include <LuaBridge/LuaBridge.h>

class Task3 {
  public:
    void RunLua();

};
