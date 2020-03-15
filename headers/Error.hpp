#ifndef ERROR
#define ERROR

#include <string>

enum ErrorCode{
    OK,

    //CLI
    INVALID_CLI_OPTION
};

struct Error{
    ErrorCode Code;
    std::string Message;
};


#endif