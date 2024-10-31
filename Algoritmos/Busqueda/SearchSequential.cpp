#include <iostream>
//Search Sequential

//#include <coco77>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);


    int numbers[] = {3,2,1,5,4,77};
    int i,value;
    char band = 'F';

    //Algorithm Search sequential
    value = 77;


    while((band == 'F') && (i<6)){
        if(numbers[i] == value){
            band = 'V';
        }
        i++;
    }

    if(band == 'F') cout<<"El valor "<<value<<" No existe en el arreglo"<<endl;
    else cout<<"El valor "<<value<<" fue encontrado en la posicion "<<i-1;




    return 0;
}
