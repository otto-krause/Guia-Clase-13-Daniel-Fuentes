    #include <stdlib.h>
    #include <stdio.h>

    float promedio(int a[]);

    void main()
    {
        int v[5], i, j, aux;

        printf("Ingresar 5 numeros\n");
        for(i=0; i<5; i++)
        {
            scanf("%d", &v[i]);
        }
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                if(v[j] > v[j+1]){
                    aux = v[j+1];
                    v[j+1] = v[j];
                    v[j] = aux;
                }
            }
        }

        printf("El promedio de los numeros ingresados es %.1f \n", promedio(v));
        printf("El numero mayor de los ingresados es: %d ", v[j]);

        return 0;
    }

    float promedio(int a[])
    {
        float prom;
        int i, total;

        for(i=0; i<5; i++)
        {
            total += a[i];
        }

        prom = total/5;
        return prom;
    }

