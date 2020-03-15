#include <stdio.h>
#include <cstdlib>

#include "global.hpp"
#include "crossplatform.hpp"

using namespace std;

namespace Paths{

vector <string> paths;

void setPaths(){
    const char * env_path = std::getenv("PATH");
    if (env_path==nullptr) return;

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

}