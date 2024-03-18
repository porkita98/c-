#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Persona
struct Persona {
    // Variables de la estructura
    string nombre;
    string apellido;
    int edad;
    string telefono;
};

int main() {
    // Crear un arreglo de 5 personas
    Persona personas[5];

    // Agregar los datos de las personas
    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese los datos de la persona " << i + 1 << ":" << endl;
        
        cout << "Nombre: ";
        getline(cin, personas[i].nombre);
        
        cout << "Apellido: ";
        getline(cin, personas[i].apellido);

        cout << "Edad: ";
        cin >> personas[i].edad;
        cin.ignore(); // Para limpiar el buffer de entrada
        
        cout << "Teléfono: ";
        getline(cin, personas[i].telefono);

        cout << endl;
    }

    // Mostrar los datos de las personas
    cout << "Datos de las personas:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Persona " << i + 1 << ":" << endl;
        cout << "Nombre: " << personas[i].nombre << endl;
        cout << "Apellido: " << personas[i].apellido << endl;
        cout << "Edad: " << personas[i].edad << endl;
        cout << "Teléfono: " << personas[i].telefono << endl << endl;
    }

    return 0;
}
