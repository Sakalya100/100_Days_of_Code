𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Search in 2D Matrix

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/search-a-2d-matrix/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Each 𝐫𝐨𝐰 𝐢𝐬 𝐬𝐨𝐫𝐭𝐞𝐝.

✅ This means that, if we 𝐥𝐢𝐧𝐞𝐚𝐫𝐥𝐲 𝐚𝐫𝐫𝐚𝐧𝐠𝐞 the elements of each row, we will have a sorted array. So we can now perform a 𝐛𝐢𝐧𝐚𝐫𝐲 𝐬𝐞𝐚𝐫𝐜𝐡 over it.

✅ A n * m matrix converted into an array: matrix[x][y] : a[x * m + y]

✅ An array can be converted into n * m matrix: a[x] : matrix[x / m][x % m]

✅ Operate the matrix as an array using the above formula

✅ Perform a binary search for the target element over the matrix
