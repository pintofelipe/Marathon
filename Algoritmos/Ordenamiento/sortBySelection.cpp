#include <iostream>
//Sort by section
/*
1 Buscar el mínimo elemento de la lista
2 Intercambiar con el primer elemento
3 Buscar el mínimo del resto de la lista
4 Intercambiar con el segundo
5 Y así sucesivamente
*/
//#include <coco77>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);


    int numbers[] = {3,2,1,5,4};
    int i,j,aux,valueMin;


    //Algorithm Sort by section
    for(i=0;i<5;i++){

       valueMin = i;

       for(j = i+1; j<5; j++){
            if(numbers[j] < numbers[valueMin]){
                valueMin = j;
            }
       }


       aux = numbers[i];
       numbers[i] = numbers[valueMin];
       numbers[valueMin] = aux;
    }


     cout<<"Orden Ascendente: ";
    for(i=0;i<5;i++){
        cout << numbers[i]<<" ";
    }


    cout << "\nOrden Decendente: ";

    for(i=4; i >= 0;i--){
        cout << numbers[i]<<" ";
    }

    return 0;
}
