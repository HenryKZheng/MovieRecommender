nclude "Movie.hpp"
#include "Category.hpp"
#include "Media.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main(){

    string line = "";
    string inputFile = "IMDB-Movie-Data";
    map<string, Movie*> movieMap;

    /*inputting from the .csv movie data file */
    ifstream myFile;
    myFile.open(inputFile);

    /*All variables needed to make each movie object */
    string movieTitle, descrip, director, comma, qMark;
    int year, score;
    vector<string> actors;
    vector<string> genres;


    


    if (!myFile.is_open()) {
      cout << "Error couldnt open " << inputFile << endl;
      return 5;
   }


    while(getline(myFile, line)){
        Movie* currMovie = new Movie();
        line >> movieTitle;
        currMovie.addTitle(movieTitle);
        line >> comma;
        line >> qMark;
        while (line >>qMark != "\""){
            if(qMark != ','){
                genres.push_back(qMark);
            }
        }
        currMovie.addGenres(genres);
        line >> comma;
        line >> qMark;
        while (line >>qMark != "\""){
            descrip += qMark;
        }
        currMovie.addDescription(descrip);
        line >> comma;
        line >> director;
        currMovie.addDirector(director);
        line >> qMark;
        while (line >>qMark != "\""){
            if(qMark != ','){
                actors.push_back(qMark);
            }
        }
        currMovie.addActors(actors);
        line >> year;
        currMovie.addYear(year);
        line >> score;
        currMovie.addScore(score);


        movieMap.emplace(movieTitle, currMovie);
        genres.clear();
        actros.clear();
        descrip = "";
    }

    






    return 0;
}

