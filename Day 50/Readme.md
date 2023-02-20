𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Move Zeroes

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/move-zeroes/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ We use i to keep track of the position of the first zero in the list (which changes as we go).

✅ We use j to keep track of the first non-zero value after the first zero (which is pointed by i).

✅ Each time we have i correctly pointing to a zero and j correctly pointing to the first non-zero after i, we swap the values stored at i and j.

✅ By doing this, we move zeros toward the end of the list gradually until j reaches the end.

✅ And when it does, we are done.
