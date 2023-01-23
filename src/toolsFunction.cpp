#include <iostream>
#include <time.h>
#include <fstream>
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
        cout << cardValue[i] << " ";
    } 
    cout << "\n";

    return cardValue;
}

double * permutation(double * cardValue, int i){
// Menghasilkan hasil permutasi sesuai urutan yang dimasukan (1-24) karena ada 
// 24 kemungkinan susunan angka.

    static double permValue[4];

    switch (i)
    {
    case 0:
        permValue[0] = cardValue[0]; permValue[1] = cardValue[1]; permValue[2] = cardValue[2]; permValue[3] = cardValue[3];
        break;
    case 1:
        permValue[0] = cardValue[0]; permValue[1] = cardValue[1]; permValue[2] = cardValue[3]; permValue[3] = cardValue[2];
        break;
    case 2:
        permValue[0] = cardValue[0]; permValue[1] = cardValue[2]; permValue[2] = cardValue[1]; permValue[3] = cardValue[3];
        break;
    case 3:
        permValue[0] = cardValue[0]; permValue[1] = cardValue[2]; permValue[2] = cardValue[3]; permValue[3] = cardValue[1];
        break;
    case 4:
        permValue[0] = cardValue[0]; permValue[1] = cardValue[3]; permValue[2] = cardValue[1]; permValue[3] = cardValue[2];
        break;
    case 5:
        permValue[0] = cardValue[0]; permValue[1] = cardValue[3]; permValue[2] = cardValue[2]; permValue[3] = cardValue[1];
        break;
    case 6:
        permValue[0] = cardValue[1]; permValue[1] = cardValue[0]; permValue[2] = cardValue[2]; permValue[3] = cardValue[3];
        break;
    case 7:
        permValue[0] = cardValue[1]; permValue[1] = cardValue[0]; permValue[2] = cardValue[3]; permValue[3] = cardValue[2];
        break;
    case 8:
        permValue[0] = cardValue[1]; permValue[1] = cardValue[2]; permValue[2] = cardValue[0]; permValue[3] = cardValue[3];
        break;
    case 9:
        permValue[0] = cardValue[1]; permValue[1] = cardValue[2]; permValue[2] = cardValue[3]; permValue[3] = cardValue[0];
        break;
    case 10:
        permValue[0] = cardValue[1]; permValue[1] = cardValue[3]; permValue[2] = cardValue[0]; permValue[3] = cardValue[2];
        break;
    case 11:
        permValue[0] = cardValue[1]; permValue[1] = cardValue[3]; permValue[2] = cardValue[2]; permValue[3] = cardValue[0];
        break;
    case 12:
        permValue[0] = cardValue[2]; permValue[1] = cardValue[0]; permValue[2] = cardValue[1]; permValue[3] = cardValue[3];
        break;
    case 13:
        permValue[0] = cardValue[2]; permValue[1] = cardValue[0]; permValue[2] = cardValue[3]; permValue[3] = cardValue[1];
        break;
    case 14:
        permValue[0] = cardValue[2]; permValue[1] = cardValue[1]; permValue[2] = cardValue[0]; permValue[3] = cardValue[3];
        break;
    case 15:
        permValue[0] = cardValue[2]; permValue[1] = cardValue[1]; permValue[2] = cardValue[3]; permValue[3] = cardValue[0];
        break;
    case 16:
        permValue[0] = cardValue[2]; permValue[1] = cardValue[3]; permValue[2] = cardValue[0]; permValue[3] = cardValue[1];
        break;
    case 17:
        permValue[0] = cardValue[2]; permValue[1] = cardValue[3]; permValue[2] = cardValue[1]; permValue[3] = cardValue[0];
        break;
    case 18:
        permValue[0] = cardValue[3]; permValue[1] = cardValue[0]; permValue[2] = cardValue[1]; permValue[3] = cardValue[2];
        break;
    case 19:
        permValue[0] = cardValue[3]; permValue[1] = cardValue[0]; permValue[2] = cardValue[2]; permValue[3] = cardValue[1];
        break;
    case 20:
        permValue[0] = cardValue[3]; permValue[1] = cardValue[1]; permValue[2] = cardValue[0]; permValue[3] = cardValue[2];
        break;
    case 21:
        permValue[0] = cardValue[3]; permValue[1] = cardValue[1]; permValue[2] = cardValue[2]; permValue[3] = cardValue[0];
        break;
    case 22:
        permValue[0] = cardValue[3]; permValue[1] = cardValue[2]; permValue[2] = cardValue[0]; permValue[3] = cardValue[1];
        break;
    case 23:
        permValue[0] = cardValue[3]; permValue[1] = cardValue[2]; permValue[2] = cardValue[1]; permValue[3] = cardValue[0];
        break;
    
    default:
        permValue[0] = cardValue[0]; permValue[1] = cardValue[1]; permValue[2] = cardValue[2]; permValue[3] = cardValue[3];
        break;
    }

    return permValue;
}

double ex(double a,char oper, double b){

    double res;

    switch (oper)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '/':
        res = a / b;
        break;
    case '*':
        res = a * b;
        break;
    
    default:
        break;
    }

    return res;
}


string convertCharToString(char * a, int n){
    
    string res = "";

    for(int i = 0; i < n; i++ ){
        if (a[i] != ' '){
            res += a[i];
         }
    }
        

    return res;
}

void solve(double * cardValue, double goal, int * count, string * resultArray){
    
    char opr[4] = {'+', '-', '*', '/'};
    double * permValue;
    char buffer[30];
    int n;


    for (char x : opr){
        for (char y : opr){
            for (char z : opr){
                for (int i = 0; i < 24 ; i++){

                    permValue = permutation(cardValue, i);

                    if(ex(ex(ex(permValue[0], x, permValue[1]), y, permValue[2]),z,permValue[3]) == goal){ // ((a * b) * c) * d
                        //cout << " cek: " << "((" << permValue[0] << x << permValue[1] << ')' << y << permValue[2] << ')' << z << permValue[3] << "\n";
                        *count = *count + 1;
                        n = sprintf(buffer, "((%.0lf %c %.0lf) %c %.0lf) %c %.0lf", permValue[0], x, permValue[1], y, permValue[2], z, permValue[3]);
                        //cout << buffer << "\n";
                        resultArray[*count - 1] = buffer;
                        //*resultExpression = *resultExpression + convertCharToString(buffer, n) + " | ";
                    }
                    if(ex(ex(permValue[0],x,ex(permValue[1],y,permValue[2])),z,permValue[3]) == goal){ // (a * (b * c)) * d                        
                        //cout << " cek: " << '(' << permValue[0] << x << '(' << permValue[1] << y << permValue[2] << "))" << z << permValue[3] << "\n";
                        *count = *count + 1;
                        n = sprintf(buffer, "(%.0lf %c (%.0lf %c %.0lf)) %c %.0lf", permValue[0], x, permValue[1], y, permValue[2], z, permValue[3]);
                        //cout << buffer << "\n";
                        resultArray[*count - 1] = buffer;
                        //*resultExpression = *resultExpression + convertCharToString(buffer, n) + " | ";
                    }
                    if(ex(ex(permValue[0],x,permValue[1]), y ,ex(permValue[2],z,permValue[3])) == goal){// (a * b) * (c * d)
                        //cout << " cek: " << '(' << permValue[0] << x << permValue[1] << ')' << y << '(' << permValue[2] << z << permValue[3] << ')' << "\n";
                        *count = *count + 1;
                        n = sprintf(buffer, "(%.0lf %c %.0lf) %c (%.0lf %c %.0lf)", permValue[0], x, permValue[1], y, permValue[2], z, permValue[3]);
                        //cout << buffer << "\n";
                        resultArray[*count - 1] = buffer;
                        //*resultExpression = *resultExpression + convertCharToString(buffer, n) + " | ";
                    }
                    if(ex(permValue[0], x, ex(ex(permValue[1], y, permValue[2]),z ,permValue[3])) == goal){ // a * ((b * c) * d)
                        //cout << " cek: " << permValue[0] << x << "((" << permValue[1] << y << permValue[2] << ')' << z << permValue[3] << ')' << "\n";
                        *count = *count + 1;
                        n = sprintf(buffer, "%.0lf %c ((%.0lf %c %.0lf) %c %.0lf)", permValue[0], x, permValue[1], y, permValue[2], z, permValue[3]);
                        //cout << buffer << "\n";
                        resultArray[*count - 1] = buffer;
                        //*resultExpression = *resultExpression + convertCharToString(buffer, n) + " | ";
                    }
                    if(ex(permValue[0], x, ex(permValue[1], y, ex(permValue[2],z ,permValue[3]))) == goal){ // a * (b * (c * d))
                        //cout << " cek: " << permValue[0] << x << '(' << permValue[1] << y << '(' << permValue[2] << z << permValue[3] << "))" << "\n";
                        *count = *count + 1;
                        n = sprintf(buffer, "%.0lf %c (%.0lf %c (%.0lf %c %.0lf))", permValue[0], x, permValue[1], y, permValue[2], z, permValue[3]);
                        //cout << buffer << "\n";
                        resultArray[*count - 1] = buffer;
                        //*resultExpression = *resultExpression + convertCharToString(buffer, n) + " | ";
                    }

                }
            }
        }
    }
}


string fileName(double * cardValue){

    string name = "Result_(";
    char card[1];

    for (int i = 0; i < 4; i++){

        if( i != 0 ){
            name += ",";
        }
        
        if(cardValue[i] == 1){
            name += "A";
        }
        else if(cardValue[i] == 11){
            name += "J";
        }
        else if(cardValue[i] == 12){
            name += "Q";
        }
        else if(cardValue[i] == 13){
            name += "K";
        }
        else{
            sprintf(card, "%.0lf", cardValue[i]);
            name += card;
        }
    }
    
    name = name + ")";
    name = "../test/" + name;

    return name;
}


void storeInFile(string * resultArray, int resultCount, double resultTime, double * cardValue){

    string filename = fileName(cardValue);
    cout << filename;
    ofstream resultFile (filename);

    resultFile << "Card Values : " << cardValue[0] << " " << cardValue[1] << " " << cardValue[2] << " " << cardValue[3] << "\n";

    resultFile << resultCount << " solution found within " << resultTime << " microseconds" << "\n" << "\n";

    resultFile << "Result Expression: ";
    for(int i = 0; i < resultCount; i++){
        if (i % 3 ==0){
            resultFile << "\n";
        }
        resultFile << resultArray[i] << "       ";
    }

    resultFile.close();

}