    #include <stdio.h>
    #include <stdlib.h>

    void main(){
        int list[10], i, asc=0, desc=0, des=0;

        printf("Ingrese una lista de numeros(10) distinta de 0:\n");


            for(i=0; i<10; i++){
                scanf("%d", &list[i]);
                if(list[i] != 0){
            }
            else
            {
                printf("No puede ingresar 0\n");
                return 0;
            }
        }


        for(i=0 ; i<10; i++){
            if (list[i] < list[i+1]){
                asc++;
            }
            else
                if(list[i] > list[i+1]){
                    desc++;
                }
        }


        if(asc == 10){
            printf("La lista es ascendente\n");
        }
        else
            if(desc==9){
                printf("La lista es descendente\n");
            }
        else
            if(asc<9){
                printf("La lista es desordenada\n");
            }

        printf("La suma entre el primer numero ingresado con el ultimo es %d", list[0]+list[9]);

    }
