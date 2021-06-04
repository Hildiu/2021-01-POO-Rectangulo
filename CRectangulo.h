//
// Created by MARIA HILDA BERMEJO RIOS on 6/4/21.
//

#ifndef INC_07_SEMANAB_CRECTANGULO_H
#define INC_07_SEMANAB_CRECTANGULO_H

#include <iostream>
using namespace  std;

using tnumero = double;


class CRectangulo
{
   private:
    tnumero largo;
    tnumero ancho;
   public:
    CRectangulo() { };   //--- es el constructor por defecto
    CRectangulo(tnumero _largo, tnumero _ancho):largo(_largo), ancho(_ancho){ };
    virtual ~CRectangulo(){ cout << "Destruyendo el objetos......"; };

    tnumero perimetro();
    tnumero area();
    //----- metodos de acceso------------
    void setLargo(tnumero _largo) { largo = _largo;}
    tnumero getLargo() { return largo; }
    void setAncho(tnumero _ancho) { ancho = _ancho;  }
    tnumero getAncho() { return ancho; }
};


#endif //INC_07_SEMANAB_CRECTANGULO_H
