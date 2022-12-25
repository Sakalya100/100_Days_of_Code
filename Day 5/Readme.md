𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝:  Longest Subsequence with Limited Sum

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/longest-subsequence-with-limited-sum/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

- Sort input A, since we are concerned about the sum and don't care about the order.

- Calculate the prefix sum of A, since we want to know the accumulated sum.

- Binary search each query q in query, and the index is the result.

return result res.
