#include <iostream>
#include <vector>

#include "avl_tree.h"

int main() {

  std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  AVLTree tree;
  for (auto& i : vec) {
    tree.insert(i);
    tree.print();
    std::cout << std::string(40, '-') << std::endl;
  }
}