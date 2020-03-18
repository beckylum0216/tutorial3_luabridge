
#pragma once

#include <iostream>
extern "C" {
#include "lua/lauxlib.h"
#include "lua/lua.h"
#include "lua/lualib.h"
}
#include <LuaBridge/LuaBridge.h>

class Task2 {
  public:
    void RunLua();

};
