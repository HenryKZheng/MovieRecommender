#include <iostream>

using namespace std;

void menu();

int main() {






    return 0;
}

void menu() {
    int choice;
    cout << "Please enter your choice: " << endl << endl;

    cout << "Print top 10 by rating - 1" << endl;
    cout << "Print top 10 by actor/actress - 2" << endl;
    cout << "Print top 10 by genre - 3" << endl;
    cin >> choice;

    switch (choice){
        case 1: printMoviesRating();
                break;
        
        case 2: printMoviesByActor(); break;
        case 3: printMoviesByGenre(); break;

        default: break;

    } 
}