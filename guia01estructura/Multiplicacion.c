/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cristian
 *
 * Created on 31 de agosto de 2018, 04:15 PM
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
 int a,b,e,g,c,d,h,suma=0;
int primero [10][10],segundo[10][10], multiplicar[10][10];

   printf("ingrese el numero de filas y columnas de la primera matriz\n");
   scanf("%d%d", &a,&b);
   printf("ingrese los elementos de la primera matriz \n");

   for ( c=0; c<a; c++)
   for ( d=0; d<b; d++)
   scanf("%d",&primero[c][d]);
   
     printf("ingrese el numero de filas y columnas de la segunda matriz\n");
     scanf("%d%d",&e,&g);


        if(b !=e) 
          printf("las matrices no se pueden multiplicar por no tener el mismo parametro\n");
           else{
       printf ("ingrese los elementos de la segunda matrix \n");

            for(c=0;c<e; c++)
            for(d=0; d<g; d++)
            scanf("%d",&segundo[c][d]);

               for(c=0; c<a; c++)
                 {
               for(d=0;d<g; d++)
                 {
               for( h=0; h<e; h++)
                 {
                suma=suma + primero[c][h]*segundo[h][d];
             }
           
          multiplicar[c][d]=suma;
          suma=0;
         }
        }

    printf ("resultados\n");
      for(c=0; c<a; c++)
      {
      for (d=0; d<g; d++)
        printf("%d\t", multiplicar[c][d]);

      printf("\n");
}
}
 return 0;
 }  

   
