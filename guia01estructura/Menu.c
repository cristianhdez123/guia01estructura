/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cristian
 *
 * Created on 31 de agosto de 2018, 09:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
     int z=0,menu=0;
     printf("ingresse un tamanio\n");
        scanf("%i",&z);
         int vector[z];
        for(int y=0;y<z;y++){
              vector[y]=0;
              
         }
    
   
    
    do{
         printf("Vector:");
         for(int x=0;x<z;x++){
              printf("[%i] ",vector[x]);
              
         }
         
         printf("\n");
         printf("-----------\n");
         printf("que desea realizar\n");
          printf("1.agregar un dato\n");
           printf("2.Buscar un valor en el vector\n");
            printf("3.Editar\n");
            printf("4.Elimnar\n");
            printf("-----------\n");
            scanf("%i",&menu);
            
           if(menu==1){
              int posicion=0,dato=0;
               do{
           printf("En que posicion desea agregar el dato de posicion  %d \n ",z);
            scanf("%i",&posicion);
               }while(posicion>z-1);
               
                printf("ingrese el numero \n ");
                scanf("%i",&dato);
                vector[posicion]=dato;
                printf("hecho.."); 
                printf("\n");
           } else if(menu==2){
               int dato=0,bus=0;
              
               
                printf("ingrese el numero a buscar\n ");
                scanf("%i",&dato);
                
                for(int x=0;x<z;x++){
                    if(dato==vector[x]){
                         bus=1;
                         printf("el numero ingresado esta en la posicion %d \n ",x);
                    }
             
                }
                if(bus==0){
                        printf("numero no existe\n");
                        }
                    bus=0;
                        printf("\n");
           } else if(menu==3){
               
             int dato=0,nuevo=0,bus=0;
                printf("ingrese el numero a editar\n ");
                scanf("%i",&dato);
                for(int x=0;x<z;x++){
                    if(dato==vector[x]){
                        bus=1; 
                        printf("el numero nuevo \n ");
                         scanf("%i",&nuevo);
                         vector[x]=nuevo;
                    }
                }
                if(bus==0){
                        printf("numero no existe\n");
                        }
                 bus=0;   
               printf("\n");
               
           } else if(menu==4){
               
               int dato=0,bus=0;
                printf("ingrese el numero a eliminar\n ");
                scanf("%i",&dato);
                for(int x=0;x<z;x++){
                    if(dato==vector[x]){
                        bus=1;
                        vector[x]=0;
                         printf("eliminado!\n ");
                         
                    }
                }
                 if(bus==0){
                        printf("numero no existe\n");
                        }
                bus=0;
               
           } 
            
            printf("\n");
             printf("-------------\n");
            
    }while(menu<=4);
    
    
return (0);
    
}




