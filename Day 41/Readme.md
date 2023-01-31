𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Reverse Linked List

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/reverse-linked-list/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ We are going to use 3 variables: prevNode, head , and nextNode, that you can easily guess what are meant to represent as we go;

✅ We will initialize prevNode to NULL, while nextNode can stay empty;

✅ We are then going to loop until our current main iterator (head) is truthy (ie: not NULL), which would imply we reached the end of the list;

✅ During the iteration, we first of all update nextNode so that it acquires its namesake value, the one of the next node indeed: 𝐡𝐞𝐚𝐝->𝐧𝐞𝐱𝐭;

✅ We then proceed "reversing" 𝐡𝐞𝐚𝐝->𝐧𝐞𝐱𝐭 and assigning it the value of prevNode, while prevNode will become take the current value of head;

✅ finally, we update the head with the value we stored in nextNode and go on with the loop until we can. After the loop, we return the prevNode.
