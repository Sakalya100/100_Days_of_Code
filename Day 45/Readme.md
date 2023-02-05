𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Find all Anagrams in a String

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/find-all-anagrams-in-a-string/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Build map from P with frequency of characters, P = 'abc' map = ['a' = 1, 'b' = 1,'c' = 1]

✅ Initially, window Start = 0, window End = 0

✅ Traverse over string S,

✅ if a character at windowEnd exists in the map decrement that character in the map and increment the windowEnd. ( increase the window for valid anagram)

✅ if the character does not exist in the map, add the character at window start back in the map and increment windowStart (reduce the window)

✅ if windowStart and windowEnd are at the same index, increment both since the size of the window is 0.
