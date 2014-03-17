#include <iostream>
#include <stdlib.h>
using namespace std;
#include "winSystem.h"
using namespace winSys;

#define INI "netsh wlan "
#define COM "\""

int main(){
    char * comand;
    string cmd = INI, temp;
    cmd += "set hostednetwork mode=allow ssid=";
    cout << "Ingrese el nombre de la red inalambrica (SSID)\n\n";
    cin >> temp;
    cmd += COM + temp + COM;
    sysClear();
    cout << "Ingrese una contrasena\n\n";
    cin >> temp;
    cmd = cmd + " key=" + COM + temp + COM;
    sysClear();
    comand = copyString(cmd, comand);
    return system(comand);
}
