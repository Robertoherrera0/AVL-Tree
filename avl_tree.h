#ifndef AVL_TREE_H_
#define AVL_TREE_H_

class Node {
 public:
  Node(int data) : data(data) {}

  int data;
  Node* left = nullptr;
  Node* right = nullptr;
  int height = 1;
};

class AVLTree {
 public:
  void insert(int data);
  void print();

 private:
  Node* head = nullptr;
};

#endif  // AVL_TREE_H_