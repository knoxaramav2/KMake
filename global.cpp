#include <stdio.h>

#include "global.hpp"

using namespace std;
using namespace Paths;

//vector <string> paths;

void setPaths(char ** argx){
    for (auto i=0; i < 50; ++i){
        printf("%s\r\n", argx[i]);
        fflush(stdout);
    }
}

int size(){
    return paths.size();
}

string getAt(int idx){
    if (idx >= 0 && idx < (int) paths.size()){
        return paths[idx];
    }

    return nullptr;
}