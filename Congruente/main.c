//
//  main.c
//  Congruente
//
//  Created by Gerson Rodrigo on 06/06/17.
//  Copyright © 2017 Gerson Rodrigo. All rights reserved.
//

#include <stdio.h>
#include <math.h>

//( a = 4K + 1) (c = primo impar) (base 2 muito grande)  Para gerar numeros aleatotios de 0 a m-1
//#define a 69069 //4k + 1
//#define c 0 // primo impar
//#define m 2 //Base 2 muito grande




int metodo(int numero, int a, int c, int m){
    int numeroresult = ((a * numero) + c) % (int)pow(m, 32);
    return numeroresult;
}


int main (void){
    
    int xL = 1;
    int  k = 9;
    int  a = 4*k+1;
    int  c = 3;
    int  m = 2;
    
    
    
    printf("Digite a quantidade de numeros que voce quer: ");
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        
        int xLL = metodo(xL,a,c,m);
        
        printf("%d\n", xL);
        
        xL = xLL;
 
  }
       return 0;
}

