#include <iostream>
#include <time.h>
using namespace std;


bool inputValid(double * val){
    
    bool valid = true;

    for(int i = 0; i < 4; i++){
        if (val[i] == -1){
            valid = false;
        }
    }
    return valid;
}

double valueOfCard(string card){

// Menghasilkan nilai dari kartu yang dimasukan
// Kalau kartu tidak valid nilai akan menjadi -1

    double val;

    if (card ==  "A"){
        val = 1;
    }
    else if (card == "2"){
        val = 2;
    }
    else if (card == "3"){
        val = 3;
    }
    else if (card == "4"){
        val = 4;
    }
    else if (card == "5"){
        val = 5;
    }
    else if (card == "6"){
        val = 6;
    }
    else if (card == "7"){
        val = 7;
    }
    else if (card == "8"){
        val = 8;
    }
    else if (card == "9"){
        val = 9;
    }
    else if (card == "10"){
        val = 10;
    }
    else if (card == "J"){
        val = 11;
    }
    else if (card == "Q" ){
        val = 12;
    }
    else if (card == "K"){
        val = 13;
    }
    else {
        val = -1;
    }

    return val;
}

double * input(){

    string card[4];
    static double cardValue[4];
    char opt;

    cout << "Apakah input ingin random? (y/n)";
    cin >> opt;

    if( opt == 'n'){
        for (int i = 0; i < 4; i++){
            cin >> card[i];
            //cout << card[i] << "\n";
            cardValue[i] = valueOfCard(card[i]);
    }
    }
    else{
        srand(time(0)); // set up random seed
        for (int i = 0; i < 4 ;i++){
            cardValue[i] = rand() % 13 + 1; // random number generator
        }
    }

    for (int i = 0; i < 4 ;i++){
        cout << cardValue[i] << "\n";
    } 

    return cardValue;
}

/*  
    Number of ways to rearrange 1, 3, 4 and 6 within the expression.
    Number of operator combinations.
    Number of forms of the expression. 
*/



double * permutation(double * cardValue, int i){
// Menghasilkan hasil permutasi sesuai urutan yang dimasukan (1-24) karena ada 
// 24 kemungkinan susunan angka.

    double permValue[4];

    switch (i)
    {
    case 0:
        permValue[0] = cardValue[0]; permValue[1] = cardValue[1]; permValue[2] = cardValue[2]; permValue[3] = cardValue[3];
        break;
    case 1:
        permValue[0] = cardValue[0]; permValue[1] = cardValue[1]; permValue[3] = cardValue[3]; permValue[2] = cardValue[2];
        break;
    case 2:
        permValue[0] = cardValue[0]; permValue[2] = cardValue[2]; permValue[1] = cardValue[1]; permValue[3] = cardValue[3];
        break;
    case 3:
        permValue[0] = cardValue[0]; permValue[2] = cardValue[2]; permValue[3] = cardValue[3]; permValue[1] = cardValue[1];
        break;
    case 4:
        permValue[0] = cardValue[0]; permValue[3] = cardValue[3]; permValue[1] = cardValue[1]; permValue[2] = cardValue[2];
        break;
    case 5:
        permValue[0] = cardValue[0]; permValue[3] = cardValue[3]; permValue[2] = cardValue[2]; permValue[1] = cardValue[1];
        break;
    case 6:
        permValue[1] = cardValue[1]; permValue[0] = cardValue[0]; permValue[2] = cardValue[2]; permValue[3] = cardValue[3];
        break;
    case 7:
        permValue[1] = cardValue[1]; permValue[0] = cardValue[0]; permValue[3] = cardValue[3]; permValue[2] = cardValue[2];
        break;
    case 8:
        permValue[1] = cardValue[1]; permValue[2] = cardValue[2]; permValue[0] = cardValue[0]; permValue[3] = cardValue[3];
        break;
    case 9:
        permValue[1] = cardValue[1]; permValue[2] = cardValue[2]; permValue[3] = cardValue[3]; permValue[0] = cardValue[0];
        break;
    case 10:
        permValue[1] = cardValue[1]; permValue[3] = cardValue[3]; permValue[0] = cardValue[0]; permValue[2] = cardValue[2];
        break;
    case 11:
        permValue[1] = cardValue[1]; permValue[3] = cardValue[3]; permValue[2] = cardValue[2]; permValue[0] = cardValue[0];
        break;
    case 12:
        permValue[2] = cardValue[2]; permValue[0] = cardValue[0]; permValue[1] = cardValue[1]; permValue[3] = cardValue[3];
        break;
    case 13:
        permValue[2] = cardValue[2]; permValue[0] = cardValue[0]; permValue[3] = cardValue[3]; permValue[1] = cardValue[1];
        break;
    case 14:
        permValue[2] = cardValue[2]; permValue[1] = cardValue[1]; permValue[0] = cardValue[0]; permValue[3] = cardValue[3];
        break;
    case 15:
        permValue[2] = cardValue[2]; permValue[1] = cardValue[1]; permValue[3] = cardValue[3]; permValue[0] = cardValue[0];
        break;
    case 16:
        permValue[2] = cardValue[2]; permValue[3] = cardValue[3]; permValue[0] = cardValue[0]; permValue[1] = cardValue[1];
        break;
    case 17:
        permValue[2] = cardValue[2]; permValue[3] = cardValue[3]; permValue[1] = cardValue[1]; permValue[0] = cardValue[0];
        break;
    case 18:
        permValue[3] = cardValue[3]; permValue[0] = cardValue[0]; permValue[1] = cardValue[1]; permValue[2] = cardValue[2];
        break;
    case 19:
        permValue[3] = cardValue[3]; permValue[0] = cardValue[0]; permValue[2] = cardValue[2]; permValue[1] = cardValue[1];
        break;
    case 20:
        permValue[3] = cardValue[3]; permValue[1] = cardValue[1]; permValue[0] = cardValue[0]; permValue[2] = cardValue[2];
        break;
    case 21:
        permValue[3] = cardValue[3]; permValue[1] = cardValue[1]; permValue[2] = cardValue[2]; permValue[0] = cardValue[0];
        break;
    case 22:
        permValue[3] = cardValue[3]; permValue[2] = cardValue[2]; permValue[0] = cardValue[0]; permValue[1] = cardValue[1];
        break;
    case 23:
        permValue[3] = cardValue[3]; permValue[2] = cardValue[2]; permValue[1] = cardValue[1]; permValue[0] = cardValue[0];
        break;
    
    default:
        break;
    }

    return permValue;
}

