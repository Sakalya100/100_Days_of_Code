Problem Solved: Minimum Rounds to complete All Tasks

Problem Link: https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/



Approaches:

ππππ’π―π ππ©π©π«π¨πππ‘

βCount the frequency of unique numbers in tasks

βFor each frequency:

      β­if freq is 1, return -1

      β­if (freq-2) % 3 == 0, we need (freq-2) / 3 + 1 rounds to bring it to 0.

      β­if (freq-4) % 3 == 0, we need (freq-4) / 3 + 2 rounds.

      β­if freq % 3 == 0, we need freq / 3 rounds.

      β­We have only one case left, which is using 2 all the way, so we need freq / 2 rounds.



ππππ­π­ππ« ππ©π­π’π¦π’π³ππ ππ©π©π«π¨πππ‘

The code can be further optimized, basically, we just need πππ’π₯(ππ«ππͺ/3) for all valid cases.

Examples:

leftover = 2, we need (freq-2) / 3 + 1 == ceil(freq/3)

leftover = 4, we need (freq-4) / 3 + 2 == ceil(freq/3)
