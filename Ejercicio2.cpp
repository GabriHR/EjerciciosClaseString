#include <iostream>
#include <string>
using namespace std;
int main() {
    string frase = "La programacion en C++ es divertida.";

    cout << "Tamano de la cadena: " << frase.size() <<endl;

    if(frase.empty()) {
        cout << "La cadena esta vacia." <<endl;
    } else {
        cout << "La cadena no esta vacia." <<endl;
    }

    return 0;
}