𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Single Element in a Sorted Array

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/single-element-in-a-sorted-array/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ So, the array has all the elements repeating twice except for one element which appears only once and the array is sorted.

✅ This means that in every number that's repeated, the first number is at an even index (index%2==0) and the 2nd number is at an odd index.

✅ The idea is to peform a binary search over the entire array and find out if this pattern follows. 

✅ If somewhere this pattern is broken, then we're going to know in which half of the array there is an element that appears only once.

✅ We reduce the search space to that half an search again, until we're left with a single element, which is the final answer.
