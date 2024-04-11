// Convertir grados Celsius a Fahrenheit y viceversa.

#include <iostream>
using namespace std;

int main(){
    int opt;    //Variables declaradas

    cout << ">>>>SELECT AN OPTION<<<<\n";   //Menú en pantalla
    cout << "[1] To convert degrees Celsius to degrees Fahrenheit.\n";
    cout << "[2] To convert degrees Fahrenheit to degrees Celsius.\n";
    cout << "--> ";
    cin >> opt ;

    switch (opt){
    case 1:
    double cel, fahrenheit;
        cout << "Type the temperature in degrees Celsius: "; cin >> cel;
        fahrenheit = (cel*9/5)+32;
        cout << "Here's the convertion to degrees Fahrenheit: " << fahrenheit;
        break;
    case 2:
    double celsius, fah;
        cout << "Type the temperature in degrees Fahrenheit: "; cin >> fah;
        celsius = (fah-32)*5/9;
        cout << "Here's the convertion to degrees Celsius: " << celsius;
        break;
    default:
        cout << "[!] Enter a valid option [!]";
        break;
    }

    return 0;
}