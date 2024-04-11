// Pedir un número y determinar si es par o impar.

#include <iostream>
using namespace std;

int main(){
    int number; 
    cout << "Type a number: "; cin >> number;

    if (number%2==0){
        cout << "The number you chose is Even";
    }else{
        cout << "the number you chose is Odd";
    }

    return 0;
}