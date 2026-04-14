#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate random numbers and store them in an array
int generateRandomNumbers(int* array, int size) {
  for (int i = 0; i < size; i++) {
    array[i] = rand() % 100;
  }
  return 0;
}

// Function to calculate the average of numbers in an array
float calculateAverage(int* array, int size) {
  if (size == 0) {
    printf("Error: Cannot calculate average of zero numbers\n");
    return 0.0;
  }
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  return (float)sum / size;
}

// Function to find the maximum number in an array
int findMaximum(int* array, int size) {
  if (size == 0) {
    printf("Error: Cannot find maximum of zero numbers\n");
    return 0;
  }
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max) max = array[i];
  }
  return max;
}

int main() {
  int numberOfValues;
  printf("How many numbers: ");
  scanf("%d", &numberOfValues);
  if (numberOfValues <= 0) {
    printf("Error: Number of values must be greater than zero\n");
    return -1;
  }
  int* numbers = malloc(numberOfValues * sizeof(int));
  if (numbers == NULL) {
    printf("Memory allocation failed\n");
    return -1;
  }
  srand(time(NULL));
  generateRandomNumbers(numbers, numberOfValues);
  printf("Average: %f\n", calculateAverage(numbers, numberOfValues));
  printf("Max: %d\n", findMaximum(numbers, numberOfValues));
  for (int i = 0; i < numberOfValues; i++) {
    printf("%d\n", numbers[i]);
  }
  free(numbers);
  return 0;
}