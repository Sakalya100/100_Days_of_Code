𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Container With Most Water

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/container-with-most-water/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ We can see that the area of the container is limited by the smallest side, so we need to know what the smallest side is every iterations

✅ The area of a container is (𝐫𝐢𝐠𝐡𝐭 - 𝐥𝐞𝐟𝐭) multiplied by the 𝐬𝐦𝐚𝐥𝐥𝐞𝐬𝐭𝐒𝐢𝐝𝐞.

✅ If the area is greater than our result, we have a new result

✅ When moving the left or right pointer, we want to get rid of the smaller side, so iterate from that side

