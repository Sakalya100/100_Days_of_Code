Problem Solved: Same Tree

Problem Link: https://leetcode.com/problems/same-tree/



๐๐๐ฉ๐ฉ๐ซ๐จ๐๐๐ก



โIf one of the nodes is ๐๐๐๐ then return the equality result of p and q.

โThis boils down to if both are ๐๐๐๐ then return ๐ญ๐ซ๐ฎ๐, but if one of them is ๐๐๐๐ but not the other one then return ๐๐๐ฅ๐ฌ๐



โAt this point both root nodes represent valid pointers.

โReturn ๐ญ๐ซ๐ฎ๐ if the root nodes have the same value and the left tree of the roots is the same (recursion) and the right tree of the roots is the same (recursion). 

โOtherwise, return ๐๐๐ฅ๐ฌ๐. 
