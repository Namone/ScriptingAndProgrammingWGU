#include <map>
#include <string>
#pragma once

// Enumerator data type to contain our degree program types.
enum DegreeProgram {
	SECURITY,
	SOFTWARE,
	NETWORK
};

// String switch paridgam   
struct degreeProgramMap : public std::map<std::string, DegreeProgram>
{
    degreeProgramMap()
    {
        this->operator[]("SECURITY") =  SECURITY;
        this->operator[]("SOFTWARE") = SOFTWARE;
        this->operator[]("NETWORK") = NETWORK;
    };
    ~degreeProgramMap(){}
};