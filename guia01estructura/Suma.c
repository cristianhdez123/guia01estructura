/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cristian
 *
 * Created on 31 de agosto de 2018, 06:30 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

	int main() {

    int n=0;
     printf("ingrese tamanio de la matris\n");
        scanf("%i",&n);
    
    int matriz[n][n];
    
   for(int j=0;j<n;j++){  
    for(int i=0;i<n;i++){
        printf("ingrese un valor\n");
        scanf("%i",&matriz[j][i]);
    }
    }
    
    
    printf("---------");
      for(int a=0;a<n;a++){  
                printf("\n"); 

    for(int b=0;b<n;b++){
        printf(" ");
        printf("%i",matriz[a][b]);
    }  
    
    }
    
    printf("\n");
    printf("---------");
     printf("\n");
    int columna=n,suma1=0;
    
    for(int i=n;i>0;i--){
         printf(" ");
       
         suma1=suma1+matriz[columna-1][i-1];
        columna--;
    }
     int columna2=0,suma2=0;
    
    for(int i=n;i>0;i--){
     
         suma2=suma2+matriz[columna2][i-1];
        columna2++;
    }
     
     int sumafilas=0,fila=0;
      int sumacolumna=0,columna3=0;
     
     
     for(int i=0;i<n;i++){
         while(fila<n){
             sumafilas=sumafilas+matriz[i][fila];
             fila++;
         }
         
         printf("suma fila = ");
         printf("%i",sumafilas);
          printf("\n");
          fila=0;
          sumafilas=0;
          
          while(columna3<n){
             sumacolumna=sumacolumna+matriz[columna3][i];
             columna3++;
         }
         
         printf("suma columna = ");
         printf("%i",sumacolumna);
          printf("\n");
          columna3=0;
          sumacolumna=0;
     }

     printf("suma diagonal principal= ");
      printf("%i",suma2);
      printf("\n");
     printf("suma diagonal secundaria= ");
      printf("%i",suma1); 

    return 0;
}

