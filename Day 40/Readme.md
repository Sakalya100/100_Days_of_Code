𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Rotate list

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/rotate-list/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ We count the total number of nodes in the list using count variable,

✅ Now the total rotations we have to do can be restricted to 𝐤= 𝐤 % 𝐜𝐨𝐮𝐧𝐭.

✅ Now we move a pointer from head equal to 𝐤 positions. This is necessary 

for the next interesting logic

✅ Now since our 𝐩𝐭𝐫 𝐢𝐬 𝐤 𝐬𝐭𝐞𝐩𝐬 ahead, it will tell us the kth position from end

i.e we iterate until 𝐩𝐭𝐫.𝐧𝐞𝐱𝐭 !==𝐧𝐮𝐥𝐥 and we move our 𝐩𝐫𝐞𝐯 pointer. Once 𝐩𝐭𝐫.𝐧𝐞𝐱𝐭===𝐧𝐮𝐥𝐥

i.e 𝐩𝐭𝐫 reaches the last node, our 𝐩𝐫𝐞𝐯 pointer will be exactly at the kth position from the end

Here kth position from the end is nothing but the number of k rotations

✅ Now simply break the list after 𝐩𝐫𝐞𝐯 node. The last node i.e 𝐩𝐭𝐫 will now point to head

i.e 𝐩𝐭𝐫.𝐧𝐞𝐱𝐭=𝐡𝐞𝐚𝐝, the 𝐧𝐞𝐱𝐭 node of 𝐩𝐫𝐞𝐯 becomes our new head and finally, 𝐩𝐫𝐞𝐯 becomes our 

last node so 𝐩𝐫𝐞𝐯.𝐧𝐞𝐱𝐭=𝐧𝐮𝐥𝐥

