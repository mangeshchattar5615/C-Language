#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int low, int high, int key) {
  while (low <= high) {
  int mid = low + (high - low) / 2;

  if (arr[mid] == key)
  return mid;
  else if (arr[mid] < key)
  low = mid + 1;
  else
  high = mid - 1;
  }

  return -1; // Key not found
}

int main() {
  //int argv;
  int arr[] = {5, 2, 8, 12, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Fork a child process
  pid_t pid = fork();

  if (pid == 0) {
  // Child process
  char *args[] = {"binary_search", NULL};

  // Execute the child program using execve()
  execve("./binary_search", args, NULL);
  } else if (pid > 0) {
  // Parent process
  wait(NULL);

  // Sort the array
  for (int i = 0; i < n - 1; i++) {
  for (int j = 0; j < n - i - 1; j++) {
  if (arr[j] > arr[j + 1]) {
  int temp = arr[j];
  arr[j] = arr[j + 1];
  arr[j + 1] = temp;
  }
  }
  }

  // Print the sorted array
  printf("Sorted array: ");
  for (int i = 0; i < n; i++) {
  printf("%d ", arr[i]);
  }
  printf("\n");

  // Pass the sorted array to the child process through command line arguments
  char str[10];
  for (int i = 0; i < n; i++) {
  sprintf(str, "%d", arr[i]);
  arr[i + 1] = strdup(str);
  }

  // Execute the child program using execve()
  execve("./binary_search", arr, NULL);
  } else {
  // Forking failed
  printf("Forking failed.\n");
  return 1;
  }

  return 0;
}

