    #include <stdio.h>
    #include <stdlib.h>
void alumnos (int *alum)//no había funcion.
{
    printf("Las posiciones de los alumnos cuya nota es superior a 8 es:\n");
    for (int i = 0; i < 15; i++)
    {
        if (alum[i] > 8)
        {
            printf("%d, ", i);
        }
    }
}
    void main()
    {
        int alum[15], i;

        printf("Ingrese las 15 notas de los alumnos:\n");
        for(i=0; i<15; i++){
            scanf("%d", &alum[i]);
        }
        alumnos(alum);



        /*printf("Las posiciones de los alumnos cuya nota es superior a 8 es:\n");
        for(i=0; i<15; i++){
            if (alum[i]>8){
                printf("%d, ", i);
            }

        }
        return 0; Solo para funciones de otro tipo, no para void.*/

    }






