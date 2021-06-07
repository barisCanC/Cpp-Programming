#include <iostream>
#include "Movies.h"
#include <string>
#include <vector>

bool Movies::add_movie(std::string movie_name, std::string movie_rating, unsigned movie_watched)
{
    for(const auto &mo : *vec_movie)
        if(mo.name == movie_name)
            return false;
//    Movie m{movie_name, movie_rating, movie_watched};
    (*vec_movie).push_back(Movie{movie_name, movie_rating, movie_watched});                //to Move constructor
    return true;
}

bool Movies::increment_movie(std::string movie_name)
{
    for(auto &mo : *vec_movie)
        if(mo.name == movie_name){
            mo.watched++;
            return true;
        }
    return false;
}

void Movies::get_movies() const
{
    if((*vec_movie).size())
        for(const auto &mo : *vec_movie){
            std::cout << "=========================\n";
            std::cout << "Movie name : " << mo.name << "\n";
            std::cout << "Movie rating : " << mo.rating << "\n";
            std::cout << "Movie watched : " << mo.watched ;
            std::cout << "\n=========================\n"<< std::endl;
        }
    else
        std::cout << "Sorry, no movies to display.\n" << std::endl;
}

Movies::Movies()
{
    vec_movie = new std::vector<Movie>;
}

Movies::~Movies()
{
    delete vec_movie;
    std::cout << "\nDestructor freeing memory\n" << std::endl;
}

Movies::Movies(const Movies &source)
{
    vec_movie = new std::vector<Movie>;
    *vec_movie = *source.vec_movie;
    std::cout << "Deep copy - " << std::endl;
}

Movies::Movies(Movies &&source)
    :vec_movie{source.vec_movie}
{
    std::cout << "Move constructor called " << std::endl;
    source.vec_movie = nullptr;
}










