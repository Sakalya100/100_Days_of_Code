𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Find Duplicates

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://lnkd.in/dTCpuZAk



Approaches:

📌𝐍𝐚𝐢𝐯𝐞 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡



We can iterate and run a nested loop to check each pair of elements. We iterate through the entire array for each element and check if it repeats. If it doesn't we store it in a variable and return the variable at the end.



📌𝐎𝐩𝐭𝐢𝐦𝐢𝐳𝐞𝐝 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

XOR Operations



By the property of XOR we know, a^a=0 and the XOR of any number with 0 is the number itself.

We reuse this to get to our answer. 

We assume the answer as 0. Now we iterate through the array and XOR it with all the elements. The element that is unique will be present in the ans variable. It is because for each repeating element it gets XOR'ed with its duplicate and hence results in 0.
