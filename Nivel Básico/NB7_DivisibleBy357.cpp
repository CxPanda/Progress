// Pedir un número y determinar si es divisible por 3, 5 o 7.

#include <iostream>
using namespace std;

int main(){
    int number; 
    cout << "Type a number: "; cin >> number;
    cout << "The number you chose is divisible by:";
    if (number%3==0){
        cout << " 3 ";
    }
    if(number%5==0){
        cout << " 5 ";
    }
    if (number%7==0){
        cout << " 7 ";
    }
    return 0;
}