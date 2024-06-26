#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <fstream>
using namespace std; 

int main (void) 
{
    int puntaje;
    puntaje = rand();
    srand(time(NULL));
    string us;
    cout <<endl<<"ACA SE GUARDARAN LOS USUARIOS" <<endl; 
    cout <<"INGRESE SU NOMBRE PORFAVOR: "<<endl;
    cin>>us;
    cout<<endl<<"Muchas gracias por jugar "<<us<<" :)"<<endl;
    cout<<endl<<endl<<"Tu puntaje es: "<<puntaje<<endl;

    
}