#include <algorithm>
#include <iostream>

#include "stack_container.h"

int main() {
  base::StackVector<int, 10> v;
  for (size_t i = 0; i < 10; ++i) v->push_back(i);

  for (int i : v.container()) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
