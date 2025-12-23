# Práctica 2 – Rombos

## Descripción

Esta práctica consiste en desarrollar un programa que imprima por pantalla **rombos concéntricos** dibujados utilizando los caracteres `@`, `.` y `o`.

El programa solicitará como dato de entrada la **longitud del lado del rombo más externo** (es decir, el número de caracteres que forman cada lado).

De fuera hacia dentro, los rombos se dibujan siguiendo este patrón cíclico:

1. `@`
2. `.`
3. `o`
4. `.`
5. `@`
6. `.`
7. `o`
8. …

Y así sucesivamente hasta llegar al centro.

</br>

## Reglas de funcionamiento

- El rombo debe quedar alineado a la izquierda de la pantalla.
- Tras la pregunta `¿Lado del Rombo?` debe imprimirse una línea en blanco antes de dibujar la figura.
- El programa solo debe pedir el lado una vez por ejecución.
- No debe existir ningún bucle indefinido solicitando el dato repetidamente.
- El tamaño máximo permitido es 20 caracteres de lado.
- No se debe imprimir ninguna salida si:
  - El tamaño es `0`
  - El tamaño es negativo
  - El tamaño es mayor que `20`
- La cabecera del código fuente es la misma que en la Práctica 1.

</br>

## Ejemplos de ejecución

**Ejemplo 1 – Lado del rombo: 1**
```
¿Lado del Rombo? 1

@
```
---

**Ejemplo 2 – Lado del rombo: 2**
```
¿Lado del Rombo? 2

 @
@.@
 @
```

---

**Ejemplo 3 – Lado del rombo: 3**
```
¿Lado del Rombo? 3

  @
 @.@
@.o.@
 @.@
  @
```
---

**Ejemplo 4 – Lado del rombo: 14**
```
¿Lado del Rombo? 4

   @
  @.@
 @.o.@
@.o.o.@
 @.o.@
  @.@
   @
```
---

**Ejemplo 5 – Lado del rombo: 5**
```
¿Lado del Rombo? 5

    @
   @.@
  @.o.@
 @.o.o.@
@.o.@.o.@
 @.o.o.@
  @.o.@
   @.@
    @
```
---

**Ejemplo 6 – Lado del rombo: 10**
```
¿Lado del Rombo? 10

         @
        @.@
       @.o.@
      @.o.o.@
     @.o.@.o.@
    @.o.@.@.o.@
   @.o.@.o.@.o.@
  @.o.@.o.o.@.o.@
 @.o.@.o.@.o.@.o.@
@.o.@.o.@.@.o.@.o.@
 @.o.@.o.@.o.@.o.@
  @.o.@.o.o.@.o.@
   @.o.@.o.@.o.@
    @.o.@.@.o.@
     @.o.@.o.@
      @.o.o.@
       @.o.@
        @.@
         @
```

</br>

## Observaciones

- El rombo siempre queda alineado a la izquierda.
- Tras la pregunta debe existir una línea en blanco.
- El rombo exterior se dibuja con `@`.
- Los rombos interiores alternan `.` y `o`.
- No se imprime nada para valores ≤ 0 o > 20.
- El programa solicita el lado solo una vez.
- La cabecera del código es la misma que en la Práctica 1.


