#include "stringlib.h"

#include <iostream>
void ToUpper(char* arr) {
  int i = 0;
  while (arr[i] != '\0') {
    if (arr[i] >= 'a' && arr[i] <= 'z') {
      arr[i] -= 32;
    }
    i++;
  }
}
void ToLower(char* arr) {
  int i = 0;
  while (arr[i] != '\0') {
    if (arr[i] >= 'A' && arr[i] <= 'Z') {
      arr[i] += 32;
    }
    i++;
  }
}
// Compares the lengths of the strings and return a number based on that
int CompareString(char* arr, char* arr2) {
  int i = 0;
  while (arr[i] != '\0') {
    i++;
  }
  int j = 0;
  while (arr2[j] != '\0') {
    j++;
  }
  if (i == j) {
    return 0;
  } else if (i > j) {
    return 1;
  } else {
    return 2;
  }
}
char* StringCopy(char* arr) {
  int length = 0;
  while (arr[length] != '\0') length++;
  char* arr2 = new char[length + 1];
  for (int i = 0; i <= length; i++) arr2[i] = arr[i];
  return arr2;
}