#include <iostream>
#include <time.h>
#include "toolsFunction.cpp"
using namespace std;

int main (){
    double *cardValue;
    const int result = 24;

    cardValue = input();
    
    while (!inputValid(cardValue)){
        cout << "Masukan Salah!\n";
        cardValue = input();
    }

    

    return 0;
}