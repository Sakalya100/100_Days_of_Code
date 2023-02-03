𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Binary Search

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/binary-search/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Begin with an interval of the whole vector from start to end, 0 to nums.size() - 1.

✅ If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. end = mid - 1

✅ Otherwise, narrow it to the upper half. start = mid + 1

✅ Repeatedly check until the value is found or the interval is empty. else return -1
