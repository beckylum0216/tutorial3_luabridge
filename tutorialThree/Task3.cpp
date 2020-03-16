#include "Task3.hpp"

void Task3::RunLua() {
    lua_State *L = luaL_newstate();

    luaL_openlibs(L);

    if(luaL_loadfile(L, "../lua/task3.lua"))
    {
        std::cout << "File load failed" << std::endl;
    }

    if(lua_pcall(L, 0, 0, 0))
    {
        std::cout << "Call script failed..." << std::endl;
    }

    int state = luaL_dofile(L, "../lua/task3.lua");
    if(state != 0)
    {
        std::cerr << "ERR: " << lua_tostring(L, state) << std::endl;
    }

    luabridge::LuaRef level = luabridge::getGlobal(L, "levelName");
    std::string levelName = level.cast<std::string>();
    std::cout << "task 3 level: " << levelName << std::endl;


    luabridge::LuaRef sectors = luabridge::getGlobal(L, "numSectors");
    int numSector = sectors.cast<int>();
    std::cout << "task 3 sectors: " << numSector << std::endl;

    luabridge::LuaRef rooms = luabridge::getGlobal(L, "numRooms");
    int numRoom = rooms.cast<int>();
    std::cout << "task 3 rooms: " << numRoom <<std::endl;

}