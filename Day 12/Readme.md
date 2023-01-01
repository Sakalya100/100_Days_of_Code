Problem Solved: Word Pattern

Problem Link: https://leetcode.com/problems/word-pattern/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅Use two maps, one maps the letters of pattern to index+1 & the other maps the words in s to index+1.

✅Use istringstream to extract words from s & i to traverse pattern.

✅Return true if the values of both the keys ( m1[pattern[i]] & m2[word] ) are equal && i reaches pattern.size() & stops. (ie; No. of words in s = pattern.size() ), otherwise false.
