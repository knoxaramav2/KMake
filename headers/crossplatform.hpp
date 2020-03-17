/*
    Provides an interface for common Windows/Unix
    functions
*/

#ifndef CROSS_PLATFORM
#define CROSS_PLATFORM

#include <string>
#include <vector>

extern std::string Newline;

std::vector<std::string> getEnvVar();

void InitializeCrossPlatform();

#endif