
#pragma once

#include <lua.hpp>
#include <LuaBridge/LuaBridge.h>

class Task5 {
  public:
    Task5();
    double Multiply(double x, double y, double z);
    void RunLua();

  private:
    lua_State *L;

};
