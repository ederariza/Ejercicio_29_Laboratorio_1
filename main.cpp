
/*
Ejercicio 29. Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B es mayor, menor o igual
que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
repetira el proceso hasta acertar el número seleccionado por usuario.
*/

#include <iostream>
#include<stdlib.h>
using namespace std;

int main(){

    int numero_A;
    int numero_B = 0;
    int numero_bajo = 0;
    int numero_alto = 100;
    char caracter = ' ';

    cout << "ingrese el numero a adivinar por el programa entre 0 y 100: ";
    cin >> numero_A;

    while ( caracter != '='){

        numero_B = numero_bajo + rand() % (numero_alto - numero_bajo);
        cout << numero_B << endl;
        cin >> caracter;

        if (caracter  == '>')
            numero_alto = numero_B;

        else if (caracter  == '<')
            numero_bajo = numero_B;

        else
            continue;

    }

    return 0;
}
