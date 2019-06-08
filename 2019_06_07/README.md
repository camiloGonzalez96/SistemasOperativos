# Clase 2019_05_31

En la clase de hoy se ejecutarán los programas que se mostraron en los videos. A continuación se mostrará como se compila cada uno de esos códigos.

los siguientes son unos codigos de calentamiento que presenta como usar los archivos de cabecera en proyectos de programacion en c.

* [entero.h](entero.h)
* [principal.c](principal.c)

## cpu.c

Dentro del estudio del archivo `cpu.c` se habló de los punteros. 
Para hablar en mas detalle de los apuntadores se creó un archivo llamado [`cadena.c`](cadena.c) y donde se mostraban algunas características de los apuntadores en C.

Aquí el código

```
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  char cadena[] = "hola mundo";
  char *apcad;

  apcad = (char*)malloc(sizeof(char));
  *apcad = 'h';
  printf("%c\n",*apcad);
  apcad[3] = 'o';
  printf("%c\n",apcad[1]);

  return 0;

  printf("Cadena: %s apcad: %s\n",cadena,apcad);
  apcad = cadena;
  printf("Cadena: %s apcad: %s\n",cadena,apcad);
  cadena[0] = 'H';
  printf("Cadena: %s apcad: %s\n",cadena,apcad);
  apcad[1] = 'O';
  printf("Cadena: %s apcad: %s\n",cadena,apcad);
  apcad = (char*)1024;
  printf("%s\n",apcad);
}
```
---------------------------------------------------------
* los argumenos en la linea de comandos se pasan poniendo el comando de ejecucion del programa, seguido de los argumentos que admita el programa. ej: gcc cpu.c -o cpu && ./cpu hola

* el simbolo & se usa para concatenar comandos, de forma que se realice uno seguido del otro

* el comando man sirve para mostrar en el manual, la funcion que cumple un comando con todas sus opciones. ej: man ls

 
## mem.c

## threads.c

## io.c
