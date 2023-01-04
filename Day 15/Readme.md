Problem Solved: Minimum Rounds to complete All Tasks

Problem Link: https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/



Approaches:

📌𝐍𝐚𝐢𝐯𝐞 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅Count the frequency of unique numbers in tasks

✅For each frequency:

      ⭕if freq is 1, return -1

      ⭕if (freq-2) % 3 == 0, we need (freq-2) / 3 + 1 rounds to bring it to 0.

      ⭕if (freq-4) % 3 == 0, we need (freq-4) / 3 + 2 rounds.

      ⭕if freq % 3 == 0, we need freq / 3 rounds.

      ⭕We have only one case left, which is using 2 all the way, so we need freq / 2 rounds.



📌𝐁𝐞𝐭𝐭𝐞𝐫 𝐎𝐩𝐭𝐢𝐦𝐢𝐳𝐞𝐝 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

The code can be further optimized, basically, we just need 𝐜𝐞𝐢𝐥(𝐟𝐫𝐞𝐪/3) for all valid cases.

Examples:

leftover = 2, we need (freq-2) / 3 + 1 == ceil(freq/3)

leftover = 4, we need (freq-4) / 3 + 2 == ceil(freq/3)
