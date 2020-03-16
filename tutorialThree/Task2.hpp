
#pragma once

#include <iostream>
extern "C" {
#include "lauxlib.h"
#include "lua.h"
#include "lualib.h"
}
#include <LuaBridge/LuaBridge.h>

class Task2 {
  public:
    void RunLua();

};
