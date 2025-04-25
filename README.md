# 🚀 Introducción a C

El lenguaje **C** es un lenguaje de programación de propósito general, desarrollado a principios de los años 70 por **Dennis Ritchie** en los laboratorios **Bell**.

Desde entonces, se ha consolidado como uno de los lenguajes más utilizados y enseñados, especialmente en el ámbito académico y en áreas donde el control de bajo nivel es esencial, como:

- 🖥️ Sistemas operativos  
- ⚙️ Programación embebida  
- 🚀 Desarrollo de software de alto rendimiento

🔧 **C se destaca por:**
- Su **eficiencia**
- Su **cercanía al hardware**
- El uso directo de **memoria con punteros**

A pesar de su simplicidad sintáctica, es un lenguaje **poderoso** que exige al programador una comprensión clara de cómo funciona la máquina.

---

## 🧱 Estructura de un Programa en C

Todo programa en C sigue una estructura general que organiza el código de forma clara y funcional.

### 📄 Ejemplo básico de estructura:

```c
// 1️⃣ Directivas del preprocesador
#include <stdio.h>   // Librería estándar para entrada/salida
#include <math.h>    // Librería para funciones matemáticas

// 2️⃣ Declaración de funciones (prototipos)
float calcularAreaCirculo(float radio);

// 3️⃣ Función principal (punto de entrada del programa)
int main()
{
    // 4️⃣ Definición de variables
    float radio, area;

    // 5️⃣ Lógica del programa
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    // 6️⃣ Llamada a una función auxiliar
    area = calcularAreaCirculo(radio);
    printf("El área del círculo con radio %.2f es: %.2f\n", radio, area);

    return 0;   // 7️⃣ Fin del programa (código de salida)
}

// 8️⃣ Definición de funciones auxiliares
float calcularAreaCirculo(float radio)
{
    return M_PI * radio * radio;   // Fórmula del área de un círculo
}

```
📌 Puntos clave sobre la estructura de un programa en C

✅ C tiene una estructura ordenada, compuesta por:
#include (directivas del preprocesador)
Declaraciones de funciones
Funciones auxiliares
La función principal main()

✅ Las variables deben declararse antes de usarse y pueden ser de distintos tipos, como:
int
float
char

✅ El código puede organizarse en funciones, lo que:
Mejora la legibilidad
Facilita la reutilización
Simplifica el mantenimiento
✅ La función main() es obligatoria, ya que representa el punto de inicio del programa.

# ⚙️ **Procesos**

Un **proceso** es una **instancia de un programa en ejecución**. Cuando ejecutas un programa, el **sistema operativo** crea un proceso para ese programa. Este proceso tiene:

- 📦 **Su propio espacio de memoria**
- 🛠️ **Recursos** que le asigna el sistema operativo
- ⏱️ **Tiempo de CPU** para que pueda realizar sus tareas

### 🔄 ¿Cómo lo gestiona el sistema operativo?

El sistema operativo se encarga de gestionar los **procesos**, asignándoles recursos de manera eficiente para que puedan **ejecutarse sin conflictos** y de forma **organizada**. Esto incluye:

- Asignar **memoria** para que el proceso funcione
- Controlar el **tiempo de CPU** para evitar que un proceso monopolice todos los recursos
- Monitorear el **estado del proceso** para saber si está activo, suspendido, o terminado

---

🔑 **Nota:** Los procesos son fundamentales para que las computadoras puedan ejecutar múltiples programas de forma simultánea y eficiente, sin que se interfieran entre sí. 👾
# 🖥️ Simulación de un Proceso en C

Este programa simula un **proceso en ejecución** utilizando la función `sleep()` para crear una pausa entre los mensajes y representar el paso del tiempo.

## Código:
```c
#include <stdio.h>
#include <unistd.h>  // Para usar sleep()

// Función que representa un proceso en ejecución
void procesoEjemplo()
{
    printf("🔵 Proceso iniciado...\n");  // Inicia el proceso
    sleep(2); // Simula que el proceso está haciendo algo durante 2 segundos

    printf("🟢 Proceso ejecutándose...\n");  // El proceso sigue ejecutándose
    sleep(2);

    printf("✅ Proceso finalizado.\n");  // Finaliza el proceso
}

int main()
{
    printf("📳 Iniciando programa...\n");  // Mensaje inicial

    // Llamamos a la función que simula un proceso
    procesoEjemplo();

    printf("✨ Programa terminado.\n");  // Mensaje final
    return 0;
}
```
🧠 Explicación:
🔵 Proceso iniciado: Cuando el proceso comienza.

🟢 Proceso ejecutándose: Simulación del proceso haciendo alguna tarea.

✅ Proceso finalizado: Cuando el proceso termina.

sleep(2): Hace una pausa de 2 segundos para simular que el proceso está trabajando.

📌 ¿Qué hace este código?
Este programa imprime mensajes con emojis representando diferentes etapas de un proceso. Luego, hace una pausa usando sleep() para simular la ejecución del proceso durante 2 segundos en cada fase.



# 🔄 **Acciones y Estados de un Proceso en C**

Este programa simula un proceso en diferentes estados utilizando la función `sleep()` para representar el paso del tiempo y `scanf()` para esperar la interacción del usuario.

## Código:

```c
#include <stdio.h>
#include <unistd.h>  // Para sleep()

// Función que simula los estados de un proceso
void ejecutarProceso()
{
    printf("🔵 Estado: NUEVO - Creando proceso...\n");  // El proceso se crea
    sleep(1);

    printf("🟡 Estado: LISTO - Esperando asignación de CPU...\n");  // Esperando ser ejecutado
    sleep(1);

    printf("🟢 Estado: EJECUCIÓN - El proceso está corriendo...\n");  // El proceso está en ejecución
    sleep(2);  // Simula el tiempo de ejecución

    printf("🟠 Estado: ESPERA - El proceso está esperando entrada del usuario...\n");  // El proceso se detiene esperando interacción
    char input;
    printf("Presiona cualquier tecla y Enter para continuar: ");
    scanf("%c", &input); // Espera la entrada del usuario

    printf("✅ Estado: TERMINADO - El proceso ha finalizado.\n");  // El proceso ha terminado
}

int main()
{
    printf("📳 Iniciando el programa...\n");  // Inicia el programa

    ejecutarProceso();  // Llama a la función para simular los estados del proceso

    printf("✨ Programa finalizado.\n");  // Mensaje final
    return 0;
}
```
📋 Explicación de los Estados del Proceso:
🔵 NUEVO: El proceso comienza a ser creado.

🟡 LISTO: El proceso está esperando ser asignado para su ejecución por el CPU.

🟢 EJECUCIÓN: El proceso está corriendo. En esta fase, el proceso realiza su tarea (simulada con sleep(2)).

🟠 ESPERA: El proceso se pausa esperando la entrada del usuario mediante scanf().

✅ TERMINADO: El proceso ha finalizado exitosamente.


# 🏷️ **Variables en C**

En programación, una **variable** es un espacio en memoria reservado para almacenar un dato que puede cambiar a lo largo de la ejecución del programa. En el lenguaje **C**, antes de usar una variable, es **obligatorio** declararla, indicando su tipo de dato.

## 📥 ¿Para qué sirven las variables?

Las variables permiten al programa almacenar información temporal, como:

- 🔢 Números
- 🔠 Caracteres
- 🧮 Resultados de operaciones

Y luego trabajar con esos datos en diferentes momentos del programa.

---

## 💻 **Ejemplo de declaración y uso de variables en C:**

```c
int edad = 20;      // Variable entera
float altura = 1.75; // Variable con decimales
char letra = 'A';   // Variable de tipo carácter

printf("Edad: %d\n", edad); // Imprime la edad

```
📝 Reglas básicas sobre variables en C:
✔ Declaración previa: Las variables deben declararse antes de ser utilizadas.

✔ Nombre descriptivo: El nombre debe ser descriptivo y no puede comenzar con números ni contener símbolos especiales.

✔ Sensibilidad a mayúsculas: Las variables son sensibles a mayúsculas y minúsculas. Por ejemplo:

edad y Edad son variables diferentes.

✔ Valores cambiantes: Las variables pueden cambiar de valor durante la ejecución del programa.

💡 Consejo:
Al nombrar variables, es importante usar nombres claros que representen el propósito de esa variable en el programa. Ejemplo: usa edad para almacenar la edad, en vez de algo vago como x o num1.


# 🔒 **Constantes en C**

Una **constante** en C es un valor que **no cambia** durante la ejecución del programa. A diferencia de las **variables**, las constantes deben ser definidas desde el inicio y su valor permanece fijo a lo largo de la ejecución.

### 🚀 ¿Por qué usar constantes?

- Mejora la **claridad** del código.
- Evita **errores** y facilita el mantenimiento.
- Permite dar **nombres descriptivos** a valores que no deben modificarse.

---

## 📝 **Declaración de Constantes en C**

### 1. Usando `#define`

```c
#define PI 3.1416  // Definición de constante PI
```
No tiene tipo de dato asignado directamente.

Se define antes del main() o en la parte superior del código.

Es útil para valores que no cambian y se usan en varias partes del programa.

2. Usando const
const int diasSemana = 7;  // Constante de tipo entero

Se declara como una variable, pero su valor es fijo.
Se debe especificar el tipo de dato.
No puede ser modificada durante la ejecución.

📊 Ventajas de las Constantes:
✔ Evitan cambios accidentales: Ayudan a prevenir la modificación de valores críticos durante la ejecución.
✔ Facilitan el mantenimiento: Si un valor constante cambia, solo se modifica en un lugar, evitando errores en el resto del código.
✔ Mejoran la legibilidad: Los nombres descriptivos de las constantes hacen que el código sea más claro y fácil de entender.
✔ Significado en los valores: Ayudan a darle un significado a valores que son críticos para el programa (como PI, MAX_INT).

## 🆚 **Diferencias entre Variables y Constantes**

| Característica       | **Variables**                                   | **Constantes**                                 |
|----------------------|-------------------------------------------------|------------------------------------------------|
| **Valor**            | Puede cambiar durante la ejecución              | Permanece fijo una vez definido                |
| **Declaración**      | Se declara con un tipo de dato                  | Se declara con `const` o `#define`             |
| **Modificable**      | Sí                                              | No                                             |
| **Ejemplo**          | `int edad = 20;`                                | `const int dias = 7;` o `#define PI 3.14`      |
| **Uso común**        | Almacenar datos que varían                      | Almacenar valores fijos o simbólicos           |
| **Tipo de dato**     | Requiere tipo de dato                           | `const` lo requiere, `#define` no              |

# 🚀 **Operaciones Básicas de Salida en C**

## 📝 **Introducción**

En todo programa es fundamental poder mostrar información al usuario, ya sea para presentar resultados, mensajes o el estado del sistema. En el lenguaje C, las operaciones de salida permiten enviar datos desde el programa hacia la pantalla (salida estándar).

La función principal utilizada para esto es `printf()`, que forma parte de la biblioteca estándar `stdio.h`.

```c
#include <stdio.h>

int main() {
    printf("Hola, mundo!\n");
    return 0;
}
```
## 🎯 Especificadores de Formato en `printf()`

Cuando se quiere mostrar el valor de una variable con la función `printf()`, es necesario utilizar **especificadores de formato**. Estos indicativos le señalan al programa qué **tipo de dato** se va a imprimir y la **manera** en que debe mostrarse en la salida.

➡️ Estos especificadores siempre se colocan dentro de **comillas dobles** (`" "`) y van precedidos por el símbolo de porcentaje (`%`).

| Especificador | Tipo de Dato             | Ejemplo de uso                                  | Resultado (si `variable = 10`) |
|---------------|--------------------------|-------------------------------------------------|---------------------------------|
| `%d`          | Entero decimal (`int`)   | `printf("Valor: %d", variable);`              | `Valor: 10`                     |
| `%f`          | Número real (`float`)    | `printf("Altura: %f", altura);`               | `Altura: 1.750000`              |
| `%.2f`        | Real con 2 decimales     | `printf("Altura: %.2f", altura);`             | `Altura: 1.75`                  |
| `%c`          | Carácter (`char`)        | `printf("Letra: %c", letra);`                | `Letra: A`                      |
| `%s`          | Cadena de caracteres     | `printf("Nombre: %s", nombre);`              | `Nombre: Juan`                  |
| `%u`          | Entero sin signo (`unsigned int`) | `printf("%u", numero);`                       | `10` (si el valor es positivo)  |
| `%x`          | Entero en hexadecimal    | `printf("%x", numero);`                       | `a` (si el valor es 10)         |
| `%%`          | Imprime el símbolo `%`   | `printf("Porcentaje: 100%%");`                 | `Porcentaje: 100%`              |

## ➡️ Salto de Línea y Caracteres Especiales en C

En el lenguaje **C**, al utilizar la función `printf()` para mostrar texto en la consola, tienes la posibilidad de incluir **caracteres especiales**, también conocidos como **secuencias de escape**. Estas secuencias te brindan control sobre la manera en que el texto se presenta en la pantalla 🖥️.

🔑 Todas estas secuencias de escape comienzan con una **barra invertida** (`\`) y modifican el comportamiento del texto que se encuentra dentro de las comillas dobles (`" "`).

| Secuencia | Significado              | Ejemplo                       | Resultado en pantalla |
|-----------|--------------------------|-------------------------------|-----------------------|
| `\n`      | Salto de línea           | `printf("Hola\nMundo");`      | ```                  |
|           |                          |                               | Hola                  |
|           |                          |                               |                       |
|           |                          |                               | Mundo                 |
| `\t`      | Tabulación horizontal    | `printf("Hola\tMundo");`      | `Hola    Mundo`       |
| `\\`      | Barra invertida (`\`)    | `printf("C:\\\\archivos");`   | `C:\archivos`         |
| `\"`      | Comillas dobles (`"`)    | `printf("\"Hola\"");`         | `"Hola"`              |
| `\'`      | Comilla simple (`'`)     | `printf("\'A\'");`           | `'A'`                 |
| `\a`      | Sonido (beep) del sistema | `printf("\a");`              | 🔔 (si está activo)   |






## 📚 UNIDAD 2: Estructura de Datos

### 📌 Introducción

## 🧱 Tipos Primitivos de Datos

Los **tipos primitivos de datos** son los bloques de construcción más fundamentales con los que trabaja el lenguaje de programación C. Nos permiten almacenar **valores simples** como números 🔢, caracteres 🔡 o valores lógicos (verdadero/falso) ✅/❌.

Cada tipo de dato tiene un **dominio** específico (el rango de valores que puede representar) y una **ocupación de memoria** determinada 💾.

### Основные tipos primitivos en C

| Tipo      | Descripción                                     | Tamaño (aprox.) | Rango de valores                                    | Ejemplo             |
|-----------|-------------------------------------------------|-----------------|-----------------------------------------------------|---------------------|
| `int`     | Número entero                                   | 4 bytes         | -2,147,483,648 a 2,147,483,647                     | `int edad = 25;`    |
| `float`   | Número real con decimales (precisión simple)    | 4 bytes         | ±3.4e−38 a ±3.4e+38 (6-7 dígitos)                  | `float pi = 3.14;`  |
| `double`  | Número real con más precisión                  | 8 bytes         | ±1.7e−308 a ±1.7e+308 (15-16 dígitos)               | `double x = 3.141592;` |
| `char`    | Carácter ASCII                                  | 1 byte          | 0 a 255 (o -128 a 127)                              | `char letra = 'A';` |
| `bool`\* | Valor lógico (verdadero/falso)                  | 1 byte          | `0` (`false`) o `1` (`true`)                      | `bool activo = true;` |

> ℹ️ El tipo `bool` no forma parte del estándar original de C, pero se puede utilizar incluyendo la librería `<stdbool.h>`.

### 📏 Rango de Valores Permitidos

| Tipo                 | Tamaño (aprox.) | Rango de valores                       |
|----------------------|-----------------|----------------------------------------|
| `char` (con signo)   | 1 byte          | -128 a 127                             |
| `unsigned char`      | 1 byte          | 0 a 255                              |
| `int`                | 4 bytes         | -2,147,483,648 a 2,147,483,647         |
| `unsigned int`       | 4 bytes         | 0 a 4,294,967,295                      |
| `short int`          | 2 bytes         | -32,768 a 32,767                       |
| `unsigned short int` | 2 bytes         | 0 a 65,535                             |
| `long int`           | 4 u 8 bytes     | Depende del sistema (Ej: 64 bits mayor) |
| `float`              | 4 bytes         | ±3.4×10⁻³⁸ a ±3.4×10³⁸ (6-7 cifras dec.) |
| `double`             | 8 bytes         | ±1.7×10⁻³⁰⁸ a ±1.7×10³⁰⁸ (15-16 cifras dec.)|
| `long double`        | 10-16 bytes     | Mucho mayor precisión que `double`       |
| `bool`               | 1 byte          | `0` (`false`) o `1` (`true`)           |

### ➕ Operaciones Matemáticas

| Operador | Descripción         | Ejemplo   |
|----------|---------------------|-----------|
| `+`      | Suma                | `a + b`   |
| `-`      | Resta               | `a - b`   |
| `*`      | Multiplicación      | `a * b`   |
| `/`      | División            | `a / b`   |
| `%`      | Módulo (resto)      | `a % b`   |

### ⚖️ Operaciones Relacionales

| Operador | Descripción          |
|----------|----------------------|
| `==`     | Igualdad             |
| `!=`     | Diferente            |
| `>`      | Mayor que            |
| `<`      | Menor que            |
| `>=`     | Mayor o igual que    |
| `<=`     | Menor o igual que    |

### 🚦 Operaciones Lógicas

| Operador | Descripción       |
|----------|-------------------|
| `&&`     | AND (Y lógico)    |
| `!`      | NOT (Negación)    |
| `||`     | OR (O lógico)     |

```c
#include <stdio.h>
#include <stdbool.h> // Para usar el tipo bool

int main() {
  // Tipos Primitivos de Datos 🧱
  int edad = 25;
  float precio = 10.5;
  double pi = 3.141592;
  char letra = 'A';
  bool activo = true;

  printf("Edad: %d\n", edad);
  printf("Precio: %.2f\n", precio);
  printf("Pi: %lf\n", pi);
  printf("Letra: %c\n", letra);
  printf("Activo: %d (0=false, 1=true)\n", activo); // bool se imprime como entero

  // Operaciones Matemáticas ➕➖✖️➗
  int a = 10, b = 3;
  int suma = a + b;
  int resta = a - b;
  int multiplicacion = a * b;
  float division = (float)a / b;
  int modulo = a % b;

  printf("Suma: %d\n", suma);
  printf("Resta: %d\n", resta);
  printf("Multiplicación: %d\n", multiplicacion);
  printf("División: %.2f\n", division);
  printf("Módulo: %d\n", modulo);

  // Operaciones Relacionales ⚖️
  int x = 5, y = 10;
  bool igual = (x == y);
  bool diferente = (x != y);
  bool mayorQue = (x > y);
  bool menorQue = (x < y);
  bool mayorIgualQue = (x >= y);
  bool menorIgualQue = (x <= y);

  printf("Igual: %d\n", igual);
  printf("Diferente: %d\n", diferente);
  printf("Mayor que: %d\n", mayorQue);
  printf("Menor que: %d\n", menorQue);
  printf("Mayor o igual que: %d\n", mayorIgualQue);
  printf("Menor o igual que: %d\n", menorIgualQue);

  // Operaciones Lógicas 🚦
  bool p = true, q = false;
  bool andLogico = p && q;
  bool orLogico = p || q;
  bool notP = !p;
  bool notQ = !q;

  printf("AND: %d\n", andLogico);
  printf("OR: %d\n", orLogico);
  printf("NOT p: %d\n", notP);
  printf("NOT q: %d\n", notQ);

  return 0;
}
```
# 📚 **UNIDAD 3** - Sentencias de Control e Iteración

En esta unidad, exploraremos las **sentencias de control** y de **iteración** en C, las cuales son fundamentales para dirigir el flujo de ejecución de un programa.

---

## 🤖 **¿Por qué son importantes las Sentencias de Control?**

Imagina un programa que solo puede ejecutar instrucciones en una secuencia fija. Sería como un robot que solo sabe seguir una lista de pasos, sin importar el contexto. Las sentencias de control cambian esto, permitiendo que el programa **"piense"** y actúe de manera diferente según las circunstancias.

### Ejemplo:
Considera un programa que calcula si un estudiante aprueba o no un examen. Usaríamos una sentencia `if` para verificar si la calificación es mayor o igual al mínimo aprobatorio y mostrar el mensaje correspondiente.

---

## 💡 **Ventajas de las Sentencias de Control**

- **Flexibilidad**: Los programas se adaptan a diferentes entradas y situaciones.
  
- **Inteligencia**: Los programas pueden tomar decisiones lógicas.
  
- **Eficiencia**: Se evitan cálculos innecesarios al ejecutar solo el código relevante.
  

## 🛣️ **Estructuras de Decisión**

Las **estructuras de decisión** permiten que un programa tome diferentes caminos dependiendo de si se cumplen o no ciertas condiciones. Esto añade **flexibilidad** y **lógica** a nuestros programas, permitiéndoles responder de manera dinámica a diferentes entradas y situaciones.

## 📝 **Sentencia if**

La sentencia `if` es una de las estructuras de control fundamentales en C que permite a un programa tomar decisiones. Su propósito principal es ejecutar un bloque específico de código solo si una condición dada se evalúa como verdadera. 

En esencia, le dice al programa: _"Si esta condición es cierta, entonces haz esto"_.

---

### 🖋️ **Sintaxis Básica**

```c
if (condición) {
  // Código que se ejecuta si la condición es verdadera
}
```
condición: Es una expresión que se evalúa como verdadera (cualquier valor diferente de cero) o falsa (cero).

{ }: Las llaves definen el bloque de código que se ejecutará si la condición es verdadera. Si solo hay una sentencia a ejecutar, las llaves pueden omitirse, pero se recomienda usarlas para mayor claridad.

👨‍💻 Ejemplo de Uso

#include <stdio.h>

int main() {
  int edad;

  printf("Ingrese su edad: ");
  scanf("%d", &edad);

  // La sentencia 'if' verifica si la edad es mayor o igual a 18
  if (edad >= 18) {
    // Si la condición es verdadera, se ejecuta este bloque de código
    printf("Usted es mayor de edad. Puede votar.\n");
  }

  printf("Fin del programa.\n");

  return 0;
}

🧐 Explicación del Ejemplo:

El programa solicita al usuario que ingrese su edad.

La sentencia if (edad >= 18) evalúa si el valor ingresado en la variable edad es mayor o igual a 18.

Si la condición es verdadera (es decir, si el usuario ingresa 18 o más), el mensaje "Usted es mayor de edad. Puede votar." se imprime en la consola.

Si la condición es falsa (el usuario ingresa un valor menor que 18), el bloque de código dentro del if se omite y el programa continúa con la siguiente instrucción después del if.



## 📝 **Sentencia if-else**

La sentencia `if-else` es una extensión de la sentencia `if` que proporciona una forma de ejecutar un bloque de código si una condición es verdadera y un bloque de código alternativo si la condición es falsa. Esto permite a los programas manejar dos posibles caminos de ejecución, asegurando que siempre se ejecute alguna acción.

### 🖋️ **Sintaxis Básica**
condición: Es una expresión que se evalúa como verdadera (cualquier valor diferente de cero) o falsa (cero). 

{ }: Las llaves definen los bloques de código para cada caso (verdadero o falso). Si solo hay una sentencia en cada bloque, las llaves pueden omitirse, pero se recomienda su uso.

else: La palabra clave else introduce el bloque de código que se ejecuta cuando la condición del if es falsa.

```c
if (condición) {
  // Código a ejecutar si la condición es verdadera
} else {
  // Código a ejecutar si la condición es falsa
}
```
## 📝 **Ejemplo de Sentencia if-else en C**

El siguiente código es un ejemplo de cómo utilizar la sentencia `if-else` para verificar si un número es positivo o negativo:

### 🖋️ **Código**

```c
#include <stdio.h>

int main() {
  int numero;

  printf("Ingrese un número: ");
  scanf("%d", &numero);

  // La sentencia 'if-else' verifica si el número es positivo o negativo
  if (numero > 0) {
    // Si la condición es verdadera (número mayor que 0)
    printf("El número es positivo.\n");
  } else {
    // Si la condición es falsa (número no es mayor que 0)
    printf("El número es negativo o cero.\n");
  }

  printf("Fin del programa.\n");

  return 0;
}
```
## 🔍 Explicación del Ejemplo

El programa solicita al usuario que ingrese un número.

La sentencia if (numero > 0) evalúa si el valor ingresado en la variable numero es mayor que 0.

Si la condición es verdadera (el usuario ingresa un número positivo), el mensaje "El número es positivo." se imprime en la consola.

Si la condición es falsa (el usuario ingresa un número negativo o cero), el bloque de código dentro del else se ejecuta, y el mensaje "El número es negativo o cero." se imprime.

Finalmente, "Fin del programa." se imprime en la consola.

## 📝 **Sentencias if-else Anidadas en C**

Las sentencias `if-else` anidadas son una estructura de control que permite tomar decisiones más complejas al incluir una sentencia `if` o `if-else` dentro de otra sentencia `if` o `else`. Esto crea una jerarquía de condiciones donde se evalúan múltiples posibilidades en un orden específico.

### 🧐 **¿Cuándo se usan?**

Se utilizan cuando se necesita evaluar múltiples condiciones y las acciones a realizar dependen de una combinación de estas condiciones. Es decir, no basta con una simple bifurcación (verdadero/falso), sino que se requieren más niveles de decisión.

### 🖋️ **Sintaxis Básica**

```c
if (condición1) {
  // Código a ejecutar si condición1 es verdadera
  if (condición2) {
    // Código a ejecutar si condición1 y condición2 son verdaderas
  } else {
    // Código a ejecutar si condición1 es verdadera pero condición2 es falsa
  }
} else {
  // Código a ejecutar si condición1 es falsa
}

#include <stdio.h>

int main() {
  int numero;

  printf("Ingrese un número: ");
  scanf("%d", &numero);

  // Sentencias if-else anidadas para clasificar el número
  if (numero > 0) {
    // Si el número es positivo
    printf("El número es positivo.\n");
    if (numero % 2 == 0) {
      printf("Y además es par.\n");
    } else {
      printf("Y además es impar.\n");
    }
  } else if (numero < 0) {
    // Si el número es negativo
    printf("El número es negativo.\n");
  } else {
    // Si el número no es mayor ni menor que 0, es cero
    printf("El número es cero.\n");
  }

  return 0;
}
```
🔍 Explicación del Ejemplo
El programa solicita al usuario que ingrese un número.

La primera sentencia if verifica si el número es mayor que 0.

Si es verdadero, se imprime "El número es positivo." y luego se anida otra sentencia if-else para verificar si el número es par o impar.

Si la primera condición es falsa, se ejecuta el bloque else if, que verifica si el número es menor que 0.

Si esta condición es verdadera, se imprime "El número es negativo."

Si la condición también es falsa (es decir, el número no es mayor ni menor que 0), se ejecuta el bloque else final, que imprime "El número es cero."

🔑 Resumen
Las sentencias if-else anidadas permiten crear una estructura de decisión en árbol, donde cada rama representa una condición diferente. Esto es útil para manejar escenarios complejos con múltiples posibilidades.

## 📝 **Sentencia switch en C**

La sentencia `switch` en C proporciona una forma eficiente de seleccionar uno de varios bloques de código para ejecutar, basándose en el valor de una única variable. Es una alternativa más clara y concisa a usar múltiples sentencias `if-else` anidadas, especialmente cuando se tienen muchas opciones posibles.

### 🖋️ **Sintaxis Básica**

```c
// Some code
switch (variable) {
  case valor1:
    // Código a ejecutar si variable es igual a valor1
    break;
  case valor2:
    // Código a ejecutar si variable es igual a valor2
    break;
  // ... más casos
  default:
    // Código a ejecutar si variable no coincide con ningún caso
}

🧑‍💻 Ejemplo de Código

#include <stdio.h>

int main() {
  int opcion;

  printf("Seleccione una opción:\n");
  printf("1. Saludar\n");
  printf("2. Despedir\n");
  printf("3. Dar la hora\n");
  printf("Ingrese su opción: ");
  scanf("%d", &opcion);

  switch (opcion) {
    case 1:
      printf("¡Hola! ¿Cómo estás?\n");
      break;
    case 2:
      printf("¡Adiós! ¡Que tengas un buen día!\n");
      break;
    case 3:
      printf("Son las 10:00 AM.\n");
      break;
    default:
      printf("Opción inválida.\n");
  }

  return 0;
}
```
## 🔍 Explicación del Ejemplo

El programa muestra un menú de opciones al usuario.

El usuario ingresa un número que se almacena en la variable opcion.

La sentencia switch (opcion) comienza la evaluación.

Si opcion es 1, se ejecuta el código del case 1, que imprime un saludo.

Si opcion es 2, se ejecuta el código del case 2, que imprime una despedida.

Si opcion es 3, se ejecuta el código del case 3, que imprime la hora (en este caso, una hora fija).

Si opcion no es 1, 2 ni 3, se ejecuta el código del default, que imprime "Opción inválida".

Después de ejecutar el case correspondiente (o el default), el break hace que el programa salga del switch.

```
```
## 📝 **Sentencia for en C**

La sentencia `for` es una estructura de control de iteración en C que se utiliza para ejecutar un bloque de código un número determinado de veces. A diferencia de la sentencia `while`, donde el control de la condición se realiza de forma más manual, la sentencia `for` ofrece una estructura más organizada con tres partes claramente definidas: **inicialización**, **condición** y **actualización**.

- **Inicialización** → Se ejecuta una sola vez antes del primer ciclo.
- 
- **Condición** → Se evalúa antes de cada iteración; si es `true`, el ciclo continúa.
- 
- **Actualización** → Se ejecuta después de cada iteración para modificar la variable de control.
- 

### 🖋️ **Sintaxis de la Sentencia for**

```c
for (inicialización; condición; actualización) {
  // Código a ejecutar en cada iteración
}
```
Inicialización: Esta expresión se ejecuta una sola vez al comienzo del bucle. Generalmente, se utiliza para declarar e inicializar la variable de control del bucle.

Condición: Esta expresión se evalúa antes de cada iteración. Si la condición es verdadera (distinta de cero), se ejecuta el bloque de código dentro del bucle. Si la condición es falsa (cero), el bucle termina.

Actualización: Esta expresión se ejecuta al final de cada iteración, después de que se ha ejecutado el bloque de código. Normalmente, se utiliza para modificar la variable de control (por ejemplo, incrementarla o decrementarla).

```
## 🧑‍💻 Ejemplo de Código

#include <stdio.h>
int main() {
  // Bucle for para imprimir los números del 1 al 5
  for (int i = 1; i <= 5; i++) {
    // Inicialización: int i = 1; (se declara e inicializa la variable i en 1)
    // Condición: i <= 5; (el bucle continúa mientras i sea menor o igual a 5)
    // Actualización: i++; (se incrementa i en 1 después de cada iteración)
    printf("Número: %d\n", i); // Se imprime el valor de i en cada iteración
  }

  return 0;
}
```
## 🔍 Explicación del Ejemplo
Inicialización: La variable i se declara e inicializa en 1. Esto se ejecuta solo una vez al comienzo del bucle.

Condición: Se evalúa si i es menor o igual a 5. Si es verdadero, se ejecuta el bloque de código dentro del bucle (la llamada a printf).

Bloque de Código: Se imprime el valor actual de i.

Actualización: Se incrementa el valor de i en 1.

Los pasos 2-4 se repiten hasta que la condición i <= 5 sea falsa.

```
## 📝 Resumen
La sentencia for proporciona una forma concisa y estructurada de implementar bucles en C cuando se conoce el número de iteraciones que se van a realizar.

## 🚫 **Errores comunes con for en C**

### 1. **No modificar la variable de control**

Si la variable de control del bucle `for` no se modifica dentro del bucle, la condición del bucle nunca se volverá falsa y el bucle se ejecutará indefinidamente, lo que se conoce como un **bucle infinito**.

#### 🖋️ **Ejemplo de Error**

```c
#include <stdio.h>

int main() {
  // Error: Falta el incremento de 'i', lo que causa un bucle infinito
  for (int i = 1; i <= 5; ) {
    printf("%d\n", i);
  }

  printf("¡Este mensaje nunca se imprimirá!\n"); // Esta línea nunca se ejecuta
  return 0;
}
```
En este ejemplo, la variable i se inicializa en 1, y la condición i <= 5 se evalúa. Sin embargo, no hay una actualización para i dentro del bucle.
Por lo tanto, el valor de i nunca cambia, la condición siempre es verdadera y el bucle se ejecuta infinitamente. El mensaje "¡Este mensaje nunca se imprimirá!" nunca se mostrará porque el programa se queda atrapado en el bucle infinito.
## 🛠️ Corrección: Añadir la modificación de la variable de control
```
#include <stdio.h>
int main() {
  // Corrección: Se agrega el incremento de 'i' para evitar el bucle infinito
  for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
  }

  printf("El bucle ha terminado.\n"); // Ahora este mensaje se imprimirá
  return 0;
}
```
Explicación de la Corrección:
En el ejemplo original, faltaba la parte de actualización del bucle (i++). Esto significaba que el valor de i nunca cambiaba, la condición i <= 5 siempre era verdadera, y el bucle se repetía indefinidamente.
La corrección consiste en añadir i++ en la tercera parte del bucle for. Esto incrementa el valor de i en 1 después de cada iteración, permitiendo que la condición finalmente se vuelva falsa y el bucle termine.

2. Condición incorrecta
Si la condición del bucle for se establece de manera incorrecta, es posible que el bucle no se ejecute nunca. Por ejemplo, si la variable de control se inicializa con un valor que ya hace que la condición sea falsa, el bloque de código dentro del bucle nunca se ejecutará.
## 🖋️ Ejemplo de Error
```
#include <stdio.h>
int main() {
  // Error: 'i' empieza en 10, pero la condición es i < 5, por lo que nunca entra al bucle
  for (int i = 10; i < 5; i++) {
    printf("Esto nunca se imprimirá.\n");
  }

  printf("Fin del programa.\n");
  return 0;
}
```
En este caso, la variable i se inicializa en 10. La condición del bucle es i < 5. Dado que 10 no es menor que 5, la condición es inicialmente falsa. Como resultado, el bloque de código dentro del bucle for nunca se ejecuta. El programa imprimirá "Fin del programa." pero no "Esto nunca se imprimirá."

## 🛠️ Corrección: Cambiar la condición
```
#include <stdio.h>
int main() {
  // Corrección: Se cambia la condición a i > 5 para que el bucle se ejecute
  for (int i = 10; i > 5; i--) {
    printf("Esto se imprimirá una vez.\n");
  }

  printf("Fin del programa.\n");
  return 0;
}
```
Explicación de la Corrección:
El ejemplo original tenía la condición i < 5. Como i se inicializaba en 10, esta condición era falsa desde el principio, y el bucle nunca se ejecutaba.
Hay varias maneras de corregir esto, la corrección mostrada cambia la condición a i > 5 y la actualización a i--. Ahora, el bucle se ejecutará mientras i sea mayor que 5 y se decrementará en cada iteración. En este caso, el bucle se ejecuta 5 veces.

## ❗ Recomendación Final

Es crucial **revisar cuidadosamente** la **inicialización**, la **condición** y la **actualización** de la variable de control en un bucle `for` para garantizar que el bucle se ejecute la **cantidad prevista de veces** y **evitar errores comunes** ⚠️.


## 🚀 **Sentencia while**

La sentencia `while` permite repetir un bloque de código mientras una condición sea verdadera. Se utiliza cuando no se sabe exactamente cuántas veces se repetirá el ciclo, ya que la repetición depende de la evaluación de la condición.

### Sintaxis de la Sentencia `while`

```c
while (condición) {
  // Código que se ejecuta mientras la condición sea verdadera
}
```
condición: Es una expresión que se evalúa antes de cada iteración. Si la condición es verdadera (distinta de cero), se ejecuta el bloque de código dentro del bucle. Si la condición es falsa (cero), el bucle termina.

{ }: Las llaves definen el bloque de código que se ejecutará mientras la condición sea verdadera. Si solo hay una sentencia a ejecutar, las llaves pueden omitirse, pero se recomienda usarlas para mayor claridad.

## Ejemplo de uso de while
```
#include <stdio.h>
int main() {
  int contador = 1;

  // Bucle while para imprimir los números del 1 al 5
  while (contador <= 5) {
    // La condición se evalúa antes de cada iteración
    printf("Número: %d\n", contador); // Se imprime el valor de contador
    contador++; // Se incrementa contador en 1
    // La condición se vuelve a evaluar. Si sigue siendo verdadera, se repite el ciclo.
  }
  // Cuando contador llega a 6, la condición es falsa y el while termina.

  return 0;
}
```
## Explicación del Ejemplo:
Inicialización: La variable contador se inicializa en 1.

Condición: Se evalúa si contador es menor o igual a 5. Si es verdadero, se ejecuta el bloque de código dentro del bucle.

Bloque de Código: Se imprime el valor actual de contador.

Actualización: Se incrementa el valor de contador en 1.

Los pasos 2-4 se repiten hasta que la condición contador <= 5 sea falsa.

## Resumen
En resumen, la sentencia while es útil cuando se necesita repetir un bloque de código un número indeterminado de veces, dependiendo de una condición que puede cambiar durante la ejecución del bucle.

## 🚨 **Errores comunes al usar `while`**

### 1. **Ciclo infinito**

Si la variable dentro del `while` no cambia dentro del ciclo, la condición nunca será falsa y el programa quedará atrapado en un bucle infinito.

#### Ejemplo con error:
```c
#include <stdio.h>

int main() {
  int contador = 1;

  // Error: 'contador' nunca se actualiza, el bucle es infinito
  while (contador <= 5) {
    printf("Número: %d\n", contador);
    // Falta contador++;
  }

  printf("¡El programa nunca llega aquí!\n");

  return 0;
}
```
## Corrección:
```
#include <stdio.h>

int main() {
  int contador = 1;

  // Corrección: Se agrega el incremento de 'contador'
  while (contador <= 5) {
    printf("Número: %d\n", contador);
    contador++;
  }

  printf("El bucle ha terminado.\n");

  return 0;
}
```
Explicación:
En el código con error, la variable contador se inicializa en 1, pero su valor nunca se incrementa dentro del bucle. Como resultado, la condición contador <= 5 siempre es verdadera, y el bucle se ejecuta indefinidamente. La corrección consiste en agregar la línea contador++; dentro del bucle para incrementar el valor de contador en cada iteración, lo que eventualmente hará que la condición sea falsa y termine el bucle.

2. Condición incorrecta
Asegúrate de que la condición permita al while ejecutarse al menos una vez si es necesario.

Ejemplo con error:
```
#include <stdio.h>

int main() {
  int numero = 10;

  // Error: La condición es falsa desde el principio, el bucle no se ejecuta
  while (numero < 5) {
    printf("Este mensaje no se mostrará.\n");
    numero++;
  }

  printf("Fin del programa.\n");

  return 0;
}
```
Corrección:
```
#include <stdio.h>

int main() {
  int numero = 10;

  // Corrección: Se cambia la condición para que el bucle se ejecute (al menos una vez si es lo deseado)
  while (numero > 5) {
    printf("Este mensaje se mostrará.\n");
    numero--;
  }

  printf("Fin del programa.\n");

  return 0;
}
```
Explicación:
En el código con error, la variable numero se inicializa en 10. La condición del bucle es numero < 5. Dado que 10 no es menor que 5, la condición es falsa desde el principio, y el bloque de código dentro del bucle while nunca se ejecuta. La corrección cambia la condición a numero > 5 y la actualización a numero--; para que el bucle se ejecute mientras numero sea mayor que 5.


## Conclusión
La principal conclusión sobre los errores en la sentencia while es la importancia de garantizar que la condición del bucle eventualmente se vuelva falsa. Esto implica dos aspectos fundamentales:

Asegurar la actualización de las variables: Las variables involucradas en la condición del while deben modificarse dentro del bucle. Si no se actualizan, la condición permanecerá siempre verdadera, y el bucle se ejecutará indefinidamente (bucle infinito), lo que puede consumir recursos del sistema y hacer que el programa deje de responder.

Definir correctamente la condición: La condición del while debe establecerse de manera que, bajo las circunstancias correctas, el bucle se ejecute la cantidad de veces esperada y que también se detenga cuando sea necesario. Una condición mal definida puede hacer que el bucle no se ejecute nunca o que se ejecute un número incorrecto de veces.

## Resumen
En resumen, para evitar errores en la sentencia while, se debe prestar mucha atención a la lógica del bucle, asegurando que las variables se actualicen adecuadamente y que la condición esté definida de forma precisa para lograr el comportamiento deseado del programa.



## Sentencia `do-while` en C

La sentencia `do-while` es una estructura de control de flujo en C que ejecuta un bloque de código al menos una vez y luego sigue ejecutándolo mientras una condición sea verdadera.

### Características clave:

- A diferencia del `while`, donde primero se evalúa la condición antes de ejecutar el código, en `do-while` el código se ejecuta al menos una vez antes de comprobar la condición.

### Sintaxis de la Sentencia `do-while`

```c
do {
  // Código a ejecutar al menos una vez
} while (condición);
```
do: La palabra clave do inicia el bloque de código que se ejecutará al menos una vez.

{ }: Las llaves definen el bloque de código que se ejecutará.

while (condición);: La palabra clave while seguida de la condición entre paréntesis y un punto y coma al final. La condición se evalúa después de la primera ejecución del bloque de código, y si es verdadera, el bloque de código se ejecuta de nuevo. Este proceso se repite hasta que la condición sea falsa.

## Ejemplo de do-while:

#include <stdio.h>
```
int main() {
  int numero;

  do {
    printf("Ingrese un número mayor que 10: ");
    scanf("%d", &numero);
    // El código dentro del 'do' se ejecuta al menos una vez.
    // Se muestra un mensaje y se pide al usuario un número.
  } while (numero <= 10);
  // Si el número es menor o igual a 10, se repite el proceso.

  printf("¡Número válido ingresado: %d!\n", numero);
  // Si el número es mayor a 10, el bucle termina y se muestra el mensaje final.

  return 0;
}
```
Explicación del Ejemplo:
Declaración: Se declara la variable numero.

Bloque do:

Se muestra un mensaje solicitando al usuario que ingrese un número mayor que 10.

Se lee el número ingresado por el usuario y se almacena en la variable numero.

Condición while: Se evalúa si numero es menor o igual a 10.

Si la condición es verdadera, el bloque do se ejecuta de nuevo.

Si la condición es falsa (es decir, numero es mayor que 10), el bucle do-while termina y se continúa con la siguiente instrucción después del bucle.

### 🆚 Diferencia entre `while` y `do-while`

| Característica                | `while`                                                                 | `do-while`                                                                    |
| :---------------------------- | :---------------------------------------------------------------------- | :---------------------------------------------------------------------------- |
| ¿Cuándo se evalúa la condición? | **Antes** de entrar al bucle                                            | **Después** de ejecutar el bloque                                             |
| ¿Se ejecuta al menos una vez?  | **No**, si la condición es `false` desde el inicio, nunca entra al ciclo | **Sí**, siempre se ejecuta al menos una vez                                   |
| Uso recomendado               | Cuando puede ser que el bloque **nunca se ejecute** | Cuando se necesita que el bloque se **ejecute al menos una vez** |
| Ejemplo comparativo           | ```c                                                                 | ```c                                                                        |
|                               | // Usando while                                                       | // Usando do-while                                                          |
|                               | int x = 5;                                                            | int y = 5;                                                                  |
|                               | while (x > 10) {                                                      | do {                                                                        |
|                               |   printf("Esto no se imprimirá\\n");                                 |   printf("Esto se imprimirá al menos una vez\\n");                             |
|                               | }                                                                     | } while (y > 10);                                                           |

## Resumen
La sentencia do-while es útil cuando se necesita garantizar que un bloque de código se ejecute al menos una vez, y luego se repita la ejecución según una condición.

## Errores comunes con `do-while`

Un error común con la sentencia `do-while` es:

### 1. Olvidar la actualización de la variable de control

Si la variable de control no se modifica dentro del bucle `do-while`, la condición del bucle puede permanecer siempre verdadera, lo que lleva a un bucle infinito. Esto significa que el bloque de código dentro del bucle se ejecutará repetidamente sin fin, lo que puede hacer que el programa se bloquee o consuma recursos excesivos.

#### Ejemplo de error:

```c
int i = 1;
do {
  printf("%d\n", i);
} while (i <= 5); // ¡Ciclo infinito porque i nunca cambia!
```
Solución:
```
#include <stdio.h>

int main() {
  int i = 1;

  do {
    printf("%d\n", i);
    i++; // Se agrega la actualización de la variable 'i'
  } while (i <= 5);

  return 0;
}
```
Explicación de la solución:

El error en el código original es que la variable de control i nunca se incrementa dentro del bucle do-while. Esto significa que la condición i <= 5 siempre se evalúa como verdadera, lo que resulta en un bucle infinito.





# Introducción

La programación es una disciplina (de tantas hoy en día) que pertenece a la informática, ciencia que se dedica al análisis y transformación de datos e información a partir del uso de computadoras.

En dicha disciplina se desarrollan algoritmos en un determinado lenguaje de programación, los cuales serán implementados en una computadora para de esa manera realizar los llamados programas.

## Algoritmo

Un algoritmo es una secuencia finita y ordenada de instrucciones que deben ser seguidas en pos de resolver un problema.

## Programa

Un programa es, técnicamente hablando, uno o más (al menos uno) algoritmos de programación escrito en un lenguaje que puede ser interpretado y ejecutado por una computadora. En otras palabras, decimos que un programa es la solución a un problema, ya que cada vez que se requiere desde sumar números hasta realizar traducciones, grandes cálculos o enviar mensajes de texto, se recurre a un programa (o aplicación, o web, lo que corresponda).

Existen distintos tipos de programas o aplicaciones (podemos decir que son sinónimos), por ejemplo:

- **Programas de escritorio**: Se ejecutan en Windows, por ejemplo Word, Excel, el buscaminas.
- **Programas web**: Facebook, Mercado Libre, son aplicaciones o sistemas web.
- **Programas de celular**: También llamados apps, o aplicaciones, por ejemplo Whatsapp, Instagram, Google Maps.

Todos estos son parte de un gran grupo dentro de la informática que se denomina **Software**.

## Sistema Informático

El sistema informático está compuesto necesariamente por tres partes:

- **Hardware**
- **Software**
- **Humano**

Ante la ausencia de alguna de estas partes, no podríamos completar el sistema y este no tendría sentido dado que:

- **Software** es todo lo que creamos para que una computadora funcione, pero requiere justamente una computadora donde hacerlo, ahí entra el **Hardware**.
- **Hardware** es “todo lo que se puede tocar” en una computadora: el monitor, el teclado, incluso todos los componentes internos dentro de la misma. 
- **Humano**: Se completa el ciclo con el humano, quien hace uso de ese Software gracias a ese Hardware, y aunque parezca obvio, es clave tener en cuenta este círculo.

### Categorías del Software

Existen distintas categorizaciones dentro del software. Las más comunes son:

- **Software de base**: Corresponde a las cuestiones básicas y de sistema operativo que se requiere para poder encender y usar una computadora (Windows, Linux, Mac OS, Android, iOS).
- **Software utilitarios**: Son aplicaciones complementarias para el correcto funcionamiento y/o administración de los sistemas. Podemos hablar del desfragmentador de disco, o utilidades de análisis de errores en memoria, entre otros.
- **Software de aplicación**: Los programas, sistemas o aplicaciones que utilizamos a diario.

Existen más categorías y sub-categorías, además de ciertas características adicionales como si son libres, o no, o si son open source, o multiplataforma, pero eso es para indagar en otro contexto.

También podemos mencionar los “programas para programar”. Hoy en día, para poder desarrollar programas, necesitamos una computadora, pero además uno o más programas diseñados específicamente para ello, conocidos como **IDE** (Entorno de Desarrollo Integrado).

Dependiendo de lo que quisiéramos programar, será la aplicación que deberíamos utilizar, y esto aplica del mismo modo para la tecnología o lenguaje de programación a utilizar.

## Tipos de datos

Al programar, no solo tenemos que escribir en un lenguaje determinado, sino que utilizaremos herramientas como las **variables**.

Una **variable** es un espacio en la memoria de la computadora destinado a ser utilizado por nuestro programa para guardar un dato. La variable tiene ciertas características, como que debe contar con un nombre, que puede guardar un solo dato a la vez (el cual puede ir cambiando), y que debe tener un tipo. Este tipo se refiere a qué es lo que precisamente va a guardar esa variable. Los tipos más comunes son:

- **Int**: Para guardar números enteros.
- **Float** o **double**: Para guardar números con coma (dependiendo del lenguaje, hay otras variantes).
- **Char**: Para guardar letras.
- **Bool**: Para guardar verdadero o falso (equivalente a 1 o 0, respectivamente).

### Importancia del tipo de dato

El tipo de dato asignado a una variable tiene relevancia porque si estamos creando una variable de tipo entero, solo podrá guardar valores enteros. Si intentamos guardarle un número con coma, dependiendo del lenguaje o de la operación, podría dar error o redondear el valor, dejando solo la parte entera. Lo ideal es que cada variable sea utilizada según su tipo de dato correspondiente.


La solución es agregar la línea i++; dentro del bloque de código del bucle do-while. Esta línea incrementa el valor de i en 1 en cada iteración, lo que eventualmente hará que la condición i <= 5 se vuelva falsa y el bucle termine.

## Conclusión:
Es crucial asegurarse de que todas las variables de control se actualicen correctamente dentro de los bucles para garantizar que terminen en algún momento y el programa funcione como se espera.
