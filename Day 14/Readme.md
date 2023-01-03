Problem Solved: Delete Columns to Make sorted

Problem Link: https://leetcode.com/problems/delete-columns-to-make-sorted/



📌𝐈𝐧𝐭𝐮𝐢𝐭𝐢𝐨𝐧

✅Iterate in column-major order (the outer loop is columns, the inner loop is rows) and make sure that each element in the column is greater than or equal to the one before it. 

✅In other words, ensure that 𝐬𝐭𝐫𝐬[𝐣][𝐢] < 𝐬𝐭𝐫𝐬[𝐣+1][𝐢]. If any element breaks this rule, then we delete the column and move on



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅Iterate in column-major order but starting at the second row each time. 

✅If any element is less than the element in the previous row, we increase the answer and break out of the loop since we don't need to check the rest of them.

✅In other words, we just check to see if strs[j][i] < strs[j+1][i] at any point. 

✅If it is, we know it isn't sorted properly and we want to delete the column. 

✅We just return ans at the end.
