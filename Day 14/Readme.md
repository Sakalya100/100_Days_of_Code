Problem Solved: Delete Columns to Make sorted

Problem Link: https://leetcode.com/problems/delete-columns-to-make-sorted/



๐๐๐ง๐ญ๐ฎ๐ข๐ญ๐ข๐จ๐ง

โIterate in column-major order (the outer loop is columns, the inner loop is rows) and make sure that each element in the column is greater than or equal to the one before it. 

โIn other words, ensure that ๐ฌ๐ญ๐ซ๐ฌ[๐ฃ][๐ข] < ๐ฌ๐ญ๐ซ๐ฌ[๐ฃ+1][๐ข]. If any element breaks this rule, then we delete the column and move on



๐๐๐ฉ๐ฉ๐ซ๐จ๐๐๐ก

โIterate in column-major order but starting at the second row each time. 

โIf any element is less than the element in the previous row, we increase the answer and break out of the loop since we don't need to check the rest of them.

โIn other words, we just check to see if strs[j][i] < strs[j+1][i] at any point. 

โIf it is, we know it isn't sorted properly and we want to delete the column. 

โWe just return ans at the end.
