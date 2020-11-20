    #include <stdlib.h>
    #include <stdio.h>
    void main(){
        int uni, ven[20], j, vmayor=0;

            for(j=1; j<21; j++)
            {
                printf("Ingresar el total de unidades vendidas del vendedor %d tras 15 dias: ", j);
                scanf("%d", &ven[j]);
                uni += ven[j];

                if(ven[j] > vmayor)
                {
                    vmayor = j;
                }
            }
                printf("\nEl vendedor con mayor ventas es el %d\n", vmayor);
                printf("\nEl total de unidades vendidas es %d\n", uni);
        return 0;
        }




