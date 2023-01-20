𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Two Sum

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/two-sum/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ We need to find 2 numbers a, b so that a + b = target.

✅ We need a HashMap data structure to store elements in the past, let's name it seen.

✅ The idea is that we iterate b as each element in nums and check if we found a (where a = target - b) in the past.

✅ If a exists in seen then we already found 2 numbers a and b, so that a + b = target, just output their indices.

✅ Else add b to the seen.
