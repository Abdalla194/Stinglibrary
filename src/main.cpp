#include <iostream>

#include "stringlib.h"
using namespace std;
int main() {
  char arr[100] = "Jerry";
  STRINGLIB_H::ToUpper(arr);
  cout << arr << endl;
  STRINGLIB_H::ToLower(arr);
  cout << arr << endl;
  char arr2[100] = "Jerry";
  char arr3[100] = "Jerry";
  cout << STRINGLIB_H::CompareString(arr2, arr3) << endl;
  if (STRINGLIB_H::CompareString(arr2, arr3) == 0) {
    cout << "The Two strings are identical in length";
  } else if (STRINGLIB_H::CompareString(arr2, arr3) == 1) {
    cout << arr2 << " it's length is bigger than that of " << arr3;
  } else {
    cout << arr3 << " it's length is bigger than that of " << arr2;
  }
  char* arr4 = STRINGLIB_H::StringCopy(arr3);
  cout << endl;
  cout << arr4 << endl;
  delete[] arr4;  // to release it from the heap
  arr4 = NULL;    // to get rid of the dangling pointer
}