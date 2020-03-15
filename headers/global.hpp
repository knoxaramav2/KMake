#ifndef GLOBAL
#define GLOBAL

#include <string>
#include <vector>

namespace Paths{
    extern std::vector <std::string> paths;
    
    void setPaths();
    int size();
    std::string getAt(int idx);
};

#endif