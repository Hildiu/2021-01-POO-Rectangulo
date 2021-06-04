//----------------------------------------------
// Dato de Entrada: largo, ancho (double)
// Dato de Salida: area, perimetro (double)
//-----------------------------------------------


#include "CRectangulo.h"

int main()
{
  CRectangulo R1; //--- usando el constructor por defecto
  tnumero l,a;

  cout << "Largo : ";
  cin >> l;
  cout  << "Ancho :";
  cin >> a;

  R1.setLargo(l);
  R1.setAncho(a);
  cout << "Area es : " << R1.area() << "\n";
  cout << "Perimetro es : " << R1.perimetro() << "\n";

  //------------------
  cout << "\n ahora ingresa valores para el segundo objeto \n";
  cout << "Largo : ";
  cin >> l;
  cout  << "Ancho :";
  cin >> a;

  CRectangulo     R2(l,a);
  cout << "El area es : " << R2.area() << "\n";
  cout << "El perimetro es : " << R2.perimetro() << "\n";

  //----- vamos a forzar el uso de los setter y getter
  cout << "\n\nModificamos el valor del largo y ancho \n";
  R2.setLargo(R2.getLargo() + 50);
  R2.setAncho(R2.getAncho() + 15);
  cout << "El area es : " << R2.area() << "\n";
  cout << "El perimetro es : " << R2.perimetro() << "\n";


  cout  << "\n\n";
  return 0;
}



