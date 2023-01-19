#include <iostream>
#include <time.h>
#include "toolsFunction.cpp"
using namespace std;

int main (){
    string card[4];
    int cardValue[4];
    char opt;

    cout << "Apakah input ingin random?";
    cin >> opt;

    if( opt == 'n'){
        for (int i = 0; i < 4; i++){
            cin >> card[i];
            cout << card[i] << "\n";
            cardValue[i] = valueOfCard(card[i]);
      }
    }
    else{
        srand(time(0)); // set up random seed
        for (int i = 0; i < 4 ;i++){
            cardValue[i] = rand() % 13 + 1;
        }
    }

    for (int i = 0; i < 4 ;i++){
        cout << cardValue[i] << "\n";
    }


    
    return 0;
}