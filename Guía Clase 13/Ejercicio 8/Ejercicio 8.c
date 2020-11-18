    #include <stdlib.h>
    #include <stdio.h>

    void main (){

        int fub[16] = {0, 1}, i, suma=0;

        for(i=0; i<16; i++){
            fub[i+2]=fub[i]+fub[i+1];
            printf("%d, ", fub[i]);
        }


    }
