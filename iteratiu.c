#include <stdio.h>

#include <stdlib.h>

#include <math.h>



int recursiu_iteratiu (x,y,N)

{
    long int f,funcio,maxim,cont,funcio2,z;
    funcio2=1;
    funcio=1;
    f=0;
    z=0;
    cont=0;

    maxim=pow(2,10);

    if (y==0)
    {

        f=1;

    }

    else if (y>0)
            {

                if(y%2==0)
                    {
                        while(cont<y){

                        funcio=funcio*x;

                        if (funcio>N){

                        funcio=funcio%N;

                        }
                        cont++;
                        }


                        f=funcio;
                    }
                else {


                        x=x%N;
                        y=y-1;

                        z=pow(x,y);

                        z=z%N;

                        x=x*z;

                        funcio=x%N;

                        f=funcio;

                }
            }


    return f;

}



int main()

{
    int x,y,N, f;


    printf("Introdueix el valor de x\n");

    scanf("%d",&x);

    printf("Introdueix el valor de y\n");

    scanf("%d",&y);

    printf("Introdueix el valor de N\n");

    scanf("%d",&N);

    printf("Els valors de x y z: %d %d %d \n",x,y,N);

    f=recursiu_iteratiu(x,y,N);

    printf("El resultat final es: %d \n",f);


    return 0;

}

