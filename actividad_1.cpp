#include <stdio.h>
#include <stdlib.h>

//esta estrutura representara cada nodo o elemento que podra contener nuestra pila
//el cual esta compuesto por el numero entero digitado y el un puntero al siguiente nodo
struct Nodo {
    int numero; //numero sera la variable para ingresar el dato del numero entero digitado por el usuario
    Nodo *sig;  //sig sera el puntero para el siguiente nodo
};

//Funcion para insertar un nuevo nodo en la pila, el cual recibe un a cab (cabecera) que es la variable
// que indica el ultimo nodo ingresado y tambien recibe el numero entero que se desea ingresar a la pila
void insertarPila(Nodo *&cab, int numero){
    Nodo *nuevo = new Nodo(); //crea un nuevo nodo para ingresar el numero
    nuevo ->numero = numero; //asigna el numero digitado al nuevo nodo
    nuevo ->sig = cab; //se asigna al sig el nodo actual de la cabecera que para la primera vez que se ingrese un numero a la pila sera NULL
    cab = nuevo; //se asigna el nuevo elemento creado a la cabecera
    printf("\nNumero Ingresado! \n\n");
}

//funcion para eliminar el ultimo nodo de la pila
void borrarPila(Nodo *&cab){
    if(cab == NULL){
        printf("No hay registros a borrar en la Pila \n\n");
    }else{
        Nodo *aux = cab; //se crea un auxiliar y se le asigna el valor cab
        int numero = aux->numero; //se obtiene el numero entero antes de ser borrado
        cab = aux->sig; //se asigna a cab la posicion siguiente del nodo a eliminar
        delete aux; //se elimina el nodo
        printf("El numero %d ha sido Eliminado! \n\n",numero); //se imprime mensaje de aviso
    }
}

//funcion que lista los datos de los nodos en la pila
void listarPila(Nodo *&cab){
    if (cab == NULL){
       printf("No hay numeros ingresados en la Pila \n\n");
    }else{
        Nodo *aux = cab; //se crea el auxiliar para recorrer la pila, este sera el ultimo nodo ingresado a la pila
        printf("Numeros en la Pila: \n\n");
        while (aux != NULL){ //recorre la pila mientras el nodo sea diferente de nulo
            printf("%d \n", aux->numero); //imprime el numero
            aux = aux->sig; //utliza el auxiliar para asiganar el siguiente nodo en la pila
        }
        printf("\n");
    }
}

int main()
{
    int opcion = 0; //guarda la opcion del menu
    int numero = 0; //guarda el numero entero a ingresar en la pila
    Nodo *cab = NULL; //se crea un puntero de tipo nodo para la cabecera de la pila
    while(opcion != 4)
    {
        //menu del programa y opciones
        system("cls");
        printf("        PROGRAMA PARA GESTIONAR PILAS CON NUMERO ENTEROS \n \n");
        printf("-----------------------MENU DE OPCIONES-------------------- \n \n");
        printf("1. Insertar pila (inserta un numero entero en la pila) \n");
        printf("2. Borrar pila (borra el ultimo numero de la pila) \n");
        printf("3. Listar pila (imprime en pantalla la pila actual) \n");
        printf("4. Salir (sale del programa) \n\n");
        printf("Por favor digite una opcion: ");
        scanf("%d",&opcion);

        switch(opcion) //dependiendo de la opcion hace
        {
            case 1:
                system("cls");
                printf("INSERTAR PILA \n\n");
                printf("Digite el numero entero a ingresar a la Pila: ");
                scanf("%d",&numero);
                insertarPila(cab,numero);  //llama la funcion
                system("pause");
                break;
            case 2:
                system("cls");
                printf("BORRAR PILA \n\n");
                borrarPila(cab);  //llama la funcion
                system("pause");
                break;
            case 3:
                system("cls");
                printf("LISTAR PILA \n\n");
                listarPila(cab);  //llama la funcion
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

