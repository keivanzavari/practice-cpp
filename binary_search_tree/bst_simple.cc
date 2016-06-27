#include "bst_simple.h"

namespace jw {

BSTNode* GetNewNode(int value) {
  BSTNode* node = new BSTNode;
  node->data = value;
  node->left = nullptr;
  node->right = nullptr;

  return node;
}

BSTNode* Insert(BSTNode* node, int value) {
  if (node == nullptr) {
    node = GetNewNode(value);
    return node;
  }

  if (value < node->data) {
    node->left = Insert(node->left, value);
  } else if (value > node->data) {
    node->right = Insert(node->right, value);
  }

  return node;
}

bool Search(BSTNode* node, int value) {
  if (node == nullptr) {
    return false;
  }

  if (value < node->data) {
    return Search(node->left, value);
  } else if (value > node->data) {
    return Search(node->right, value);
  } else {
    return true;
  }
}

}  // namespace jw