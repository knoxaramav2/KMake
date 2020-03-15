#ifndef CONFIG
#define CONFIG

#include <vector>

#include "Error.hpp"

struct Switches{
    bool PrintHelp;
    
};

class Config{

    Switches switches;

    public:

    Config();

    std::vector<Error> ParseCli(int, char**);

};

#endif