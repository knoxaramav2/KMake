#include "crossplatform.hpp"

#include <stdio.h>

using namespace std;

string Newline;

vector <string> getEnvVar(){
    
    vector <string> paths;
    
    //const char * envPath = std::getenv("PATH");
    


    return paths;
}

void InitializeCrossPlatform(){
    #if defined(__WINDOWS)
        Newline = "\r\n";
    #elif defined(__LINUX)
        Newline = "\n";
    #else
        int a; 
    #endif

}