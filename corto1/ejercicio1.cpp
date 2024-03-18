#include <iostream>
#include <string>

using namespace std;


struct Libro_corto1 {
    string titulo;
    string autor;
    string editorial;
    int anio;
    float precio;
};

int main() {
   
    Libro_corto1 miLibro;

    
    miLibro.titulo = "harry potter";
    miLibro.autor = "J. K. Rowling";
    miLibro.editorial = "warner bros";
    miLibro.anio = 2001;
    miLibro.precio = 39.99;

    cout << "Título: " << miLibro.titulo << endl;
    cout << "Autor: " << miLibro.autor << endl;
    cout << "Editorial: " << miLibro.editorial << endl;
    cout << "Año: " << miLibro.anio << endl;
    cout << "Precio: $" << miLibro.precio << endl;

    return 0;
}
