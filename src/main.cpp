#include <iostream>
#include <time.h>
#include <fstream>
#include <chrono>
#include "toolsFunction.cpp"
using namespace std;
using namespace std::chrono;

int main (){
    double * cardValue;
    double * permValue;
    string resultExpression = "";
    const int goal = 24;
    int resultCount = 0;
    double resultTime;
    string resultArray[7680];

    cardValue = input();
    
    while (!inputValid(cardValue)){
        cout << "Masukan Salah!\n";
        cardValue = input();
    }

    auto timeBefore = high_resolution_clock::now();
    solve(cardValue, goal, &resultCount, resultArray);
    auto timeAfter = high_resolution_clock::now();
    auto timeTotal = duration_cast<microseconds>(timeAfter - timeBefore);

    resultTime = timeTotal.count();

    cout << "result count: " << resultCount << "\n";
    if (resultCount != 0){

        cout << "Function Time: " << resultTime << " microseconds \n";
        //cout << resultExpression;


        cout << "\n" << "Result Expression: ";
        for(int i = 0; i < resultCount; i++){
            if (i % 3 ==0){
                cout << "\n";
            }
            cout << resultArray[i] << "       ";
        }

        cout << "\n" << "Do you want to store the result? (y/n) \n";
        char opt;
        cin >> opt;
        if (opt == 'y'){
            storeInFile(resultArray, resultCount, resultTime, cardValue);
        }
        else {
            cout << "Result not saved.";
        }
    }
    else{
        cout << "There is no solution for this set of cards.";
    }
    

    return 0;
}