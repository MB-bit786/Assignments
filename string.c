/*Write a program to copy string from one string to
 another string with user define function.*/
 #include"header.h"
 void sort_array(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
int main() {
  int arr[] = {1, 5, 3, 2, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  sort_array(arr, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
