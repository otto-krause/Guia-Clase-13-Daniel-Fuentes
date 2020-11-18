    #include <stdlib.h>
    #include <stdio.h>
    void main(){
        int uni, ven[5], dia, j, vmayor=0;

        for(dia=0; dia<3; dia++){
                printf("\nDia %d\n", dia+1);

            for(j=1; j<6; j++)
            {
                printf("Ingresar las unidades vendidas del vendedor %d: ", j);
                scanf("%d", &ven[j]);
                uni += ven[j];

                if(ven[j] > vmayor)
                {
                    vmayor = j;
                }
            }
                printf("El vendedor con mayor ventas de este dia es el %d\n", vmayor);




        }
        printf("\nEl total de unidades vendidas es %d\n", uni);


        return 0;
    }



