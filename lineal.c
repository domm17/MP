#include <stdio.h>

#include <stdlib.h>

#include <math.h>



int recursiu_lineal (x,y,N)

{
    long int f,funcio,funcio2;
    funcio2=0;
    funcio=0;
    f=0;
    
    if (y==0)
    {
        
        f=1;
        
    }
    
    else if (y>0)
    {
        
        if(y%2==0)
        {
            funcio=(pow (x,(y/2)));
            
            funcio= funcio%N;
            
            funcio=pow(funcio%N,2);
            
            funcio=funcio%N;
            
            f=funcio;
            
        }
        else {
            
            
            funcio=x%N;
            
            funcio2=(pow(x,y-1));
            
            funcio2=funcio2%N;
            
            funcio=(funcio*funcio2)%N;
            
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
    
    f=recursiu_lineal(x,y,N);
    
    printf("El resultat final es: %d \n",f);
    
    
    return 0;
    
}
