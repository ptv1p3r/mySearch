//
// Created by v1p3r on 17-03-2017.
//
#include <stdlib.h>
#include "mySearch.h"

#define NOT_FOUND -1

int linearSearch(int *array, int tamanho, int elemento){
    int answer = NOT_FOUND;

    for (int i=0; i < tamanho; i++){
        if(array[i] == elemento){
            answer = i;
        }
    }

    return answer;
}

int bestLinearSearch(int *array, int tamanho, int elemento){
    for (int i=0; i < tamanho; i++){
        if(array[i] == elemento){
            return i;
        }
    }

    return NOT_FOUND;
}

int binarySearch(int *array, int tamanho, int elemento){

    int p = 0;
    int r = tamanho - 1;
    int q = 0;

    while (p <= r){
        q = (p+r)/2;

        if (array[q] == elemento) {
            return q;
        } else if (array[q] > elemento){
            r = q - 1;
        } else {
            p = q + 1;
        }
    }

    return NOT_FOUND;
}

void insertionSort(int *array, int tamanho){

    int i, j;
    int key;

    for (i = 1 ; i < tamanho; i++){
        key = array[i];
        j = i -1;

        while((j >= 0) && (array[j] > key)){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;
    }
}

int get_random_number(int min, int max) {
    return (min + rand() % max);
}

void create_random_array(int *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        array[i] = get_random_number(0,tamanho);
    }
}





