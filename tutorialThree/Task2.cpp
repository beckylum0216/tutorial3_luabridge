#include "Task2.hpp"

void Task2::RunLua() {

    lua_State *L = luaL_newstate();

    luaL_openlibs(L);
    if (luaL_loadfile(L, "../lua/intro.lua") || lua_pcall(L, 0, 0, 0)) {
        std::cout << "file not loaded" << std::endl;
    }

    int state = luaL_dofile(L, "../lua/task2.lua");
    if(state != 0)
    {
        std::cerr << "ERR: " << lua_tostring(L, state) << std::endl;
    }

//    luabridge::LuaRef s = luabridge::getGlobal(L, "multiply");
//
//    int k = s(3,13);
//
//    std::cout << "result: " << k << std::endl;

}

