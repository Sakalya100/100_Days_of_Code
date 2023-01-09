Problem Solved: Binary Tree PreOrder Traversal

Problem Link: https://leetcode.com/problems/binary-tree-preorder-traversal/





📌Recursive 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅Check if the current node is empty or Null.

✅Display the data part of the root (or current node)

✅Traverse the left subtree by recursively calling the preorder function.

✅Traverse the right subtree by recursively calling the preorder function.



📌𝐈𝐭𝐞𝐫𝐚𝐭𝐢𝐯𝐞 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅Create an empty stack, Push the root node to the stack.

✅Do the following while the stack is not empty.

         ✔️Pop an item from the stack and print it.

         ✔️Push the right child of the popped item to stack.

         ✔️Push the left child of a popped item to stack.



📌𝐎𝐩𝐭𝐢𝐦𝐢𝐳𝐞𝐝 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡 (𝐌𝐨𝐫𝐫𝐢𝐬 𝐓𝐫𝐚𝐯𝐞𝐫𝐬𝐚𝐥)

✅If the left child is null, print the current node data. Move to the right child. 

✅Else, Make the right child of the inorder predecessor point to the current node. Two cases arise: 

          a) The right child of the inorder predecessor already points to the current node. Set the right child to NULL. Move to the right child of the current node. 

          b) The right child is NULL. Set it to the current node. Print the current node’s data and move to the left child of the current node. 

✅Iterate until the current node is not NULL.
