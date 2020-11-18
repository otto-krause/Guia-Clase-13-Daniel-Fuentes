    #include <stdlib.h>
    #include <stdio.h>
    int resTotal(int a[]);

    void main()
    {
        int v1[5], i;

        printf("Ingrese las 5 resistencias en serie\n");
        for(i=0; i<5; i++)
        {
            scanf("%d", &v1[i]);
        }
        system("cls");
        printf("La resistencia total de ");
        for(i=0; i<5; i++)
        {
            printf("%d, ", v1[i]);
        }
        printf(" es: %d", resTotal(v1));
    }

    int resTotal(int a[])
    {
        int suma, total, i;

        for(i=0; i<5; i++)
        {
            total += a[i] ;
        }
        return total;
    }

