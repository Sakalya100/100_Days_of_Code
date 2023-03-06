𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: kth Missing positive number

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/kth-missing-positive-number/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ We can use binary search to find the index i such that the number of missing positive integers before index i is equal to k. 

✅ If the number of missing positive integers before index i is less than k, we need to search the right half of the array. 

✅ If the number of missing positive integers before index i is greater than or equal to k, we need to search the left half of the array.

✅ To find the number of missing positive integers before index i, we can use the formula arr[i] - i - 1, which represents the difference between the actual value of the element at index i and the expected value of the element at index i in a complete array of all positive integers.

✅ Once we find the index i, we can return the kth missing positive integer, which is equal to arr[i] + k - (arr[i] - i - 1).
