    #include <stdio.h>
    #include <stdlib.h>

    void main()
    {
        int alum[15], posi[15], i, j;

        printf("Ingrese las 15 notas de los alumnos:\n");
        for(i=0; i<15; i++){
            scanf("%d", &alum[i]);

            if (alum[i]>8){
                posi[i] = i;
                j++;
            }
            else{
                posi[i] = -1;
            }
        }


        printf("Las posiciones de los alumnos cuya nota es superior a 8 es:\n");
        for(i=0; i<=j; i++){
            if((posi[i]>=0)&&(posi[i]<15)){
                printf("%d, ", posi[i]);
            }

        }
        return 0;

    }






