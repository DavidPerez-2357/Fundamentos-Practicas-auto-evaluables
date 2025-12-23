/**************************************
* NOMBRE: #David#
* PRIMER APELLIDO: #Perez#
* SEGUNDO APELLIDO: #Fernandez#
* DNI: #anonimo#
* EMAIL: #anonimo@alumno.uned.es#
***************************************/

#include <stdio.h>
#include <stdlib.h> // para system()
#include <math.h>


void printDiamond(int width,int  height) {
  char firstFill = '@';
  char secondFill = 'o';
  int charactersInLine, halfLine, totalWidth;

  halfLine = (height - 1) / 2 + 1;
  totalWidth = width * 2 - 1;

  // Content of diamond
  for (int line = 1; line <= height; line++) {
    // Number of characters per line
    charactersInLine = width - abs(halfLine - line);

    // Spaces before line
    for (int i = 1; i <= totalWidth / 2 - charactersInLine + 1; i++) {
      printf(" ");
    }

    // Line of the diamond (first half)
    for(int i = 1; i <= charactersInLine; i++) {
      // Separation
      if (i != 1) {
        printf(".");
      }

      // If length is odd or even alternate diamond symbols
      if (charactersInLine % 2 == 0) {
        if (i % 2 == 0 && i <= charactersInLine / 2) {
          printf("%c", secondFill);
        }else if (i <= charactersInLine / 2) {
          printf("%c", firstFill);
        }

        if (i % 2 == 0 && i > charactersInLine / 2) {
          printf("%c", firstFill);
        }else if (i > charactersInLine / 2) {
          printf("%c", secondFill);
        }
      }else {
        if (i % 2 == 0) {
          printf("%c", secondFill);
        }else {
          printf("%c", firstFill);
        }
      }
    }

    printf("\n");
  }
}

int main() {
  int diamondWidth, diamondHeight;
  printf("Introduzca el numero de caracteres del rombo: ");
  scanf("%d", &diamondWidth);

  if (diamondWidth < 1 || diamondWidth > 20) {
    printf("\n Longitud invalida \n");
    return 0;
  }

  system("cls");

  // Get diamond height
  diamondHeight = (diamondWidth - 1) * 2 + 1;

  printDiamond(diamondWidth, diamondHeight);

  return 1;
}
