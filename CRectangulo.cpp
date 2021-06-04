//
// Created by MARIA HILDA BERMEJO RIOS on 6/4/21.
//

#include "CRectangulo.h"


tnumero CRectangulo::perimetro()
{
  return ( largo*2 + ancho*2 );
}

tnumero CRectangulo::area()
{
  return ( largo * ancho);
}