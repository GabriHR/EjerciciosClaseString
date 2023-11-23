#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena = "If you want to  be successful, you gotta be a constant worker.";
    string subcadena = cadena.substr(17, 12);
    string cadena_a_insertar = " and have a great life";

    cadena.insert(cadena.find(subcadena) + subcadena.length(), cadena_a_insertar);

    cout << "La cadena resultante es: " << cadena << endl;

    return 0;
}