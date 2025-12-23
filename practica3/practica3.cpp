/**************************************
* NOMBRE: #David#
* PRIMER APELLIDO: #Perez#
* SEGUNDO APELLIDO: #Fernandez#
* DNI: #anonimo#
* EMAIL: #anonimo@alumno.uned.es#
***************************************/

#include <stdio.h>
#include <math.h>
#include <string.h>

typedef char String[30];
typedef char NameOfMonth[23];

int zellerAlgoritm(int day, int month, int year) {
  int K, J, h, dayOfWeek;

  if (month < 3) {
    month = month + 12;
    year = year - 1;
  }

    K = year % 100;
    J = year / 100;

    h = (day + (13 * (month + 1)) / 5 + K + (K / 4) + (J / 4) + (5 * J)) % 7;

    // 0 = Monday - 6 = Sunday
    dayOfWeek = (h + 5) % 7;

    return dayOfWeek;
}

void printDayOfTheWeekName(int dayOfWeek) {
  switch(dayOfWeek){
    case 0:
        printf("LU"); // Lunes
        break;
    case 1:
        printf("MA"); // Martes
        break;
    case 2:
        printf("MI"); // Mi�rcoles
        break;
    case 3:
        printf("JU"); // Jueves
        break;
    case 4:
        printf("VI"); // Viernes
        break;
    case 5:
        printf("SA"); // S�bado
        break;
    case 6:
        printf("DO"); // Domingo
        break;
  }
}

void getNameOfMonth(int month, NameOfMonth & result) {
  memset(result, 0, sizeof(NameOfMonth));

  switch(month){
    case 1:
        strcpy(result, "ENERO");
        break;
    case 2:
        strcpy(result, "FEBRERO");
        break;
    case 3:
        strcpy(result, "MARZO");
        break;
    case 4:
        strcpy(result, "ABRIL");
        break;
    case 5:
        strcpy(result, "MAYO");
        break;
    case 6:
        strcpy(result, "JUNIO");
        break;
    case 7:
        strcpy(result, "JULIO");
        break;
    case 8:
        strcpy(result, "AGOSTO");
        break;
    case 9:
        strcpy(result, "SEPTIEMBRE");
        break;
    case 10:
        strcpy(result, "OCTUBRE");
        break;
    case 11:
        strcpy(result, "NOVIEMBRE");
        break;
    case 12:
        strcpy(result, "DICIEMBRE");
        break;
  }
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getNumberOfDaysInMonth(int month, int year) {
  int result = 0;

  switch (month) {
        case 1: // Enero
        case 3: // Marzo
        case 5: // Mayo
        case 7: // Julio
        case 8: // Agosto
        case 10: // Octubre
        case 12: // Diciembre
            result = 31;
            break;
        case 4: // Abril
        case 6: // Junio
        case 9: // Septiembre
        case 11: // Noviembre
            result = 30;
            break;
        case 2: // Febrero
            if (isLeapYear(year)) {
                result = 29;
            } else {
                result = 28;
            }
            break;
  }

  return result;
}

int main() {
  int day = 1;
  int month = 0;
  int year = 0;

  int dayOfWeek, daysInMonth, dayTurn, rowsInCalendar;
  NameOfMonth nameOfMonth;


  // Ask for month
  //while (month < 1 || month > 12) {
    printf("�Mes (1 - 12)? ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
      printf("Tienes que seleccionar un numero del 1 - 12\n\n");
      return 0;
    }
  //}

  // Ask for year
  //while (year < 1601 || year > 2345) {
    printf("A�o (1601 - 3000)? ");
    scanf("%d", &year);

    if (year < 1601 || year > 3000) {
      printf("Tienes que seleccionar un numero del 1601 - 3000\n\n");
      return 0;
    }
  //}

  // Set variables
  dayOfWeek = zellerAlgoritm(day, month, year);
  daysInMonth = getNumberOfDaysInMonth(month, year);
  getNameOfMonth(month, nameOfMonth);
  dayTurn = 1;
  rowsInCalendar = 5;

  if(
    (dayOfWeek > 4 && daysInMonth > 30) ||
    (dayOfWeek > 5 && daysInMonth > 29)
  ) {
    rowsInCalendar = 6;
  }

  // Calendar with width 27
  printf("\n%-23s%d", nameOfMonth, year);


  // Print days of the week header
  printf("\n===========================\n");

  for(int i = 0; i < 7; i++) {
    printDayOfTheWeekName(i);

    // Separate week days
    if (i == 4) {
      printf(" | ");
      continue;
    }

    if (i != 6) {
      printf("  ");
    }
  }

  printf("\n===========================\n");


  // Print days of the calendar
  for(int row = 0; row < rowsInCalendar; row++) {
    // Days in week
    for(int i = 0; i < 7; i++) {

      // Print number or .
      if ((row == 0 && i < dayOfWeek) || dayTurn > daysInMonth) {
        printf("%2s", ".");
      }else {
        printf("%2d", dayTurn);
        dayTurn++;
      }

      // Separate week days
      if (i == 4) {
        printf(" | ");
        continue;
      }

      if (i != 6) {
        printf("  ");
      }
    }

    printf("\n");
  }

  printf("\n");

  return 1;
}
