#include <iostream>
//Coleccion de datos de una persona
using namespace std;



struct person {
    char name[20];
    int age;
}person1;



int main()
{
   cout<<"Nombre1: ";
   cin.getline(person1.name, 20, '\n');
   cout<<"Edad1: ";
   cin>> person1.age;


   cout<<"\nImprimiendo datos\n";
   cout<<"Nombre1: "<<person1.name<<"\n";
   cout<<"Edad1: "<<person1.age;

    return 0;
}
