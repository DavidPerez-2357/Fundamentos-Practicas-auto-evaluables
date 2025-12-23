/**************************************
* NOMBRE: #David#
* PRIMER APELLIDO: #Perez#
* SEGUNDO APELLIDO: #Fernandez#
* DNI: #anonimo#
* EMAIL: #anonimo@alumno.uned.es#
***************************************/

#include <stdio.h>

int main() {
  const char fieldFormat[] = " %s\n";

  // printf("%s\n", "---------------------------------------------------------------");
  printf(fieldFormat, "David");
  printf(fieldFormat, "Perez");
  printf(fieldFormat, "Fernandez");
  printf(fieldFormat, "anonimo");
  printf(fieldFormat, "anonimo@alumno.uned.es");
  // printf("%s\n", "---------------------------------------------------------------");
  return 1;
}
