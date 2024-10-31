#include <iostream>
//insertion Sort

//#include <coco77>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);


    int numbers[] = {4,2,3,1,5};
    int i,pos,aux;

    //Algorithm intertion Sort
    for(i=0;i<5;i++){
        pos = i;
        aux = numbers[i];

        while((pos>0) && (numbers[pos-1] > aux )){

            numbers[pos] = numbers[pos-1];
            pos--;

        }

        numbers[pos] =aux;
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
