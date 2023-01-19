𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Sub Array Sums divisible by k

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/subarray-sums-divisible-by-k/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ We loop over the array, calculating the 𝐩𝐫𝐞𝐟𝐢𝐱𝐒𝐮𝐦 on the way. We don't need to store this as they are never reused. We maintain the count of every 𝐬𝐮𝐦%𝐤 we can get.

✅ If we get a repetition, this index can be paired by any of the other indices that have the same 𝐬𝐮𝐦%𝐤, and hence contributes 𝐜𝐨𝐮𝐧𝐭[𝐬𝐮𝐦%𝐤] to the total.

✅ For considering the case of the prefix Sums being themselves divisible by k and the case of the whole array being a subarray whose sum is divisible by k, we need to initialize 𝐜𝐨𝐮𝐧𝐭[0] = 1.
