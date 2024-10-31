#include <iostream>
//ordenamientos

//#include <coco77>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int numbers[] = {4,1,2,3,5};

    int i,j,aux;

    //Algoritmo del metodo burbuja
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(numbers[j] > numbers[j+1]){
                aux=numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = aux;
            }
        }
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
