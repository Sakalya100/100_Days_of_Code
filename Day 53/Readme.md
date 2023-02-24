𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Minimum Deviation in Array

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/minimize-deviation-in-array/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Traverse the vector and double all the odd vector elements. This nullifies the requirement for the 2nd operation.

✅ Now, decrease the largest vector element while it’s even.

✅ To store the vector elements in sorted manner, insert all vector elements into a Set.

✅ Greedily reduce the maximum element present in the Set

✅ If the maximum element present in the Set is odd, break the loop.

✅ Print the minimum deviation obtained.
