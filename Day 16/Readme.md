Problem Solved: Minimum Number of Arrows to Burst Balloon

Problem Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡



✅Sort intervals/pairs in 𝐢𝐧𝐜𝐫𝐞𝐚𝐬𝐢𝐧𝐠 𝐨𝐫𝐝𝐞𝐫 of the end position

✅Finding the 𝐜𝐨𝐦𝐦𝐨𝐧 𝐚𝐫𝐞𝐚 𝐨𝐟 𝐭𝐡𝐞 𝐜𝐮𝐫𝐫𝐞𝐧𝐭 𝐢𝐧𝐭𝐞𝐫𝐯𝐚𝐥 with start and end, if they 𝐢𝐧𝐭𝐞𝐫𝐬𝐞𝐜𝐭 (for example { [1,6], [2,8] } these intervals intersect common area is [2,6])

✅Else if no common area update start and end to current interval and increment 𝐚𝐫𝐫𝐨𝐰 𝐜𝐨𝐮𝐧𝐭
