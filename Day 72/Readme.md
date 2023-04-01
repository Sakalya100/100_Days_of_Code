𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Binary Search

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/binary-search/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Begin with an interval of the whole vector from start to end, 0 to 𝐧𝐮𝐦𝐬.𝐬𝐢𝐳𝐞() - 1.

✅ If the value of the search key is 𝐥𝐞𝐬𝐬 𝐭𝐡𝐚𝐧 𝐭𝐡𝐞 𝐢𝐭𝐞𝐦 𝐢𝐧 𝐭𝐡𝐞 𝐦𝐢𝐝𝐝𝐥𝐞 of the interval, narrow the interval to the lower half => 𝐞𝐧𝐝 = 𝐦𝐢𝐝 - 1

✅ Otherwise, narrow it to the upper half => 𝐬𝐭𝐚𝐫𝐭 = 𝐦𝐢𝐝 + 1

✅ Repeatedly check until the value is found or the interval is empty. else 𝐫𝐞𝐭𝐮𝐫𝐧 -1
