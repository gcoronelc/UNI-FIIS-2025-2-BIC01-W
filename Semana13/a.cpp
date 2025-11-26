#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string oracion;
    cout << "Introduce una oración completa: ";
    getline(cin, oracion); // Leer la oración completa
    stringstream ss(oracion); // Crear un stringstream de la oración
    string palabra;
    int contador = 0;
    // Contar palabras usando el stringstream
    while (ss >> palabra) {contador++;}
    cout << "La oración contiene " <<contador << " palabras." << endl;
    return 0;
}



