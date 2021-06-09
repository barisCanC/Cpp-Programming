#include "Mystring.h"
#include <iostream>
#include <cstring>

//No-args Constructor
Mystring::Mystring()
    :str{nullptr}
{
    std::cout << "No args ctor called\n" << std::endl;
    str = new char[1];
    *str = '\0';
}

//Overloaded constructor
Mystring::Mystring(const char *s)
    :str{nullptr}
{
    std::cout << "Overloaded ctor called " << std::endl;
    if(s == nullptr){
        std::cout << "s == nullptr" << std::endl;
        str = new char[1];
        *str = '\0';
    }
    else{
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

//Copy constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}
{
    std::cout << "Copy construtor called for : " << source.str  << std::endl;
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//Destructor
Mystring::~Mystring()
{
    std::cout << "Destructor called for : " << str << std::endl;
    delete [] str;
}

//Display method
void Mystring::display() const
{
    std::cout << str << " : " << get_length() << std::endl;
}

//length getter
int Mystring::get_length() const
{
    return std::strlen(str);
}

//str getter
const char *Mystring::get_str() const
{
    return str;
}







