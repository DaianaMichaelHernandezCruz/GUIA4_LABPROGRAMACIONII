#ifndef OSOSX_H
#define OSOSX_H

#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string.h>
#include "iAparienciaO.h"

using namespace std;

class OSOSx : public iAparienciaO
{
    public:
        OSOSx();
        virtual ~OSOSx();
        void PintarOSOSx();

    protected:

    private:
        char _os_titulo[100];
        char _os_area_trabajo[100];
        char _os_estado[100];
        void DibujarSimbolo(char, int, bool _saltarlinea = false);
        void CentrarTexto(char*);
};

#endif // OSOSX_H
