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

