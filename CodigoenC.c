#include <stdio.h>

int main() {
    // Declaración de variables de diferentes tipos de datos
    int entero;          // Variable de tipo entero
    float flotante;      // Variable de tipo flotante(dos decimales)
    char caracter;       // Variable de tipo carácter(Letra)

    // Mostrar un mensaje de bienvenida
    printf("Bienvenido al programa 1 de C!\n");

    //  ingrese un valor entero
    printf(" ingrese un valor entero: ");
    scanf("%d", &entero);  // Leer el valor entero ingresado por el usuario

    // ingrese un valor flotante
    printf(" ingrese un valor flotante: ");
    scanf("%f", &flotante);  // Leer el valor flotante ingresado por el usuario

    // ingrese un carácter
    printf(" ingrese un carácter: ");
    scanf(" %c", &caracter);  // Leer el carácter ingresado por el usuario
    

    // Mostrar los valores ingresados por el usuario
    printf("\nLos valores ingresados son:\n");
    printf("Entero: %d\n", entero);
    printf("Flotante: %.2f\n", flotante);  // Mostrar el valor flotante con dos decimales
    printf("Carácter: %c\n", caracter);

    // Mensaje de despedida
    printf("\nGracias por su atención.\n");

    return 0;
}