    #include <stdlib.h>
    #include <stdio.h>

    void main(){
        int i, cont=0;
        int max=0, num=0, num2=0;

        printf("Ingrese dos numeros\n");
        scanf("%d %d", &num, &num2);

        if (num < num2){

            for(i = num; i<num2; i++){
                max = max + 1;
            }
            int v[max];



            for(i = num+1; i<num2; i++){
                v[cont++] = i;
            }
            printf("Los numeros intermedios de los ingresados son:\n");
            for(i=0; i<max-1; i++){
                printf("%d ", v[i]);
                }
        }

        if(num > num2)
        {
            for(i = num2; i < num; i++){
                max = max + 1;
            }
            int v[max];



            for(i = num2+1; i < num; i++){
                v[cont++] = i;
            }
            printf("Los numeros intermedios de los ingresados son:\n");
            for(i=0; i<max-1; i++){
                printf("%d ", v[i]);
                }

        }
        return 0;

    }

