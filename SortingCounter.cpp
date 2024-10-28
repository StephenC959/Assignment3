#include <iostream>
#include "SortingMethods.h"

using namespace std;

void fillArray(int arr[], int n){
    for(int i = 0; i < n; i++)
        arr[i] = (rand() % n) + 1;
}

void outputArray(int arr[], int n){
    for(int j = 0; j < n - 1; j++){
        cout << arr[j] << ", ";
    }
    cout << arr[n-1] << endl;
}

void formatting(){
    cout << endl;
    for(int i =0; i <25; i++)
    cout << "----";
    cout <<endl;
}



int main(){

    static int TEST_CASES = 25;
    int randomSize, complexity;
    double averageCase = 0;
    double averageSize = 0;

    //interesting Cases
    int almostSortedSel[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int backwardsSel[] = {25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

    int almostSortedIn[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int backwardsIn[] = {25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

    int almostSortedBub[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int backwardsBub[] = {25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};



//*****************************************Selection Sorting****************************************************//

formatting();

//selection sort for large arrays size of 1-100
cout << "Sorting using selection sort:\n\n";

for(int i = 0; i < TEST_CASES; i++){
    int randomSize = (rand()%100)+1;                                                  //designate random size(75-100) for array
    averageSize += randomSize;
    int* arr1 = new int[randomSize];
    fillArray(arr1, randomSize);                                                      //fill array of random size
//    cout << "ARRAY " << i+1 << " UNSORTED: Size of " << randomSize << ".\n";
//    outputArray(arr1,randomSize);
    complexity = selectionSort(arr1, randomSize);                                     //sort array
    averageCase += complexity;
//    cout << "ARRAY " << i+1 << " SORTED: " << complexity <<  " swaps.\n";
//    outputArray(arr1, randomSize);
}

cout << "AVERAGE COMPLEXITY: " << averageCase/25.0 << endl;
cout << "AVERAGE SIZE OF ARRAY: " << averageSize/25.0 << endl << endl;


//selection sort for small arrays size of 1-25
averageCase = 0;
averageSize = 0;

for(int i = 0; i < TEST_CASES; i++){
    int randomSize = (rand()%25)+1;
    averageSize += randomSize;
    int* arr1 = new int[randomSize];
    fillArray(arr1, randomSize);
//    cout << "ARRAY " << i+1 << " UNSORTED: Size of " << randomSize << ".\n";
//    outputArray(arr1,randomSize);
    complexity = selectionSort(arr1, randomSize);
    averageCase += complexity;
//    cout << "ARRAY " << i+1 << " SORTED: " << complexity <<  " swaps.\n";
//    outputArray(arr1, randomSize);
}

cout << "AVERAGE COMPLEXITY: " << averageCase/25.0 << endl;
cout << "AVERAGE SIZE OF ARRAY: " << averageSize/25.0 << endl << endl;

//selection sort for larger arrays size of 1-1000
averageCase = 0;
averageSize = 0;

for(int i = 0; i < TEST_CASES; i++){
    int randomSize = (rand()%1000)+1;
    averageSize += randomSize;
    int* arr1 = new int[randomSize];
    fillArray(arr1, randomSize);
//    cout << "ARRAY " << i+1 << " UNSORTED: Size of " << randomSize << ".\n";
//    outputArray(arr1,randomSize);
    complexity = selectionSort(arr1, randomSize);
    averageCase += complexity;
//    cout << "ARRAY " << i+1 << " SORTED: " << complexity <<  " swaps.\n";
//    outputArray(arr1, randomSize);
}

cout << "AVERAGE COMPLEXITY: " << averageCase/25.0 << endl;
cout << "AVERAGE SIZE OF ARRAY: " << averageSize/25.0 << endl << endl;


complexity = selectionSort(almostSortedSel, 25);
cout << "Complexity for almost sorted array " << complexity << endl;

complexity = selectionSort(backwardsSel, 25);
cout << "Complexity for backwards array " << complexity << endl;


//*****************************************Bubble Sorting****************************************************//

formatting();

//bubble sort for large arrays size of 1-100
cout << "Sorting using bubble sort:\n\n";
averageCase = 0;
averageSize = 0;

for(int i = 0; i < TEST_CASES; i++){
    int randomSize = (rand()%100)+1;                                                  //designate random size(75-100) for array
    averageSize += randomSize;
    int* arr1 = new int[randomSize];
    fillArray(arr1, randomSize);                                                      //fill array of random size
//    cout << "ARRAY " << i+1 << " UNSORTED: Size of " << randomSize << ".\n";
//    outputArray(arr1,randomSize);
    complexity = bubbleSort(arr1, randomSize);                                     //sort array
    averageCase += complexity;
//    cout << "ARRAY " << i+1 << " SORTED: " << complexity <<  " swaps.\n";
//    outputArray(arr1, randomSize);
}

cout << "AVERAGE COMPLEXITY: " << averageCase/25.0 << endl;
cout << "AVERAGE SIZE OF ARRAY: " << averageSize/25.0 << endl << endl;


//bubble sort for small arrays size of 1-25
averageCase = 0;
averageSize = 0;

for(int i = 0; i < TEST_CASES; i++){
    int randomSize = (rand()%25)+1;
    averageSize += randomSize;
    int* arr1 = new int[randomSize];
    fillArray(arr1, randomSize);
//    cout << "ARRAY " << i+1 << " UNSORTED: Size of " << randomSize << ".\n";
//    outputArray(arr1,randomSize);
    complexity = bubbleSort(arr1, randomSize);
    averageCase += complexity;
//    cout << "ARRAY " << i+1 << " SORTED: " << complexity <<  " swaps.\n";
//    outputArray(arr1, randomSize);
}

cout << "AVERAGE COMPLEXITY: " << averageCase/25.0 << endl;
cout << "AVERAGE SIZE OF ARRAY: " << averageSize/25.0 << endl << endl;

//bubble sort for larger arrays size of 1-1000
averageCase = 0;
averageSize = 0;

for(int i = 0; i < TEST_CASES; i++){
    int randomSize = (rand()%1000)+1;
    averageSize += randomSize;
    int* arr1 = new int[randomSize];
    fillArray(arr1, randomSize);
//    cout << "ARRAY " << i+1 << " UNSORTED: Size of " << randomSize << ".\n";
//    outputArray(arr1,randomSize);
    complexity = bubbleSort(arr1, randomSize);
    averageCase += complexity;
//    cout << "ARRAY " << i+1 << " SORTED: " << complexity <<  " swaps.\n";
//    outputArray(arr1, randomSize);
}

cout << "AVERAGE COMPLEXITY: " << averageCase/25.0 << endl;
cout << "AVERAGE SIZE OF ARRAY: " << averageSize/25.0 << endl << endl;

complexity = bubbleSort(almostSortedBub, 25);
cout << "Complexity for almost sorted array " << complexity << endl;

complexity = selectionSort(backwardsBub, 25);
cout << "Complexity for backwards array " << complexity << endl;

//****************************************Insertion Sort*****************************************************//

formatting();

//insertion sort for large arrays size of 1-100
cout << "Sorting using insertion sort:\n\n";
averageCase = 0;
averageSize = 0;

for(int i = 0; i < TEST_CASES; i++){
    int randomSize = (rand()%25)+75;                                                  //designate random size(75-100) for array
    averageSize += randomSize;
    int* arr1 = new int[randomSize];
    fillArray(arr1, randomSize);                                                      //fill array of random size
//    cout << "ARRAY " << i+1 << " UNSORTED: Size of " << randomSize << ".\n";
//    outputArray(arr1,randomSize);
    complexity = insertionSort(arr1, randomSize);                                     //sort array
    averageCase += complexity;
//    cout << "ARRAY " << i+1 << " SORTED: " << complexity <<  " swaps.\n";
//    outputArray(arr1, randomSize);
}

cout << "AVERAGE COMPLEXITY: " << averageCase/25.0 << endl;
cout << "AVERAGE SIZE OF ARRAY: " << averageSize/25.0 << endl << endl;


//insertion sort for small arrays size of 1-25
averageCase = 0;
averageSize = 0;

for(int i = 0; i < TEST_CASES; i++){
    int randomSize = (rand()%25)+1;
    averageSize += randomSize;
    int* arr1 = new int[randomSize];
    fillArray(arr1, randomSize);
//    cout << "ARRAY " << i+1 << " UNSORTED: Size of " << randomSize << ".\n";
//    outputArray(arr1,randomSize);
    complexity = insertionSort(arr1, randomSize);
    averageCase += complexity;
//    cout << "ARRAY " << i+1 << " SORTED: " << complexity <<  " swaps.\n";
//    outputArray(arr1, randomSize);
}

cout << "AVERAGE COMPLEXITY: " << averageCase/25.0 << endl;
cout << "AVERAGE SIZE OF ARRAY: " << averageSize/25.0 << endl << endl;

//insertion sort for larger arrays size of 1-1000
averageCase = 0;
averageSize = 0;

for(int i = 0; i < TEST_CASES; i++){
    int randomSize = (rand()%1000)+1;
    averageSize += randomSize;
    int* arr1 = new int[randomSize];
    fillArray(arr1, randomSize);
//    cout << "ARRAY " << i+1 << " UNSORTED: Size of " << randomSize << ".\n";
//    outputArray(arr1,randomSize);
    complexity = insertionSort(arr1, randomSize);
    averageCase += complexity;
//    cout << "ARRAY " << i+1 << " SORTED: " << complexity <<  " swaps.\n";
//    outputArray(arr1, randomSize);
}

cout << "AVERAGE COMPLEXITY: " << averageCase/25.0 << endl;
cout << "AVERAGE SIZE OF ARRAY: " << averageSize/25.0 << endl << endl;

complexity = insertionSort(almostSortedIn, 25);
cout << "Complexity for almost sorted array " << complexity << endl;

complexity = insertionSort(backwardsIn, 25);
cout << "Complexity for backwards array " << complexity << endl;






return 0;
}
