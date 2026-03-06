#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumbers(int* arr, int count) {
  for (int i = 0; i <= count; i++) {  // off by one
    arr[i] = rand() % 100;
  }
}

float average(int* arr, int count) {
  int sum = 0;

  for (int i = 0; i < count; i++) {
    sum += arr[i];
  }

  return sum / count;  // integer division
}

int findMax(int* arr, int count) {
  int max = 0;

  for (int i = 0; i < count; i++) {
    if (arr[i] > max) max = arr[i];
  }

  return max;
}

int main() {
  int count;

  printf("How many numbers: ");
  scanf("%d", count);  // missing &

  int* numbers = malloc(count * sizeof(int));

  generateNumbers(numbers, count);

  printf("Average: %f\n", average(numbers, count));
  printf("Max: %d\n", findMax(numbers, count));

  for (int i = 0; i <= count; i++) {
    printf("%d\n", numbers[i]);
  }

  free(numbers);

  return 0;
}