#include <iostream>
#include <string>
using namespace std;
struct Personas {

    string nombre;
    string apellido;
    int edad;
    string telefono;
};
int main() {
    Personas personas[5];
    for (int i = 0; i < 5; ++i) {
        cout << "igrese el nombre de la persona " << i + 1 << ": ";
        cin >>  personas[i].nombre;
        cout << "ingrese el apellido de la persona " << i + 1 <<": ";
        cin >> personas[i].apellido;
        cout << "ingrese la edad de la persona " << i + 1 << ": ";
        cin >> personas[i].edad;
        cout << "ingrese el telefono de la persona " << i + 1 << ": ";
        cin >> personas[i].telefono;
    }
    cout << " \ndatos de las personas ingresados: \n ";
    for (int i = 0; i < 5; ++i) {
        cout << "\npersona " <<  i + 1 << " :\n"; 
        cout << "nombre:  " << personas[i].nombre << endl;
        cout << "apellido: " << personas[i].apellido << endl;
        cout << "edad: " << personas[i].edad << endl;
        cout << "telefono:  " << personas[i].telefono << endl;
    }        
return 0;
}
