𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Minimum Distance Between BST Nodes

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/minimum-distance-between-bst-nodes/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Initiate variable min and previous outside the function. (min is the ans and previous will keep track of previous nodes).

✅ Create one more function InOrder that helps in inOrder Traversal.

✅ The code for inOrder is simple Inorder(left), compute if root.val - previous < min.

✅ Inorder(right);

✅ finally call Inorder from main function.

✅ Return min.
