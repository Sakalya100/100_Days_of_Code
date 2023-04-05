𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Minimum Maximum of Array

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/minimize-maximum-of-array/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Initialize 𝐭𝐨𝐭𝐚𝐥_𝐬𝐮𝐦 and result to 0.

✅ Loop through the 𝐧𝐮𝐦𝐬 array from index 0 to 𝐥𝐞𝐧(𝐧𝐮𝐦𝐬)-1.

✅ For each index, add the value at that index to the 𝐭𝐨𝐭𝐚𝐥_𝐬𝐮𝐦.

✅ Calculate the 𝐦𝐚𝐱𝐢𝐦𝐮𝐦 of the current result and the division of 𝐭𝐨𝐭𝐚𝐥_𝐬𝐮𝐦 and 𝐢𝐧𝐝𝐞𝐱+1 using 𝐢𝐧𝐭𝐞𝐠𝐞𝐫 𝐝𝐢𝐯𝐢𝐬𝐢𝐨𝐧 //.

✅ Update the result with the maximum value.

✅ Repeat steps 3-5 for all indices.

✅ Return the result as the minimum maximum of the array.
