#include <iostream>
#include <time.h>
#include "toolsFunction.cpp"
using namespace std;

int main (){
    double * cardValue;
    double * permValue;
    const int result = 24;
    int resultCount;

    cardValue = input();
    
    while (!inputValid(cardValue)){
        cout << "Masukan Salah!\n";
        cardValue = input();
    }

    resultCount = solve(cardValue, result);

    cout << "result count: " << resultCount;

    return 0;
}