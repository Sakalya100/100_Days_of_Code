Problem Solved: Search Insert Position

Problem Link: https://leetcode.com/problems/search-insert-position/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡



✅We can apply binary search recursively. We call the recursive function with search range [L, R] = [0, n-1] and then apply standard binary search -

✅If nums[mid] == T, the target is found, so return mid.

✅If nums[mid] < T, the index to insert the target lies in the range [mid+1, R]. So recurse for that search space

✅If nums[mid] > T, we can potentially insert the target at index mid or somewhere in range [L, mid-1]. So we recurse for the search space [L, mid-1].

✅Now, if we end up at L > R, which index should we return? We might have reached here by -

✅previously finding the condition A[mid] < T & recursing for [mid+1, R], in which case L(=mid+1) must be answer since A[mid] < T which tells us mid cannot be our index.



✅previously finding the condition A[mid] > T & recursing for [L, mid-1] , in which case L must be answer again, since A[mid] > T in previous recursive call which tells us mid itself was potentially the answer & we couldn't find any index lower than mid for which A[.] > T.
