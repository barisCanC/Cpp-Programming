#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie
{
    friend class Movies;
    std::string name;
    std::string rating;                   //(G, PG, PG-13, R)
    unsigned watched;               //the number of times the movie has been watched
public:
    Movie(std::string n = "None", std::string r = "G", unsigned w = 0);
    ~Movie();

};

#endif // _MOVIE_H_








