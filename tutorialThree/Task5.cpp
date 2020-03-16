#include "Task5.hpp"

Task5::Task5(){
    L = luaL_newstate();
    luaL_openlibs(L);
    luabridge::getGlobalNamespace(L).beginClass<Task5>("Task5").addConstructor<void(*)(void)>().addFunction("Multiply", &Task5::Multiply).endClass();
}



double Task5::Multiply(double x, double y, double z) {

    return x * y * z;
}

void Task5::RunLua(){

//    if(lua_pcall(L, 0, 0, 0))
//    {
//        std::cout << "Call script failed..." << std::endl;
//    }

    int state = luaL_dofile(L, "../lua/task5.lua");
    if(state != 0)
    {
        std::cerr << "ERR: " << lua_tostring(L, state) << std::endl;
    }



}