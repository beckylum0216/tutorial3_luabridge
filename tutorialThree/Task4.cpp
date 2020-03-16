#include "Task4.hpp"

void Task4::RunLua() {
    lua_State *L = luaL_newstate();

    luaL_openlibs(L);

    if(luaL_loadfile(L, "../lua/task4.lua"))
    {
        std::cout << "File load failed" << std::endl;
    }

    if(lua_pcall(L, 0, 0, 0))
    {
        std::cout << "Call script failed..." << std::endl;
    }

//    int state = luaL_dofile(L, "../lua/task4.lua");
//    if(state != 0)
//    {
//        std::cerr << "ERR: " << lua_tostring(L, state) << std::endl;
//    }

    luabridge::LuaRef ave = luabridge::getGlobal(L, "average");
    float average = ave(3, 13, 42);
    std::cout << "Task 4 result: " << average << std::endl;

}