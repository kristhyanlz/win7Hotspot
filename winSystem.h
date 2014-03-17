#ifndef WINSYSTEM_H_INCLUDED
#define WINSYSTEM_H_INCLUDED

namespace winSys{
    int sysClear(){
        system("cls");
    }

    int sysPause(){
        system("pause");
    }

    int evaluar(int a){
        cout << "\n\n#######\nSe retorno el valor de: " << a;
        if (not a)
            cout << "\nCorrecto!";
        cout << endl;
        return a;
    }
}

char * copyString(string & str, char * comand){
    comand = new char [str.length() + 1];
    for(register short i = 0; str[i]; ++i){
        comand[i] = str[i];
    }
    comand[str.length()] = false;
    return comand;
}

#endif // WINSYSTEM_H_INCLUDED
