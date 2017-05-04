#include <stdio.h>
#include <stdlib.h>

//esta estrutura representara cada nodo o elemento que podra contener nuestra cola
//el cual esta compuesto por el numero entero digitado y el un puntero al siguiente nodo
struct Nodo {
    int numero; //numero sera la variable para ingresar el dato del numero entero digitado por el usuario
    Nodo *sig;  //sig sera el puntero para el siguiente nodo
};

//Funcion para insertar un nuevo nodo en la cola, el cual recibe una variable cab (cabecera) que es la variable
// que indica el primer nodo ingresado y una variable fin la cual se le asignara el ultimo nodo de la cola
// tambien recibe el numero entero que se desea ingresar a la cola
void insertarCola(Nodo *&cab, Nodo *&fin, int numero){
    Nodo *nuevo = new Nodo(); //crea un nuevo nodo para ingresar el numero
    nuevo ->numero = numero; //asigna el numero digitado al nuevo nodo
    nuevo ->sig = NULL; //el siguiente de nuevo nodo sera siempre NULL, ya que siempre el ultimo ingresado sera el ultimo de la Cola
    if(cab == NULL){
        cab = nuevo;  //si cab es Null, esto quiere decir que la cola no tiene elementos o nodos
    }else{
        fin->sig = nuevo;//de lo contrario aignamos al siguiente de fin el nuevo nodo que sera el ultimo de la cola
    }
    fin = nuevo; //fin ahora es el nuevo nodo ingresado
    printf("\nNumero Ingresado! \n\n");
}

//funcion para eliminar el primer nodo de la cola
void borrarCola(Nodo *&cab, Nodo *&fin){
    if(cab == NULL){
        printf("No hay registros a borrar en la Cola \n\n");
    }else{
        Nodo *aux = cab; //se crea un auxiliar y se le asigna el valor cab, el nodo a ser eliminado
        int numero = aux->numero; //se obtiene el numero entero antes de ser borrado
        if(cab == fin){  //si cab y fin son iguales nos indica que solo hay un registro en la cola
            cab = NULL; //cab y fin se igualan a nulo porque ya no habrian nodos en la cola
            fin = NULL;
        }else{
            cab = cab->sig; //ahora la cabecera (cab) pasa a ser el siguiente nodo en la cola
        }
        delete aux; //se elimina el nodo
        printf("El numero %d ha sido Eliminado! \n\n",numero); //se imprime mensaje de aviso
    }
}

//funcion que lista los datos de los nodos en la cola
void listarCola(Nodo *&cab){
    if (cab == NULL){
       printf("No hay numeros ingresados en la Cola \n\n");
    }else{
        Nodo *aux = cab; //se crea el auxiliar para recorrer la cola, este sera el primer nodo ingresado a la cola
        printf("Numeros en la Cola: \n\n");
        while (aux != NULL){ //recorre la cola mientras  aux sea diferente de nulo
            printf("%d \n", aux->numero); //imprime el numero
            aux = aux->sig; //utliza el auxiliar para asiganar el siguiente nodo en la cola
        }
        printf("\n");
    }
}

int main()
{
    int opcion = 0; //guarda la opcion del menu
    int numero = 0; //guarda el numero entero a ingresar en la cola
    Nodo *cab = NULL; //puntero que contendra el primer nodo o elemento de la cola
    Nodo *fin = NULL; //puntero que contndra el ultimo nodo de la cola
    while(opcion != 4)
    {
        //menu del programa y opciones
        system("cls");
        printf("        PROGRAMA PARA GESTIONAR COLAS CON NUMERO ENTEROS \n \n");
        printf("-----------------------MENU DE OPCIONES-------------------- \n \n");
        printf("1. Insertar cola (inserta un numero entero en la cola) \n");
        printf("2. Borrar cola (borra el primer numero en la cola) \n");
        printf("3. Listar cola (imprime en pantalla la cola actual) \n");
        printf("4. Salir (sale del programa) \n\n");
        printf("Por favor digite una opcion: ");
        scanf("%d",&opcion);

        switch(opcion) //dependiendo de la opcion hace
        {
            case 1:
                system("cls");
                printf("INSERTAR COLA \n\n");
                printf("Digite el numero entero a ingresar a la cola: ");
                scanf("%d",&numero);
                insertarCola(cab, fin, numero);  //llama la funcion
                system("pause");
                break;
            case 2:
                system("cls");
                printf("BORRAR COLA \n\n");
                borrarCola(cab, fin);  //llama la funcion
                system("pause");
                break;
            case 3:
                system("cls");
                printf("LISTAR COLA \n\n");
                listarCola(cab);  //llama la funcion
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

