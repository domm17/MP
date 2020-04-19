#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int funcio2(int x,int y,int N){
    int funcio,Y;
    Y=y-1;
    funcio=pow(x,Y);
    funcio=funcio%N;
return funcio;
}


int imparell(int x,int y,int N){

    int resultat, funcio;

    resultat=(x%N);
    resultat=pow(resultat,2);
    funcio=funcio2(x,y,N);
    funcio=pow(funcio,4);
    resultat=funcio%N;

        return resultat;
}




int funcio1(int x,int y,int N){

    int funcio,Y;
    Y=y/2;
    funcio=pow(x,Y);
    funcio=funcio%N;
return funcio;
}


int parell(int x,int y,int N){

    int resultat, funcio;

    resultat=(x%N);
    funcio=funcio1(x,y,N);
    funcio=pow(funcio,4);
    resultat=funcio%N;

        return resultat;
}


int main()
{
    int x, y, N, resultat;
    printf("Introdueix el valor de x:\n");
    scanf("%d",&x);
    printf("Introdueix el valor de y:\n");
    scanf("%d",&y);
    printf("Introdueix el valor de N:\n");
    scanf("%d",&N);
    if(y==0){
        resultat=1;
    }
    else {
        if(y%2==0){

            resultat=parell(x,y,N);

        }
        else{

            resultat=imparell(x,y,N);
        }


    }

    printf("el resultat es:%d", resultat);

    return 0;
}
