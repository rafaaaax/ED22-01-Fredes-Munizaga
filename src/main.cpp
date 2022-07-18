#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <stdlib.h>

using namespace std;

int main() 
{
    char a;
    do{
        int a,b;
        cout<< "1- GUARDIA \n";
        cout<< "2- ADMINISTRADOR \n";
        cout<< "3- SALIR \n";
        cin>> a;
        switch (a)
        {
        case 1:
            cout<< "1- DETECTAR PERSONAS \n";
            cout<< "2- CONTAR PERSONAS ENTRANDO \n";
            cout<< "3- CONTAR PERSONAS SALIENDO \n";
            cout<< "4- PERSONAS QUE ENTRAN POR HORA \n";
            cout<< "5- PERSONAS QUE SALE POR HORA \n";
            cout<< "6- VOLVER AL MENU \n";
            cin>> b;
            if (b ==  1,2,3,4,5){
                return main();
            }
            else{
                return main();
            }
            break;
        case 2:
            cout<< "1- CONFIGURACION CAMARA O ARCHIVO \n";
            cin>> b;
            if (b == 1){
                return main();
            }
            else{
                return main();
            }
            break;
        case 3:
            cout<< "SEGURO QUIERES SALIR? SI o NO \n";
            cout<< "\n 1- SI";
            cout<< "\n 2- NO\n\n";
            cin>> b;
            if (b == 1){
                return 0;
            }
            else{
                return main();
            }
            break;
            default:
            return main();
            break;
        }
    }
    while (a != 3);
    system("pause");
    return main();
    
}
