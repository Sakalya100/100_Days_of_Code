𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Linked List Cycle II

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/linked-list-cycle-ii/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ When the two pointers meet, we know that there is a cycle in the linked list.

✅ We then reset the slow pointer to the head of the linked list and move both pointers at the same pace, one step at a time, until they meet again.

✅ The node where they meet is the starting point of the cycle.

✅ If there is no cycle in the linked list, the algorithm will return null.
