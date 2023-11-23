#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase = "If you want to be a good programmer, you have to be strict";
    string subcadena = "programmer";
    string nueva_subcadena = "developer";

    size_t posicion = frase.find(subcadena);
    if(posicion != string::npos) {
        cout << "La subcadena se encontro en el indice: " << posicion << endl;
        frase.replace(posicion, subcadena.length(), nueva_subcadena);
    } else {
        cout << "La subcadena no se encontro." << endl;
    }

    cout << "La cadena resultante es: " << frase << endl;

    return 0;
}