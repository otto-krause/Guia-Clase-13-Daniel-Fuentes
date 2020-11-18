    #include <stdio.h>
    #include <stdlib.h>

    void main(){
        int ele[10], i, suma=0, produ=1, cont=0;
        float prom=0;

        printf("Ingrese 10 numeros:\n");
        for(i=0; i<10; i++){
            scanf("%d", &ele[i]);
            suma = suma + ele[i];
            produ = produ * ele[i];
        }
        prom = suma/10;

        for(i=0; i<10; i++){
            if(ele[i] < prom){
                cont = cont + 1;
            }
        }

        printf("La suma de los numeros ingresados es %d\n", suma);
        printf("El producto de los ingresados es %d\n", produ);
        printf("El promedio de todos los numeros es %.1f, y los que estan por debajo del mismo son %d", prom, cont);
    }
