#include <iostream>
#include "SortingMethods.h"

using namespace std;

bool isSorted(int arr[], int n){
    for(int i = 0; i < n-1; i++)
        if(arr[i] > arr[i+1])
            return false;
return true;
}

int bubbleSort(int arr[], int n){
    int counter=0;
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++)
    {
        swapped = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);

                swapped = true;
            }
            if(!isSorted(arr,n))
                counter++;
        }
    // IF no two elements were swapped by inner loop,
    // then break
    if (swapped == false)
    break;
    }

    return counter;

}



int insertionSort(int sort1[], int arraySize){
    int i, key, j;
    int counter = 0;
    for (i = 1; i < arraySize; i++){
        key = sort1[i];
        j = i-1;

        while (j >= 0 && sort1[j] > key){
            sort1[j+1] = sort1[j];
            j = j-1;
            if(!isSorted(sort1,arraySize))
                counter++;
        }

    sort1[j+1] = key;
    }
    return counter;
}



int selectionSort(int sort1[], int arraySize){
    int counter = 0;
    int minIndex, i,j;

    for(i = 0; i < arraySize-1; i++){
        minIndex = i;
        for(j = i+1; j < arraySize; j++){
            if(sort1[j] < sort1[minIndex])
                minIndex = j;
        if(!isSorted(sort1,arraySize))
            counter++;
        }
        swap(sort1[i], sort1[minIndex]);
    }
    return counter;

}


