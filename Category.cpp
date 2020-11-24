#include "Category.hpp"

#include <vector>
#include <string>

using namespace std; 

string Category::getTitle(){
  return this->title; 
}

vector<string> Category::getGenres(){
  return this->genres; 
}

int Category::getType(){
  return 2; 
}

void Category::addMedia(Media* media_to_add){
  this->media_List.push_back(media_to_add);
}



