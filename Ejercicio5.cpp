#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena = "If you want to  be successful, you gotta be a constant worker.";//cadena original
    string subcadena = cadena.substr(17, 12);//subcadena a buscar
    string cadena_a_insertar = " and have a great life";//cadena a insertar

    cadena.insert(cadena.find(subcadena) + subcadena.length(), cadena_a_insertar);//inserta la cadena

    cout << "La cadena resultante es: " << cadena << endl;//imprime la cadena resultante

    return 0;
}