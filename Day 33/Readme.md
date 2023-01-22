𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Palindrome Partitioning

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/palindrome-partitioning/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Create a function called "checkPalindrome" that takes in a string, start index and end index as parameters. This function checks if the substring of the string from start index to end index is a palindrome or not.

✅ Create a function called "palindromePartition" that takes in an index, a vector of strings, a 2D vector of strings, and a string as parameters. This function partitions the given string into all possible palindrome partitions.

✅ In the "palindromePartition" function, check if the current index is equal to the length of the string. If it is, add the current partition to the output vector and return.

✅ Iterate from the current index to the end of the string.

For each iteration, check if the substring from current index to the current iterator is a palindrome using the "checkPalindrome" function.

✅ If it is a palindrome, add it to the partition vector and recursively call the "palindromePartition" function with the updated partition and the next index.

✅ After the recursive call, remove the last element from the partition vector.

✅ Return the output vector after all partitions have been found.
