ππ«π¨ππ₯ππ¦ ππ¨π₯π―ππ: Minimum Deviation in Array

ππ«π¨ππ₯ππ¦ ππ’π§π€: https://leetcode.com/problems/minimize-deviation-in-array/



πππ©π©π«π¨πππ‘

β Traverse the vector and double all the odd vector elements. This nullifies the requirement for the 2nd operation.

β Now, decrease the largest vector element while itβs even.

β To store the vector elements in sorted manner, insert all vector elements into a Set.

β Greedily reduce the maximum element present in the Set

β If the maximum element present in the Set is odd, break the loop.

β Print the minimum deviation obtained.
