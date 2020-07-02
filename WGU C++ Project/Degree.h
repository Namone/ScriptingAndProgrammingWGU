#ifndef DEGREE_H
#define DEGREE_H

#pragma once
#include <map>
#include <string>


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
        this->operator[]("SECURITY") = SECURITY;
        this->operator[]("SOFTWARE") = SOFTWARE;
        this->operator[]("NETWORK") = NETWORK;
    };
    ~degreeProgramMap(){}
};

// Overload << operator to allow us to print Enum value as a string.
static std::ostream &operator<<(std::ostream &out, const DegreeProgram degreeProgram) {
    const char *s = 0;
    #define PROCESS_VAL(p) \
    case (p):          \
        s = #p;        \
        break;
    switch (degreeProgram) {
        PROCESS_VAL(SECURITY);
        PROCESS_VAL(SOFTWARE);
        PROCESS_VAL(NETWORK);
    }
    #undef PROCESS_VAL

    return out << s;
}
#endif
