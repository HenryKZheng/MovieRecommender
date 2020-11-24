#ifndef __CATEGORY_HPP__
#define __CATEGORY_HPP__

#include <vector>
#include <string>

#include "Media.hpp"

using namespace std; 

class Category : public Media {
  private: 
    vector<Media *> media_List; 

  public: 
    Category() : Media() {};
    Category(string title, vector<string> genres): Media(title, genres); 

    //virtual functions to implement:
    string getTitle(); 
    vector<string> getGenres();
    int getType(); 

    //functions unique to Category class
    void addMedia(Media*); 

};
#endif
