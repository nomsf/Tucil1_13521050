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

    printHomeScreen();

    cardValue = input();
    
    while (!inputValid(cardValue)){
        cout << " _______________________________________________________________________ \n";
        cout << "|                          Invalid Input!                               | \n";
        cout << "| Input four of the following = A, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K  |\n";
        cout << "|_______________________________________________________________________|\n";
        cardValue = input();
    }

    cout << " _______________________________________________________________________ \n";
    cout << "|                        Your Cards Value:                              | \n";
    cout << "|                            ";
    for (int i = 0; i < 4 ;i++){
        
        cout << cardValue[i] << " ";
    }
    cout << "                                   | \n";
    cout << "|_______________________________________________________________________|\n";
    cout << "\n";

    auto timeBefore = high_resolution_clock::now();
    solve(cardValue, goal, &resultCount, resultArray);
    auto timeAfter = high_resolution_clock::now();
    auto timeTotal = duration_cast<microseconds>(timeAfter - timeBefore);

    resultTime = timeTotal.count();

    cout << "RESULT COUNT: " << resultCount << "\n";
    if (resultCount != 0){

        cout << "PROCESS DURATION: " << resultTime << " microseconds \n";
        //cout << resultExpression;


        cout << "\n" << "Result Expression: ";
        for(int i = 0; i < resultCount; i++){
            if (i % 3 ==0){
                cout << "\n";
            }
            cout << resultArray[i] << "       ";
        }
        cout << "\n \n";
        cout << " _______________________________________________________________________ \n";
        cout << "|                Do you want to store the result? (y/n)                 |\n";
        cout << "|_______________________________________________________________________|\n";
        char opt;
        cin >> opt;
        if (opt == 'y'){
            storeInFile(resultArray, resultCount, resultTime, cardValue);
        }
        else {
            cout << " _______________________________________________________________________ \n";
            cout << "|                Result not saved. Thankyou and goodbye!                |\n";
            cout << "|_______________________________________________________________________|\n";
        }
    }
    else{
        cout << " _______________________________________________________________________ \n";
        cout << "|              There is no solution for this set of cards.              |\n";
        cout << "|_______________________________________________________________________|\n";
    }
    

    return 0;
}