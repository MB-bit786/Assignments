//Write a Program of find the element of given position from the array


#include"header.h"
int getElementAtPosition(int arr[], int n, int position) {
    if (position >= 0 && position < n) {
        return arr[position];
    } else {
        printf("Invalid position!\n");
        return -1; // Return -1 to indicate an error
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int position;
    
    printf("Enter the position of the element: ");
    scanf("%d", &position);
    
    int element = getElementAtPosition(arr, 5, position);
    
    if (element != -1) {
        printf("Element at position %d: %d\n", position, element);
    }
    
    return 0;
}
