#include <iostream>
using namespace std;

int main (){
    int NUMS;
    cout << "Ingrese la cantidad de elementos  : ";
    cin >> NUMS; 

    int nums[NUMS];

    int *nPt = nums;
    int i, total = 0, *nPt; 
    int *nums = new int[NUMS];

for (int j = 0; j < NUMS; j++) {
     cout << "Ingrese el numero " << j + 1 << ":" ;
     cin  >> nums[j]; 
}
     nPt = nums;

for (i = 0; i < NUMS; i++) {
     total = total + *nPt++;
    
}
     cout << "EI total de los elementos del arreglo es "  << total << endl;

     delete[] nums;

return 0 ;

}