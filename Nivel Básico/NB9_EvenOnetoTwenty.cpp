// Mostrar los números pares del 1 al 20.

#include <iostream>
using namespace std;

int main(){
    int count=20;
    for (int i = 0; i < count+1; i++){
        if(i%2==0){
            cout << i << "-";
        }
    }
    return 0;
}