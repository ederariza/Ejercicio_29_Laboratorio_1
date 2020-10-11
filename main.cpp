
/*
Ejercicio 29. Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B es mayor, menor o igual
que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
repetira el proceso hasta acertar el número seleccionado por usuario.
*/

#include <iostream>

using namespace std;

int main(){

    int numero_A = 50;
    int numero_B = 0;

    while (numero_B != numero_A){

        cout << "Intente adivinar un numero: ";
        cin >> numero_B;

        if (numero_B > numero_A)
            cout << "B > A" << endl;

        else if (numero_B < numero_A)
            cout << "B < A" << endl;

        else
            cout << "B = A" << endl;

    }

    return 0;
}
