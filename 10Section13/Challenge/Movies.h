#ifndef _MOVIES_H_
#define _MOVIES_H_
#include "Movie.h"
#include <string>
#include <vector>

class Movies
{
    std::vector <Movie> *vec_movie;
public:
    bool add_movie(std::string movie_name, std::string movie_rating, unsigned movie_watched);
    bool increment_movie(std::string movie_name);
    void get_movies() const;
    Movies();
    ~Movies();
    Movies(const Movies &source);
    Movies(Movies &&source);
    
};

#endif // _MOVIES_H_






