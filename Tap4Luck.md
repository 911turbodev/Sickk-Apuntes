## 1.  ¿Qué es el lenguaje de programación C y quién lo desarrolló?

* **Respuesta:** C es un lenguaje de programación de propósito general desarrollado por Dennis Ritchie en los laboratorios Bell a principios de los años 70.
## 2.  Menciona tres áreas donde el lenguaje C es comúnmente utilizado.

* **Respuesta:** Sistemas operativos, programación embebida y desarrollo de software de alto rendimiento.
## 3.  ¿Cuáles son tres características clave que destacan al lenguaje C?

* **Respuesta:** Eficiencia, cercanía al hardware y uso directo de memoria con punteros.
## 4.  Describe la estructura general de un programa en C.

* **Respuesta:** Un programa en C generalmente incluye: directivas del preprocesador (`#include`), declaraciones de funciones, la función principal `main()` y la definición de funciones auxiliares.
## 5.  ¿Qué son las directivas del preprocesador y cuál es su propósito?

* **Respuesta:** Son instrucciones para el compilador que se procesan antes de la compilación. Se usan para incluir librerías (`#include`), definir constantes (`#define`), etc.
## 6.  ¿Cuál es la función de main() en un programa en C?

* **Respuesta:** `main()` es la función principal y el punto de entrada del programa. Su ejecución inicia la ejecución del programa.
## 7.  ¿Por qué es importante declarar las variables antes de usarlas en C?

* **Respuesta:** Es obligatorio en C para especificar el tipo de dato que almacenará la variable y reservar el espacio de memoria necesario.
## 8.  ¿Qué tipos de datos primitivos existen en C? Nombra cuatro ejemplos.

* **Respuesta:** `int`, `float`, `char`, `double`, `bool`.
## 9.  ¿Qué es un proceso en el contexto de un sistema operativo?

* **Respuesta:** Un proceso es una instancia de un programa en ejecución.
## 10. ¿Qué recursos se le asignan a un proceso cuando se ejecuta?

* **Respuesta:** Espacio de memoria, tiempo de CPU y otros recursos del sistema operativo.
## 11. ¿Cuál es la función de la función sleep() en C y para qué se utiliza en los ejemplos del apunte?

* **Respuesta:** `sleep()` pausa la ejecución del programa por un número especificado de segundos. Se utiliza para simular la ejecución de un proceso y sus diferentes estados.
## 12. Explica los diferentes estados por los que puede pasar un proceso y da un ejemplo de cada uno.

* **Respuesta:**
    * **NUEVO:** El proceso está siendo creado.
    * **LISTO:** El proceso está esperando ser asignado al CPU.
    * **EJECUCIÓN:** El proceso se está ejecutando en el CPU.
    * **ESPERA:** El proceso está esperando algún evento (E/S, entrada del usuario).
    * **TERMINADO:** El proceso ha completado su ejecución.
## 13. ¿Qué es una variable en C?

* **Respuesta:** Una variable es un espacio en memoria reservado para almacenar un dato que puede cambiar durante la ejecución del programa.
## 14. ¿Cuáles son las reglas para nombrar variables en C?

* **Respuesta:** Deben ser descriptivas, no pueden comenzar con números ni contener símbolos especiales, y son sensibles a mayúsculas y minúsculas.
## 15. ¿Qué es una constante en C?

* **Respuesta:** Una constante es un valor que no cambia durante la ejecución del programa.
## 16. ¿Cuáles son las dos formas principales de declarar constantes en C y cuál es la diferencia entre ellas?

* **Respuesta:**
    * `#define`: No tiene tipo de dato, se define antes de `main()`.
    * `const`: Se declara como una variable con tipo de dato fijo.
## 17. ¿Cuáles son las ventajas de usar constantes en C?

* **Respuesta:** Mejoran la claridad del código, evitan cambios accidentales, facilitan el mantenimiento y dan significado a valores críticos.
## 18. ¿Cuál es la función de printf() en C?

* **Respuesta:** `printf()` se utiliza para imprimir datos en la salida estándar (consola).
## 19. ¿Qué son los especificadores de formato en printf() y para qué se utilizan?

* **Respuesta:** Los especificadores de formato indican el tipo de dato que se va a imprimir y cómo se va a formatear.
## 20. Da ejemplos de especificadores de formato y su uso (al menos 4).

* **Respuesta:**
    * `%d`: Para enteros.
    * `%f`: Para números reales.
    * `%c`: Para caracteres.
    * `%s`: Para cadenas de caracteres.
## 21. ¿Qué son las secuencias de escape o caracteres especiales en C y para qué sirven?

* **Respuesta:** Son combinaciones de caracteres que comienzan con `\` y se usan para controlar el formato de la salida (salto de línea, tabulación, etc.).
## 22. Da ejemplos de secuencias de escape comunes en C (al menos 3).

* **Respuesta:**
    * `\n`: Salto de línea.
    * `\t`: Tabulación.
    * `\\`: Imprimir una barra invertida.
    * `\"`: Imprimir comillas dobles.
## 23. ¿Qué son los tipos primitivos de datos en C?

* **Respuesta:** Son los tipos de datos más básicos y fundamentales del lenguaje.
## 24. Nombra los tipos primitivos de datos en C y describe brevemente cada uno.

* **Respuesta:**
    * `int`: Entero.
    * `float`: Número real de precisión simple.
    * `double`: Número real de doble precisión.
    * `char`: Carácter.
    * `bool`: Valor lógico (verdadero/falso).
## 25. ¿Cuál es la diferencia entre float y double en C?

* **Respuesta:** `double` tiene mayor precisión y ocupa más memoria que `float`.
## 26. ¿Qué operadores matemáticos están disponibles en C?

* **Respuesta:** `+`, `-`, `*`, `/`, `%`.
## 27. ¿Qué operadores relacionales están disponibles en C?

* **Respuesta:** `==`, `!=`, `>`, `<`, `>=`, `<=`.
## 28. ¿Qué operadores lógicos están disponibles en C?

* **Respuesta:** `&&` (AND), `||` (OR), `!` (NOT).

## ¿Qué es un algoritmo?

Secuencia finita y ordenada de instrucciones para resolver un problema.

## Definición de programa

Uno o más algoritmos escritos en un lenguaje que una computadora puede ejecutar.

## Componentes de un sistema informático

Hardware, Software y Humano.

## Diferencia entre Software de base y de aplicación

Software de base: sistemas operativos (Windows, Linux). Software de aplicación: programas de uso diario (Word, Excel).

## ¿Qué es un IDE?

Entorno de Desarrollo Integrado, herramienta para programar (ej: Visual Studio Code).

## Sección 2: Tipos de Datos y Variables

## ¿Qué es una variable?

Espacio en memoria para almacenar un dato, con nombre y tipo específico.

## Tipos de datos primitivos en C

int, float, double, char, bool.

## Diferencia entre float y double

float: precisión simple (4 bytes). double: mayor precisión (8 bytes).

## ¿Qué almacena un char?

Un carácter ASCII (ej: 'A', '1').

## ¿Para qué sirve el tipo bool?

Almacena valores lógicos: true (1) o false (0).

## Sección 3: Procesos en C

## ¿Qué es un proceso en informática?

Instancia de un programa en ejecución, con su propio espacio de memoria y recursos.

## Estados de un proceso

Nuevo, Listo, Ejecución, Espera, Terminado.

## ¿Cómo simular estados de un proceso en C?

Con sleep() para pausas y scanf() para esperar entrada del usuario.

## Sección 4: Estructura de un Programa en C

Partes básicas de un programa en C
Directivas (#include), prototipos de funciones, main(), funciones auxiliares.

## Función obligatoria en C

main(): punto de entrada del programa.

## ¿Qué hace #include <stdio.h>?

Incluye la librería estándar para operaciones de entrada/salida (ej: printf, scanf).

## Sección 5: Variables vs. Constantes

## Diferencia entre variable y constante

Variable: valor modificable. Constante: valor fijo (se declara con const o #define).

## Ejemplo de constante con #define

#define PI 3.1416
Ventajas de usar constantes
Mejoran legibilidad, evitan errores y facilitan mantenimiento.

## Sección 6: Operaciones de Salida

## Función para imprimir en pantalla en C

printf().

## Especificadores de formato comunes

%d (entero), %f (float), %c (char), %s (cadena).

## ¿Cómo imprimir un salto de línea?

Usar \n dentro de printf().

## Ejemplo de printf con formato

printf("El valor es: %.2f", 3.1416); // Imprime con 2 decimales.

## Sección 7: Estructuras de Control

## Diferencia entre if y switch

if: evalúa condiciones booleanas. switch: compara valores específicos.

## Sintaxis de un for

for(inicialización; condición; actualización) { ... }

Error común en bucles while

Bucle infinito por no actualizar la variable de condición.

## ¿Cuándo usar do-while en lugar de while?

Cuando el bloque debe ejecutarse al menos una vez.

## Sección 8: Ejemplos Prácticos

## ¿Qué hace este código?

int i = 1;
while(i <= 5) { printf("%d", i); i++; }

Imprime números del 1 al 5.

## Corregir este código:

float x;

printf("Ingrese un número: ");

scanf("%f", x); // Error: falta &

Corrección: scanf("%f", &x);.

## Programa que verifique si un número es positivo

if(num > 0) printf("Positivo");

else printf("Negativo o cero");

Sección 9: Conceptos Avanzados

## ¿Qué es un puntero en C?

Variable que almacena direcciones de memoria.

## ¿Cómo se declara una función en C?

tipo nombreFuncion(parámetros) { ... }

## Ejemplo de función que suma dos números

int suma(int a, int b) { return a + b; }

## Sección 10: Errores Comunes

## ¿Por qué este for es infinito?

for(int i = 0; i < 5;) { printf("%d", i); }

Falta actualizar i (ej: i++).

## Error en este do-while

do { printf("Hola"); } while(1 == 1); // Siempre verdadero

Condición siempre verdadera → bucle infinito.

1.  ¿Cuál es la diferencia entre una variable y una constante en C? Da un ejemplo de cómo se declara cada una.

* **Respuesta:**
    * **Variable:** Es un espacio en memoria que almacena un dato que puede cambiar durante la ejecución del programa. Se declara especificando su tipo de dato.
    * **Constante:** Es un valor que no cambia durante la ejecución del programa. Se define desde el inicio y su valor permanece fijo.
* **Ejemplos de declaración:**
    * **Variable:** `int edad = 20;`
    * **Constante:** `const int diasSemana = 7;`  o  `#define PI 3.1416`
    * 2.  Función main() en un programa C

* **Respuesta:**
    * `main()` es la función principal y el punto de entrada de todo programa en C.
    * La ejecución del programa siempre comienza con la función `main()`.
    * Es obligatoria en todo programa C.
3.  Diferencia entre while y do-while

* **Respuesta:**
    * **`while`:**
        * Evalúa la condición *antes* de ejecutar el bloque de código.
        * Si la condición es falsa desde el principio, el bloque de código puede no ejecutarse nunca.
    * **`do-while`:**
        * Ejecuta el bloque de código *al menos una vez* y luego evalúa la condición.
        * El bloque de código se ejecuta al menos una vez, incluso si la condición es falsa desde el principio.
