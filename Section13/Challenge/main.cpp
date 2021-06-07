#include <iostream>
#include <vector>
#include <string>
#include "Movies.h"

using namespace std;

void add_movie(Movies &movies, string movie_name, string movie_rating, unsigned movie_watched);
void increment_movie(Movies &movies, string movie_name);
void display_movies(const Movies &movies);

int main()
{
    Movies my_movies;
    
    display_movies(my_movies);
    
    add_movie(my_movies, "Matrix", "PG", 8);
    add_movie(my_movies, "The Godfather", "PG-13", 9);
    add_movie(my_movies, "Seven", "G", 7);
    add_movie(my_movies, "Kanunsuzlar", "R", 5);
    
//    cout << "\nPlease enter watched movie : " ;
//    string watched_movie;
//    cin >> watched_movie;
    string watched_movie{"Seven"};
    increment_movie(my_movies, watched_movie);
    
    display_movies(my_movies);
    
    add_movie(my_movies, "Seven", "G", 7);
    
    
    
}

void display_movies(const Movies &movies)
{
    cout << "\nMy movies : \n";
    movies.get_movies();
}

void add_movie(Movies &movies, string movie_name, string movie_rating, unsigned movie_watched)
{
    if(movies.add_movie(movie_name, movie_rating, movie_watched))
        cout << movie_name << " is added." << endl;
    else    
        cout << movie_name << " already exists. \n" << endl;
}

void increment_movie(Movies &movies, string movie_name)
{
    if(movies.increment_movie(movie_name))
        cout << movie_name << " incremented." << endl;
    else
        cout << movie_name << " not found." << endl;
}







