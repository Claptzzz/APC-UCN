//

#include <bits/stdc++.h>
using namespace std;

int main() {

    //Declaramos la pila que usaremos en este ejercicio
    stack<char> pila;
    string texto;cin>>texto;

    //Recorremos todo el texto que se ingresa
    for(int i=0; i<texto.length(); i++){
        //En caso de ser '(' lo ingresamos a la pila
        if (texto[i] == '(') {
            pila.push(texto[i]);
        //En caso contrario revisamos si la pila ya contiene algun '('
        } else {
            //En caso que no tenga ninguno significa que ya no esta equilibrado, y finalizamos el programa
            if (pila.empty()) {
                cout << "no" << endl;
                return 0;
            //Si tiene alguno, simplemente lo eliminamos
            } else {
                pila.pop();
            }
        }
    }
    //Luego de revisar todo el string, revisamos que no haya quedado ninguno pendiente
    if (pila.empty()) {
        //Si todos estaban equilibrados, imprimimos que si
        cout << "yes" << endl;
    } else {
        //En caso que hayan sobrado entonces imprimimos que no
        cout << "no" << endl;
    }

    return 0;
}