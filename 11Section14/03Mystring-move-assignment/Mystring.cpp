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
    std::cout << "Copy constructor called for : " << source.str  << std::endl;
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//Move constructor
Mystring::Mystring(Mystring &&source)
    :str{source.str}                   //stealing pointer
{
    std::cout << "Move constructor called for : " << source.str  << std::endl;
//    delete []source.str;
    source.str = nullptr;
}

//Destructor
Mystring::~Mystring()
{
    if(str)
        std::cout << "Destructor called for : " << str << std::endl;
    else
        std::cout << "Destructor called for : nullptr" << std::endl;
    delete []str;
}

//Copy assignment operator       
Mystring &Mystring::operator=(const Mystring &rhs)
{
    std::cout << "Copy assignment operator - " << std::endl;
    if(this == &rhs)         //if(&obj2 == &obj1)
        return *this;
    delete []str;
    str = new char[std::strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

//Move assignment operator       
Mystring &Mystring::operator=(Mystring &&rhs)
{
    std::cout << "Move assignment operator - " << std::endl;
    if(this == &rhs)         //if(&obj2 == &obj1)
        return *this;
        
    delete []str;               //deallocate current storage
    str = rhs.str;              //steal the pointer, more efficient
    
    rhs.str = nullptr;          //null out(nullify) the rhs object
//    delete []rhs.str;         //this way wrong, above one is right
                                //bec with this way, later in destructor, we delete same mem twice!!
    return *this;
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







