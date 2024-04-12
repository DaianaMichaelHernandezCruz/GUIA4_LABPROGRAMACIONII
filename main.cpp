#include <iostream>
#include <conio.h>

#include "OSWindows.h"
#include "OSLinux.h"
#include "OSOSx.h"

using namespace std;

int main()
{
    /*//Creamos un skin tipo windows
    OSWindows _win;
    _win.PintarWindow();
    cout << "\n";
    cout << "\n";

    //Creamos un skin tipo Linux
    OSLinux _lin;
    _lin.PintarLinux();
    cout << "\n";
    cout << "\n";

    //Creamos un skin tipo Ososx
    OSOSx _os;
    _os.PintarOSOSx();
    cout << "\n";
    cout << "\n";*/
    int op;
    OSWindows _win;
    OSLinux _lin;
    OSOSx _os;

    do{
        system("cls;");
        cout << "*****************************************************\n";
        cout << "*                  MENU DE OPCIONES                 *\n";
        cout << "*****************************************************\n";
        cout << "1. OSWindows \n";
        cout << "2. OSLinux \n";
        cout << "3. OSOSx \n";
        cout << "4. Salir \n";
        cout << "*****************************************************\n";
        cout << "Digite una opcion: ";
        cin >> op;
        cout << "*****************************************************\n";

        if(op>=1 || op<=3){
            switch(op){
                case 1:
                    //Creamos un skin tipo windows
                    cout << "\n\n";
                    _win.PintarWindow();
                    cout << "\n";
                    break;

                case 2:
                    //Creamos un skin tipo Linux
                    cout << "\n\n";
                    _lin.PintarLinux();
                    cout << "\n";
                    break;

                case 3:
                    //Creamos un skin tipo Ososx
                    cout << "\n\n";
                    _os.PintarOSOSx();
                    cout << "\n";
                    break;

                default:
                    //saliendo
                    cout << "\n";
                    cout << "Saliendo del programa";
                    cout << "\n";
                    break;
            }
        }
        else{
            cout << "opcion no valida;";
        }
        system("pause");
    }while(op!=4);
    return 0;
}
