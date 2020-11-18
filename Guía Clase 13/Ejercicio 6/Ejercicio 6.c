    #include <stdio.h>
    #include <stdlib.h>

    void main()
    {
        int sueldos[20], i, cont=0, cont1=0;

        printf("Ingrese el sueldo de las 20 personas:\n");
        for(i=0; i<20; i++){
            scanf("%d", &sueldos[i]);
            if(sueldos[i]>2000)
            {
                cont = cont + 1;
            }
            else
             cont1 += 1;
        }

        printf("Las personas que ganan mas de $2000 son %d\nY las que ganan menos que esto son %d", cont, cont1);
        return 0;
    }
