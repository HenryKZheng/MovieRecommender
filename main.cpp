#include <iostream>

using namespace std;

void menu();

int main() {






    return 0;
}

void menu() {
    int choice;
    cout << "Please enter your choice: " << endl << endl;

    cout << "Print by Score - 1" << endl;
    cout << "Print top 10 by actor/actress - 2" << endl;
    cout << "Print top 10 by genre - 3" << endl;
    cout << "Print by genre - 4" << endl;

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
        
    }
    
    if(choice == 4){ 
       
        cout << "Print top 10 movies - 1" << endl; 
        cout << "Print top 10 most recent - 2" << endl;
        cout << "Print top ";
        cin >> choice; 
        
    }
}