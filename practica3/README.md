# Práctica 3 – Calendario

## Descripción

Se trata de realizar un programa que muestre por pantalla la hoja de calendario de cualquier mes y año comprendido entre los años 1601 y 3000.

El formato de la hoja de calendario deberá ajustarse exactamente al que se indica en la Figura 9, correspondiente al ejemplo del mes de Abril del año 2345.

</br>

## Reglas de funcionamiento

- La hoja del calendario debe quedar ajustada a la izquierda de la pantalla.
- Debe existir una línea en blanco antes de escribir la hoja del calendario.
- Se deben emplear exactamente los caracteres `=`, `|`, `.`, y espacios en blanco tal y como aparecen en el ejemplo.
- El programa no deberá imprimir nada para años fuera del rango [1601, 3000].
- El programa debe pedir el mes y el año solo una vez por ejecución.
- Nunca debe existir un bucle indefinido solicitando repetidamente el mes y el año.
- La cabecera del código fuente debe ser la misma que en la Práctica 2.

</br>

## Ejemplo de ejecución (Figura 9)
```
¿Mes (1..12)? 4
¿Año (1601..3000)? 2345

ABRIL            2345
=====================
LU MA MI JU VI SA DO
=====================
 .  .  .  .  1  2  3
 4  5  6  7  8  9 10
11 12 13 14 15 16 17
18 19 20 21 22 23 24
25 26 27 28 29 30  .
 .  .  .  .  .  .  .
```

</br>

## Observaciones

- Los días que no pertenecen al mes se representan con el carácter `.`.
- Cada día ocupa exactamente dos posiciones de ancho.
- Los separadores y alineaciones deben coincidir exactamente con el ejemplo.
- El cálculo del día de la semana debe ser correcto para cualquier fecha válida dentro del rango indicado.
