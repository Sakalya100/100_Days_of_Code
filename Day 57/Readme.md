𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Largest Rectangle in Histogram

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/largest-rectangle-in-histogram/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ First we will take two arrays 𝐥𝐞𝐟𝐭_𝐬𝐦𝐚𝐥𝐥𝐞𝐫[] and 𝐫𝐢𝐠𝐡𝐭_𝐬𝐦𝐚𝐥𝐥𝐞𝐫[] and initialize it with -1 and n respectively.

✅ For every index, we will store the index of previous smaller and next smaller element in left_smaller and right_smaller arrays respectively. - 𝐎(𝐧) 𝐭𝐢𝐦𝐞

✅ Now for every element we will calculate area by taking this 𝐢𝐭𝐡 element as the smallest in the range 𝐥𝐞𝐟𝐭_𝐬𝐦𝐚𝐥𝐥𝐞𝐫[𝐢] and 𝐫𝐢𝐠𝐡𝐭_𝐬𝐦𝐚𝐥𝐥𝐞𝐫[𝐢] and multiplying it with the difference of 𝐥𝐞𝐟𝐭_𝐬𝐦𝐚𝐥𝐥𝐞𝐫[𝐢] and 𝐫𝐢𝐠𝐡𝐭_𝐬𝐦𝐚𝐥𝐥𝐞𝐫[𝐢].

✅ Each time we update the max_area according to the area obtained in the previous step.
