#include <iostream>
#include "Movie.h"

Movie::Movie(std::string name_val, std::string rating_val, unsigned watched_val)
    :name{name_val}, rating{rating_val}, watched{watched_val}
{
//    std::cout << "Movie constructor called for " << name << std::endl;
    
}

Movie::~Movie()
{
}








