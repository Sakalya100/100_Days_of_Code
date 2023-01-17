𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Increment Submatrices by One

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/contest/weekly-contest-328/problems/increment-submatrices-by-one/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

We mark the boundary of the start point of adding 1 and the ending point of adding 1 for each row. By using the given steps:

✅ Initialize the 𝐧𝐱𝐧 matrix with 0.

✅ For marking the start point of the boundary, we 𝐚𝐝𝐝 +1 for each row given in the query.

✅ For marking the endpoint of the boundary, we 𝐚𝐝𝐝 -1 at the next column for each row. But if we are at the last column of the row, we mark the first column of the next row as -1 and if we are also at the last row of the matrix then we 𝐬𝐤𝐢𝐩 𝐚𝐝𝐝𝐢𝐧𝐠 -1.

✅ At last we create the required matrix by taking the count as 0 and updating it as par the values marked in the matrix's cell and assigning the count to that cell.

