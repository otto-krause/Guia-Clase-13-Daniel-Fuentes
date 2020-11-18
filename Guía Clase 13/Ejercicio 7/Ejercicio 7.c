    #include <stdio.h>
    #include <stdlib.h>

    void main()
    {
        int alum[5], posi[5], nota[5], i, j;

        for(i = 0; i<5; i++){
            alum[i] = 0;
            nota[i] = 0;
        }

        printf("Ingrese las 5 notas de los alumnos:\n");
        for(i=0; i<5; i++){
            scanf("%d", &alum[i]);

            if (alum[i]>8){
                nota[i] = alum[i];
                posi[i] = i;
            }
        }


        printf("Las posiciones de los alumnos cuya nota es superior a 8 es:\n");
        for(i=0; i<5; i++){
            if(posi[i]!=0){
                printf("%d, ", posi[i]);
            }
        }

        return 0;

    }





