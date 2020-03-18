
#pragma once

extern "C" {
#include "lua/lauxlib.h"
#include "lua/lua.h"
#include "lua/lualib.h"
}
#include <LuaBridge/LuaBridge.h>

class Intro {
  public:
    void LuaScript();
};
