ππ«π¨ππ₯ππ¦ ππ¨π₯π―ππ: Sqrt(x)

ππ«π¨ππ₯ππ¦ ππ’π§π€: https://leetcode.com/problems/sqrtx/



πππ©π©π«π¨πππ‘



βCreate a binarySearch() function returning floor of sqrt(x)

βInitialize variable ans to store the result

βIf the number is less than 2, return itself

βInitialise left and right values as 1 and x / 2 respectively

βUntil left <= right:

               βFind middle of this range, mid = left + right / 2

               βIn case square of mid is equal to x,  return it as it is the square root

               βIf square of mid is less than x, jump to the right half by setting left = mid + 1

               βOtherwise, jump to the left half by setting right = mid β 1 and save this value in ans

βPrint the result
