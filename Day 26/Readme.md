𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Lexicographically Smallest Equivalent String

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/lexicographically-smallest-equivalent-string/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡



✅Initialize a disjoint set of size 26, representing the 26 characters in the alphabet.

✅Iterate through the characters of the two input strings s1 and s2, and for each pair of characters (s1[i], s2[i]), use the unionBySize function of the disjoint set to create an equivalence relationship between them by merging the sets they belong to. This step ensures that all characters that are equivalent in s1 and s2 are in the same set.

✅Iterate through the characters in the base string baseStr and for each character, use the findPar function of the disjoint set to find the representative character of the set that the character belongs to.

✅Append the representative character to the result string, this will be the smallest equivalent character for the current character in the base string baseStr.

✅Return the result string



By the end of the above steps, the result string will be the smallest equivalent string. The approach is using DSU for creating an equivalent relationship between the characters in s1 and s2, and then using findPar to find the smallest character in the set for each character in the base string baseStr.
