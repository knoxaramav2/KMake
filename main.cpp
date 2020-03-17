#include <string>
#include <iostream>

#include "global.hpp"
#include "crossplatform.hpp"
#include "Config.hpp"

extern std::string Newline;

int main(int argc, char ** argv){

    std::vector<Error> errors;
    InitializeCrossPlatform();

    Config config;
    errors = config.ParseCli(argc, argv);

    if(errors.size() > 0){
        
        for(unsigned i=0; i < errors.size(); ++i){
            printf("%s\r\n", Newline.c_str());
        }

        return 1;
    }

    printf(Newline.c_str());

    return 0;
}