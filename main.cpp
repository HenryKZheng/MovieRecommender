#include <iostream>

using namespace std;

void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    int choice;
    cout << "Please enter your choice: " << endl << endl;

    cout << "Print by Score - 1" << endl;
    cout << "Print top 10 by actor/actress - 2" << endl;
    cout << "Print top 10 by genre - 3" << endl;
    cout << "Print by genre - 4" << endl;
    cout << "Recommend Movie - 5" << endl;

    cin >> choice;

    if(choice == 1) {
        cout << "Print top 10 movies - 1" << endl;
        cout << "Print top 10 most recent - 2" << endl;
        cin >> choice;

        switch(choice) {
            case 1: printTop10(); break;
            case 2: printTop10Recent(); break;
        }
    }

    if (choice == 2) {
        string actor;
        cout << "Enter actor/actress name" << endl;
        cin >> actor;
        printMoviesByActor(actor);
    }
    
    if(choice == 3) {
        string genre;
        string answer;
        bool flag = true;
        cout << "Please enter the genre" << endl;
        cin >> genre;
        cout << "Do you have a sub-genre? (y/n)" << endl;
        cin >> answer;
        while(flag) {
            if(answer == "y") {
                string subgenre;
                cout << "Please enter sub-genre" << endl;
                cin >> subgenre;
                printMoviesGenreWithSub(genre, subgenre);
                flag = false;
            }
            else if(answer == "n") {
                printMoviesByGenre(genre);
                flag = false;
            }
            else {
                cout << "Please enter a valid response, (y/n)" << endl;
            }
        }
    }
    
    if(choice == 4){ 
        cout << "Print top 10 movies - 1" << endl; 
        cout << "Print top 10 most recent - 2" << endl;
        cout << "Print top ";
        cin >> choice; 
        
    }

    if(choice == 5) {
        string recType;
        bool flag1 = true;
        cout << "Would you like to choose a specific way to get a recommendation? (y/n)" << endl;
        cin >> recType;
        while(flag1) {
            if(recType == "n") {
                string movie;
                cout << "Please enter your movie" << endl;
                cin >> movie;
                while(!checkMovieInList(movie)) {
                    cout << "Movie not found. Please try again. " << endl;
                    cin >> movie;
                }
                recommendMove(movie);

            }
            else if(recType == "y") {
                string movieRecChoice;
                int recChoice;
                bool choiceFlag = true;
                cout << "Please enter your movie" << endl;
                cin >> movieRecChoice;

                while(!checkMovieInList(movieRecChoice)) {
                    cout << "Movie not found. Please try again." << endl;
                    cin >> movieRecChoice;
                }

                while(choiceFlag) {
                    cout << "How would you like to get a recommendation?" << endl << endl;
                    cout << "Genre - 1" << endl;
                    cout << "Actor/actress - 2" << endl;
                    cout << "Rating - 3" << endl;
                    cin >> recChoice;

                    if(recChoice == 1) {
                        string recGenre;
                        cout << "Enter genre" << endl;
                        cin >> recGenre;
                        movieRecGenre(movieRecChoice, recGenre);
                        choiceFlag = false;
                    }
                    else if(recChoice == 2) {
                        string recActor;
                        cout << "Enter actor/actress name" << endl;
                        cin >> recActor;
                        movieRecActor(movieRecChoice, recActor);
                        choiceFlag = false;
                    }
                    else if(recChoice == 3) {
                        double rating;
                        cout << "Please enter the rating of your movie" <<endl;
                        cin >> rating;
                        movieRecRating(movieRecChoice, rating);
                        choiceFlag = false;
                    }
                    else {
                        cout << "Invalid response please try again" << endl;
                    }
                }
            }
        }
    }
}