//Write a program to find out the max number from given 10 elements of array//
#include"header.h"
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int max = arr[0];
  for (int i = 1; i < 10; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  printf("The maximum element is %d\n", max);
  return 0;
}
