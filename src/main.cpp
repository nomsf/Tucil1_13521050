#include <iostream>
#include <time.h>
#include "toolsFunction.cpp"
using namespace std;

int main (){
    int *cardValue;

    cardValue = input();
    
    while (!inputValid(cardValue)){
        cout << "Masukan Salah!\n";
        cardValue = input();
    }

    

    return 0;
}