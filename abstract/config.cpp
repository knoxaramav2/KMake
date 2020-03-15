#include "../headers/config.hpp"

using namespace std;

Switches CreateSwitches(){
    Switches s;

    s.PrintHelp = false;


    return s;
}

Config::Config(){
    switches = CreateSwitches();
}

vector<Error> Config::ParseCli(int argc, char ** argv){

    vector<Error> errList;

    for(int i = 1; i < argc; ++i){
        string com = argv[i];
        size_t len = com.length();

        if(len==1){
            Error err;
            err.Code = INVALID_CLI_OPTION;
            err.Message = "Invalid option: " + com;
            errList.push_back(err);
        }
    }

    return errList;
}