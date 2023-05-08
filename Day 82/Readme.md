𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Matrix Diagonal Sum
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://lnkd.in/dae4QXiX

📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡
✅ We can iterate over each row of the matrix and add the diagonal elements to a result variable.
✅ The first diagonal element is mat[i][i], and the second diagonal element is mat[i][n - i - 1].
✅ If the matrix has an odd size, we need to subtract the center element from the result, as it will have been added twice.
✅ Finally, we can return the result.
