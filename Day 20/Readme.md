Problem Solved: Binary Tree PreOrder Traversal

Problem Link: https://leetcode.com/problems/binary-tree-preorder-traversal/





πRecursive ππ©π©π«π¨πππ‘

βCheck if the current node is empty or Null.

βDisplay the data part of the root (or current node)

βTraverse the left subtree by recursively calling the preorder function.

βTraverse the right subtree by recursively calling the preorder function.



πππ­ππ«ππ­π’π―π ππ©π©π«π¨πππ‘

βCreate an empty stack, Push the root node to the stack.

βDo the following while the stack is not empty.

         βοΈPop an item from the stack and print it.

         βοΈPush the right child of the popped item to stack.

         βοΈPush the left child of a popped item to stack.



πππ©π­π’π¦π’π³ππ ππ©π©π«π¨πππ‘ (ππ¨π«π«π’π¬ ππ«ππ―ππ«π¬ππ₯)

βIf the left child is null, print the current node data. Move to the right child. 

βElse, Make the right child of the inorder predecessor point to the current node. Two cases arise: 

          a) The right child of the inorder predecessor already points to the current node. Set the right child to NULL. Move to the right child of the current node. 

          b) The right child is NULL. Set it to the current node. Print the current nodeβs data and move to the left child of the current node. 

βIterate until the current node is not NULL.
