#include <iostream>
#include <stdlib.h>
using namespace std;
#include "winSystem.h"
using namespace winSys;

void entorno(){
    short option;
    string foo;
    while(true){
        cout << "\n\nBienvenido!\n\nQue desea hacer?\n\n1- Configurar WLAN (Infraestructura)\n2- Activar WLAN\n3- Desactivar WLAN\n4- Salir\n\n";
        cin >> option;
        sysClear();
        switch(option){
            case 1: if (evaluar(system("configWlan.exe")))
                        cout << "\n\n\n%%%%%%%%%%%\nError! -- Probablemente ha escrito una contrasena invalida, intentelo de nuevo.";
                    break;
            case 2: evaluar(system("startWlan.exe"));
                    break;
            case 3: evaluar(system("stopWlan.exe"));
                    break;
            case 4: return;
        }
        cin >> foo;
        sysClear();
    }
}

int main(){
    entorno();
}
