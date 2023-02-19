𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Binary Tree Zigzag Level Order Traversal

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Create an empty list ans to store the zigzag level order traversal of the tree.

✅ If the root is null, return the empty list.

✅ Create an empty queue q to store the nodes of the tree to be visited.

✅ Enqueue the root node into the queue.

✅ Initialize a variable x to 1 to keep track of the level of the tree.

✅ While the queue is not empty, repeat steps 7-11 for each level of the tree.

✅ Create an empty list l to store the nodes of the current level.

✅ Initialize a variable c to the current size of the queue.

✅ For each node in the current level, add its value to the list l, and enqueue its left and right child nodes into the queue if they exist.

✅ If the level is even, create a new list ll and add the values of l to it in reverse order. Add ll to the ans list.

✅ If the level is odd, add the list l to the ans list.

✅ Increment the level x.

✅ Return the ans list containing the zigzag level order traversal of the tree.
