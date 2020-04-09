#include <algorithm>
#include <iostream>
#include <numeric>

#include "stack_container.h"

int main() {
  base::StackVector<int, 10> v;
  v->resize(10, 0);
  std::iota(v->begin(), v->end(), 0);

  std::for_each(v->begin(), v->end(), [](int i) { std::cout << i << " "; });
  std::cout << std::endl;

  return 0;
}
