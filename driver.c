#include <stdio.h>
#include <time.h>
#include "mySearch.h"

int main() {
    //int array[] = {1,5,8,10,22,55,66,88,100,150};
    int tamanho = 100000;
    int array[tamanho];
    int valor = -1;

    create_random_array(array,tamanho);
    insertionSort(array,tamanho);

    for (int i=0; i < tamanho; i++) {
        printf("%d \n", array[i]);
    }

    int time_before = clock();
    int index = linearSearch(array,sizeof(array)/sizeof(array[0]),valor);
    int time_after = clock();
    printf("Time consumed in linear search is %dms. Index: %d \n", time_after - time_before, index);

    int time_before2 = clock();
    int index2 = binarySearch(array,sizeof(array)/sizeof(array[0]),valor);
    int time_after2 = clock();
    printf("Time consumed in binary search is %dms. Index: %d \n", time_after2 - time_before2, index2);

    return 0;
}