#include <stdio.h>

int findMax(int arr[], int size) {
  int max = arr[0]; 
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int n, i; 

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n]; 

  printf("Enter %d integers:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int max = findMax(arr, n); 

  printf("Array elements: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  printf("\nMaximum value: %d\n", max); 

  return 0;
}