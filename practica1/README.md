# Práctica 1 – Impresión de datos del alumno

## Descripción

La primera práctica consiste en imprimir en pantalla los datos del alumno incluidos en la cabecera del código fuente.  
Cada uno de los campos debe mostrarse en una línea distinta, respetando el orden definido en la cabecera.

Si la práctica incluye una cabecera como la mostrada en la **Figura 1**, el resultado de su ejecución deberá ser el indicado en la **Figura 2**.

</br>

## Cabecera obligatoria del código fuente

El código fuente de **todas las prácticas** debe incluir una cabecera con los datos personales del alumno, siguiendo estrictamente el formato indicado a continuación.

### Formato de la cabecera

- La cabecera es un **comentario en C**, delimitado por `/*` y `*/`.
- Ocupa **7 líneas**.
- Incluye **5 campos obligatorios**:
  - NOMBRE
  - PRIMER APELLIDO
  - SEGUNDO APELLIDO
  - DNI
  - EMAIL
- El valor de cada campo se delimita mediante el símbolo `#`.

**Ejemplo de cabecera válida (Figura 1)**

```c
/**************************************
* NOMBRE: #Juan Antonio#
* PRIMER APELLIDO: #Fernandez#
* SEGUNDO APELLIDO: #Gonzalez#
* DNI: #99999999#
* EMAIL: #jantonio.gonzalez@mimail.com#
***************************************/
```

## Salida esperada del programa

El programa debe imprimir por pantalla el valor de cada campo de la cabecera, **uno por línea**, sin texto adicional.

**Ejemplo de salida (Figura 2)**

```bash
---------------------------------------------------------------
Juan Antonio
Fernandez
Gonzalez
9999999F
jantonio.gonzalez@mimail.com
---------------------------------------------------------------
```

</br>

## Observaciones

- El orden de impresión debe coincidir con el orden de los campos en la cabecera.
- No deben mostrarse etiquetas ni símbolos adicionales en la salida.
- Esta estructura de cabecera será reutilizada en las prácticas 1, 2 y 3.
