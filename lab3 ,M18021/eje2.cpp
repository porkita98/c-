#include <iostream>
#include <string>

using namespace std;
struct Estudiante {
    string nombre;
    int edad;
    int numeroIdentificacion;
    float calificaciones[5]; 
};
int main() {
    const int MAX_ESTUDIANTES = 100;
    Estudiante estudiantes[MAX_ESTUDIANTES];

    
    estudiantes[0] = {"Juan", 18, 1001, {85.5, 90.0, 92.3, 88.7, 91.2}};
    estudiantes[1] = {"María", 17, 1002, {75.0, 80.5, 82.1, 78.3, 79.9}};
    estudiantes[2] = {"Carlos", 19, 1003, {92.0, 88.5, 90.2, 87.8, 89.1}};

    for (int i = 0; i < 3; ++i) {
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Número de Identificación: " << estudiantes[i].numeroIdentificacion << endl;
        cout << "Calificaciones:" << endl;
        for (int j = 0; j < 5; ++j) {
            cout << "Calificación " << j + 1 << ": " << estudiantes[i].calificaciones[j] << endl;
        }
        cout << endl;
    }

    return 0;
}
