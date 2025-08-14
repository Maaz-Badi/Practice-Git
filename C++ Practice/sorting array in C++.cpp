#include <iostream>

void bubbleSort(int array[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {5, 2, 9, 1, 20, 6, 3, 8, 7, 4, 0, 10, 12, 11, 15, 14, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    std::cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)     
        std::cout << arr[i] << " "; 

    return 0;
}