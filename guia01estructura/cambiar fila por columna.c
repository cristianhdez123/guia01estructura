/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cristian
 *
 * Created on 31 de agosto de 2018, 04:07 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {


    int tamanioMatriz, filas, columnas;
    int fila, columna, valoringresado;
    int intercambiocolumna, intercambiofila;
    printf("Ingrese el tamaño  de la matriz:");
    scanf("%d", &tamanioMatriz);
    int matriz[tamanioMatriz][tamanioMatriz];
    
    for (fila = 0; fila < tamanioMatriz; fila++) {
        for (columna = 0; columna < tamanioMatriz; columna++) {
            printf("Ingrese el valor en la fila %d %s %d %s", fila + 1, "columna ", columna + 1, ": ");
            scanf("%d", &valoringresado);
            matriz[fila][columna] = valoringresado;
        }
    }
    printf("Matriz Ingresada : \n");
    for (fila = 0; fila < tamanioMatriz; fila++) {
        for (columna = 0; columna < tamanioMatriz; columna++) {
            printf("%d", matriz[fila][columna]);
            printf("\t");
        }
        printf("\n");
    }
    for (fila = 0; fila < tamanioMatriz; fila++) {
        for (columna = 0; columna < tamanioMatriz; columna++) {
            if (fila!=columna && fila<=columna) {
                intercambiofila = matriz[fila][columna];
                intercambiocolumna = matriz[columna][fila];
                matriz[columna][fila] = intercambiofila;
                matriz[fila][columna] = intercambiocolumna;              
            }
        }
    }
    printf("Matriz Modificada : \n");
    for (fila = 0; fila < tamanioMatriz; fila++) {
        for (columna = 0; columna < tamanioMatriz; columna++) {
            printf("%d", matriz[fila][columna]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Su matriz se intercambio correctamente");
    return 0;
}


 