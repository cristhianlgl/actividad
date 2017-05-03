#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Programa para gestionar pilas con números enteros \n");
    int opcion = 0;
    while(opcion != 4)
    {
        system("cls");
        printf("Programa para gestionar pilas con números enteros \n \n");
        printf("MENU DE OPCIONES \n \n");
        printf("1. Insertar pila (inserta un número entero en la pila) \n");
        printf("2. Borrar en pila (borra el último número de la pila) \n");
        printf("3. Listar pila (imprime en pantalla la pila actual) \n");
        printf("4. Salir (sale del programa) \n");
        printf("Por favor digite una opcion: \n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            printf("Hola opcion 1\n");
            system("pause");
            break;
        }

    }
    return 0;
}

