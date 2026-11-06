# Stringslab

Stringslab is a small C++ library of utilities for working with null-terminated
character arrays. It provides in-place ASCII case conversion, string-length
comparison, and string copying.

## Features

- Convert lowercase ASCII letters to uppercase with `ToUpper`.
- Convert uppercase ASCII letters to lowercase with `ToLower`.
- Compare two strings by length with `CompareString`.
- Copy a string into a newly allocated character array with `StringCopy`.

## Requirements

- A C++ compiler with C++11 support (for example, GCC or Clang).

## Build and run the demo

From the project root, compile the demo and library implementation:

```sh
g++ -std=c++11 -Wall -Wextra -pedantic -Iinclude \
  src/main.cpp src/stringlib.cpp -o stringslab
./stringslab
```

The demo converts `"Jerry"` to uppercase and lowercase, compares two strings
by length, and prints a copy. Its output is:

```text
JERRY
jerry
0
The Two strings are identical in length
Jerry
```

## API

Include `stringlib.h` and call the functions in the global namespace:

```cpp
#include "stringlib.h"

int main() {
  char text[] = "Jerry";
  ToUpper(text);  // text is now "JERRY"
  ToLower(text);  // text is now "jerry"

  char* copy = StringCopy(text);
  // Use copy...
  delete[] copy;
}
```

### `void ToUpper(char* text)` and `void ToLower(char* text)`

Convert ASCII letters in the null-terminated character array in place.
Characters outside the corresponding ASCII letter range are unchanged.

### `int CompareString(char* first, char* second)`

Compares string lengths, not character contents. It returns:

- `0` if the strings have equal lengths
- `1` if `first` is longer
- `2` if `second` is longer

### `char* StringCopy(char* text)`

Returns a dynamically allocated copy of `text`. The caller owns the returned
array and must release it with `delete[]`:

The example above releases the returned array with `delete[]`.

## Project layout

```text
include/stringlib.h   Public function declarations
src/stringlib.cpp     Utility implementations
src/main.cpp          Demo program
```