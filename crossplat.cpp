#include "crossplatform.hpp"

#include <stdio.h>

using namespace std;


vector <string> getEnvVar(){
    
    vector <string> paths;
    
    const char * envPath = std::getenv("PATH");
    
    int8_t a =3;
    uint8_t b = 4;

    if (a<b){
        return paths;
    }


    return paths;
}