#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase = "If you want to be a great programmer, you have to be strict";
    string subcadena = "programmer";
    string nueva_subcadena = "developer";

    size_t posicion = frase.find(subcadena);
    if(posicion != string::npos) {//npos es el valor que se devuelve si no se encuentra la subcadena
        cout << "La subcadena se encontro en el indice: " << posicion << endl;
        frase.replace(posicion, subcadena.length(), nueva_subcadena);//reemplaza la subcadena por la nueva subcadena
    } else {
        cout << "La subcadena no se encontro." << endl;//si no se encuentra la subcadena
    }

    cout << "La cadena resultante es: " << frase << endl;//imprime la cadena resultante

    return 0;
}