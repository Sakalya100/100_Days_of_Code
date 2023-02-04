𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Permutation in String

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/permutation-in-string/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ The alphabets in a permutation that is to be searched will always be the same, and so will their count.

✅ The thing that counts in s2 is that each substring has the same number of characters as in s1. As a result, we make a hashmap that contains the count of each character in the string s1. 

✅ After that, we slide a window over the string s2 and lower the number for characters that appear in the window. 

✅ When all of the counters in the hashmap reach 0, we've found the permutation.
