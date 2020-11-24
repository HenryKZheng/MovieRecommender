#include "Movie.hpp"

#include <iostream>
#include <vector>

using namespace std; 

string Movie::getTitle(){
  return this->title; 
}

int Movie::getType(){
  return 1; //return 1 for Movie
}

void Movie::addActor(string actor_to_add){
  castList.push_back(actor_to_add); 
} 

void Movie::addGenre(string genre_to_add){
  genres.push_back(genre_to_add);
} 

void Movie::addDirector(string director){
  this->director = director; 
}  

void Movie::addProdYear(int prod_year){
  this->prodYear = prod_year; 
} 

void Movie::addDescription(string description){
  this->description = description; 
}  

void Movie::addRating(double rating){
  this->rating = rating; 
} 
