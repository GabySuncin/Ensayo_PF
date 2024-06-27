#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <fstream>
using namespace std; 


int main (void) 
{
    int puntaje, opcion;
    srand(time(NULL));
    puntaje = rand();
    string us;
    ofstream puntajeguar("puntajes.txt", ios::app);
    if (!puntajeguar)
    {
        cout<<endl<<"EL ARCHIVO EN EL QUE DESEA GUARDAR LOS DATOS NO EXISTE"<<endl;
    }  
    cout <<endl<<"ACA SE GUARDARAN LOS USUARIOS" <<endl; 
    cout <<"INGRESE SU NOMBRE PORFAVOR: "<<endl;
    cin>>us;
    cout<<endl<<"Muchas gracias por jugar "<<us<<" :)"<<endl;
    cout<<endl<<endl<<"Tu puntaje es: "<<puntaje<<endl;
    puntajeguar<<"El puntaje de "<<us<<" es: "<<puntaje<<endl;
    puntajeguar.close();


    cout<<endl<<"Si deseas ver el historial de puntajes puedes seleccionar las siguientes opciones "<<endl;
    cout<<"Presione [1] para ver: "<<"        Presione [0] Para salir: "<<endl;
    cin>>opcion;
    if (opcion == 1)
    {
        ifstream archivopuntos("puntajes.txt");
        if (!archivopuntos.is_open())
        {
            cout<<endl<<"No se puede abrir el archivo puntajes.txt"<<endl;
            
        }
        cout << "¡AQUI TIENES EL HISTORIAL HASTA AHORA!" << endl;
        string linea;
        while (getline(archivopuntos, linea)) 
        {  
            cout << linea << endl;
        }

        archivopuntos.close(); 
        } 
        else 
        {
            cout << endl << "¡FIN DE LA PARTIDA :) !" << endl;
        }
        
    
    
    

    return 0;
}