𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Sqrt(x)

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/sqrtx/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡



✅Create a binarySearch() function returning floor of sqrt(x)

✅Initialize variable ans to store the result

✅If the number is less than 2, return itself

✅Initialise left and right values as 1 and x / 2 respectively

✅Until left <= right:

               ✅Find middle of this range, mid = left + right / 2

               ✅In case square of mid is equal to x,  return it as it is the square root

               ✅If square of mid is less than x, jump to the right half by setting left = mid + 1

               ✅Otherwise, jump to the left half by setting right = mid – 1 and save this value in ans

✅Print the result
