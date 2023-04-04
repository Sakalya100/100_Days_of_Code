𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Optimal Partition of String

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/optimal-partition-of-string/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ We will 𝐢𝐭𝐞𝐫𝐚𝐭𝐞 𝐭𝐡𝐫𝐨𝐮𝐠𝐡 the given string s.

✅ For each character in s, we will maintain the 𝐥𝐚𝐬𝐭 𝐩𝐨𝐬𝐢𝐭𝐢𝐨𝐧 seen for that character.

✅ We will also maintain the 𝐥𝐚𝐬𝐭 𝐞𝐧𝐝 𝐩𝐨𝐬𝐢𝐭𝐢𝐨𝐧 seen in a partition.

✅ If the last position seen for the current character is greater than or equal to the last end position seen, we have found a new partition.

✅ We increment the number of partitions seen and update the last end position seen.

✅ Finally, we return the total number of partitions seen.

