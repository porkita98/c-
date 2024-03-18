#include <iostream>
using namespace std;

int main() {
    int NUMS;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> NUMS;

    int *nums = new int[NUMS]; 
    int *nPt = nums; 
    int total = 0; 
    for (int j = 0; j < NUMS; j++) {
        cout << "Ingrese el numero " << j + 1 << ": ";
        cin >> nums[j];
    }

    
    for (int i = 0; i < NUMS; i++) {
        total = total + *nPt;
        nPt++; 
    }

    cout << "El total de los elementos del arreglo es " << total << endl;


    delete[] nums;

    return 0;
}