#include "Intro.hpp"

void Intro::LuaScript() {

    lua_State *L = luaL_newstate();
    luaL_dofile(L, "../lua/intro.lua");
    luaL_openlibs(L);
    if (luaL_loadfile(L, "../lua/intro.lua") || lua_pcall(L, 0, 0, 0)) {
        std::cout << "file not loaded" << std::endl;
    }
    lua_pcall(L, 0, 0, 0);
    luabridge::LuaRef s = luabridge::getGlobal(L, "testString");
    luabridge::LuaRef n = luabridge::getGlobal(L, "num");
    if (n.isNil()) {
        std::cout << "FML" << std::endl;
    }

    std::string luaString = s.cast<std::string>();
    int answer            = n.cast<int>();
    std::cout << luaString << std::endl;
    std::cout << "And here's our number:" << answer << std::endl;
}