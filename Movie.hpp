#ifndef __MOVIE_HPP__
#define __MOVIE_HPP__

#include "Media.hpp"
#include <string>
#include <vector>

using namespace std; 

class Movie : public Media {
  private:
    vector<string> castList;
    string director; 
    string description;
    int prodYear; 
    double rating;

  public: 
    //fix the default constructor later!
    Movie() : Media(){}
    Movie(string title, vector<string>genres) : Media(title, genres){}

    //virtual functions to implement
    string getTitle(); 
    string getGenre(); 

    //helper functions:
    void addActor(string actor_to_add); //implement
    void addGenre(string genre_to_add); //implement
    void addDirector(string director);  //implement
    void addProdYear(int prod_year); //implement
    void addDescription(string description);  //implement
    void addRating(double rating); //implement
    int getType();
};

#endif
