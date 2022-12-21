Problem Solved: Power of Two
Problem Link: [Problem](https://lnkd.in/dTCpuZAk)

Approaches:
📌𝐍𝐚𝐢𝐯𝐞 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

We can iterate through the entire range of [0,30] and for each number raise it to the power of 2. We check if that power of two is equal to the number n given or not. As per our result, we return our answer.

📌𝐁𝐞𝐭𝐭𝐞𝐫 𝐎𝐩𝐭𝐢𝐦𝐢𝐳𝐞𝐝 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

We reuse the powers calculated in previous steps. For example 2^3 = 2^2 x 2. So we create an ans variable and initialise it to 1. For each step, we first check if ans is the power of 2 or not. Otherwise, we update the ans = ans * 2.

𝐍𝐨𝐭𝐞: There is a catch here. For 30, the value of ans = 2^30 x 2. And it will result in an Integer overflow. To tackle this, we put a condition that we only update our ans when it is less than INT_MAX/2.

𝐌𝐨𝐬𝐭 𝐨𝐩𝐭𝐢𝐦𝐮𝐦 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

📌𝐔𝐬𝐢𝐧𝐠 𝐁𝐢𝐭 𝐌𝐚𝐧𝐢𝐩𝐮𝐥𝐚𝐭𝐢𝐨𝐧

All the powers of 2 are even numbers and will only have 1 set bit.
We will use this property to find if a number is a power of 2.
Using the 𝐧 & (𝐧-𝟏) trick. If n is an even number, 𝐧 & (𝐧-𝟏) will result in 0 as the answer. Otherwise, the answer will be 1.
