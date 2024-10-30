#include <iostream>
//#include <coco77>
//Se necesista que el arreglo este ordenado de forma ascendente
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int numbers[] = {1,2,3,4,5,6,7};
    int inf,sup,mitad,dato;

    char band = 'F';

    dato = 4;

    //Algortimo de la busqueda binaria

    inf = 0;
    sup = 10;

    while(inf <= sup){

        mitad = (inf+sup)/2;

        if(numbers[mitad] == dato ){
            band = 'V';
            break;
        }
        if(numbers[mitad] > dato ){
            sup = mitad;
            mitad = (inf+sup)/2;
        }

        if(numbers[mitad] < dato){
            inf = mitad;
            mitad = (inf+sup)/2;
        }

    }

    if(band == 'V'){
        cout<<"el dato ha sido encontrado en la posicion "<<mitad<<endl;
    }else{

        cout<<"el dato no fue encontrado"<<endl;
    }



    return 0;
}
