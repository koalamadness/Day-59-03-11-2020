#include <iostream>
#include "arreglo.h"

int main() {

  Arreglo<string> arreglo;

  arreglo.insertar_inicio("Ballena");
  arreglo.insertar_inicio("Vaca");
  arreglo.insertar_final("Caballo");
  arreglo.insertar_final("Rata");

  for (size_t i = 0; i < arreglo.size(); i++)
  {
    cout << arreglo[i] << " " ;
  }

  cout << endl;

  arreglo.insertar("Rana", 2);

  for (size_t i = 0; i < arreglo.size(); i++)
  {
    cout << arreglo[i] << " " ;
  }

  cout << endl;

  arreglo.eliminar_inicio();
  arreglo.eliminar_final();
  arreglo.eliminar(1);

  for (size_t i = 0; i < arreglo.size(); i++)
  {
    cout << arreglo[i] << " " ;
  }

}