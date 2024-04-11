// Pedir al usuario dos números y mostrar la suma, resta, multiplicación y división.

#include <iostream> 
using namespace std;

int main (){
    int number1, number2;   //Variables declaradas
    int plus, minus, x;
    double div;

    cout << "Type a first number: ";    //Entradas de datos por teclado
    cin >> number1;
    cout << endl << "Type a second number: "; 
    cin >> number2;

    plus = number1+number2; //Operaciones realizadas 
    minus = number1-number2;
    x = number1*number2;
    div = static_cast<double>(number1)/number2; //enmascaramiento de variable para mostrar decimales

    cout << endl << "Addition-->[" << number1 << "] + [" << number2 << "] = " << plus <<".\n";    //Información impresa en pantalla
    cout << endl << "Substracition-->[" << number1 << "] - [" << number2 << "] = " << minus <<".\n";
    cout << endl << "Multiplication-->[" << number1 << "] * [" << number2 << "] = " << x <<".\n";
    cout << endl <<"Division-->[" << number1 << "] / [" << number2 << "] = " << div <<".\n";
    return 0;
}