𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Flip String to Monotone Increasing

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/flip-string-to-monotone-increasing/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ For Monotone Increasing String, there must be an index where all the values on the 𝐥𝐞𝐟𝐭-𝐡𝐚𝐧𝐝 𝐬𝐢𝐝𝐞 are "0" and all the values on the 𝐫𝐢𝐠𝐡𝐭-𝐡𝐚𝐧𝐝 𝐬𝐢𝐝𝐞 are "1".

✅ So now to convert the input string into Monotone Increasing String, We need to choose an index and 𝐟𝐥𝐢𝐩 𝐚𝐥𝐥 "1"s to "0" on the left and 𝐟𝐥𝐢𝐩 𝐚𝐥𝐥 "0"s to "1".

✅ So we need to choose an index such that (Count of "1"s on the left-hand side + Count of "0"s on the right-hand side) is minimum.
