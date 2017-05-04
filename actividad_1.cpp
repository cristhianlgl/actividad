#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Programa para gestionar pilas con números enteros \n");
    int opcion = 0;
    while(opcion != 4)
    {
        system("cls");
        printf("        PROGRAMA PARA GESTIONAR PILAS CON NUMERO ENTEROS \n \n");
        printf("-----------------------MENU DE OPCIONES-------------------- \n \n");
        printf("1. Insertar pila (inserta un numero entero en la pila) \n");
        printf("2. Borrar en pila (borra el ultimo numero de la pila) \n");
        printf("3. Listar pila (imprime en pantalla la pila actual) \n");
        printf("4. Salir (sale del programa) \n\n");
        printf("Por favor digite una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("INSERTAR PILA \n\n");
                system("pause");
                break;
            case 2:
                system("cls");
                printf("BORRAR PILA \n\n");
                system("pause");
                break;
            case 3:
                system("cls");
                printf("LISTAR PILA \n\n");
                system("pause");
                break;
            case 4:
                break;
            default:
                system("cls");
                printf("La opcion digitada no es correcta \n");
                system("pause");
                break;
        }

    }
    return 0;
}

