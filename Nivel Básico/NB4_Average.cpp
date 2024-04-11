//Calcular el promedio de tres números.

#include <iostream>
using namespace std;

int main() {
    int number1,number2,number3;    //Variables declaradas
    double average;

    cout << "Type the first number: "; cin >> number1;  //Entrada de datos por teclado
    cout << endl << "Type the second number: "; cin >> number2;
    cout << endl << "Type the third number: "; cin >> number3;

    average = static_cast<double>(number1+number2+number3)/3;   //Operacion realizada con enmascaramiento
    cout << "The average obtained was: " << average;    //Impresion de resultados por pantalla
    return 0;
}