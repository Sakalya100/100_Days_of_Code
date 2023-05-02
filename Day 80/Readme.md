𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Sign of the Product of an Array

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/sign-of-the-product-of-an-array/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Loop through the entire array.

✅ If we encounter a negative number we maintain a count of the negative numbers

✅ In case we encounter a 0(zero), we return 0. As anything multiplied y zero will always remain zero.

✅ At the end we check if the number of negative numbers is a multiple of 2 or not. If yes return 1. Otherwise return -1.

✅ Negative numbers multiplied even number of times leads to positive output and multiplied odd number of times leads to negative output. 
