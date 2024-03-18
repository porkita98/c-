#include <functional>
#include <iostream>

using namespace std;


int add (int x, int y)
 {
           
   return x + y;
}
int resta (int x, int y)
 {
           
   return x - y;
}
int multiply(int x, int y)
{
    return x * y;
}
int dividir(int x, int y)
{
    return x / y;
}
int invoke (int x, int y,
           function<int(int, int)> func)
           {
            return func(x,y);
           }
 int main()
    {
        int numero1 ;
        int numero2;
        cout << "ingrese el un numero entero positivo ";
        cin >> numero1;

        cout << "ingrese un segundo numero entero positivo ";
        cin >> numero2;
        cout <<  "el resultado de la suma es " <<invoke (numero1, numero2, add)  << endl;
        cout <<  "el resultado de la resta es " <<invoke (numero1, numero2, resta)  << endl;
        cout <<  "el resultado de la multiplicacion es " <<invoke (numero1, numero2, multiply) << endl;
         cout <<  "el resultado de la division  es " <<invoke (numero1, numero2, dividir) << endl;

        return 0;
    }
          