𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: String Compression

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/string-compression/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Initialize two pointers, i and j, to 0. Pointer i will be used to traverse the input array, while pointer j will be used to modify the array in place.

✅ While i is less than the length of the input array, do the following:

         ✅ Initialize a variable count to 1. This variable will keep track of the number of consecutive repeating characters in the input array.

         ✅ While i is less than the length of the input array minus 1, and the character at index i is equal to the character at index i+1, increment count and i.

         ✅ Write the character at index i to the output array at index j, and increment both i and j.

         ✅ If count is greater than 1, convert it to a string and write each character of the string to the output array at index j, incrementing j for each character.

✅ Return j, which is the length of the compressed array.
