//Calcular el área de un cuadrado, triángulo y círculo con entradas por teclado.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int option; //variables declaradas

    cout << ">>>>SELECT AN OPTION<<<<\n";   //Menú en pantalla
    cout << "[1] Calculate the area of the square.\n";
    cout << "[2] Calculate the area of the triangle.\n";
    cout << "[3] Calculate the area of the circle.\n";
    cout << "--> ";
    cin >> option;  //Entrada por teclado "opcion"

    switch (option) {
        case 1: {   //Primer caso para obtener el area del cuadrado
            double side;
            cout << "Enter the side length of the square: ";    //Recogida de datos por teclado
            cin >> side;
            cout << "The area obtained was: " << side * side << endl;   //Resultado mostrado en pantalla
            break;
        }
        case 2: {   //Segundo caso para obtener el area del triangulo
            double base, height;
            cout << "Enter the base of the triangle: "; //Recogida de datos por teclado
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "The area obtained was: " << (base * height) / 2 << endl;   //Resultado mostrado en pantalla
            break;
        }
        case 3: {   //Tercer caso para obtener el area del circulo
            double radius;
            cout << "Enter the radius of the circle: "; //Recogida de datos por teclado
            cin >> radius;
            cout << "The area obtained was: " << M_PI * (radius * radius) << endl;  //Resultado mostrado en pantalla
            break;
        }
        default: 
            cout << "[!] Enter a valid option [!]" << endl;
            break;
    }
    return 0;
}