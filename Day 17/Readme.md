Problem Solved: Maximum Ice Cream Bars

Problem Link: https://leetcode.com/problems/maximum-ice-cream-bars/



📌𝐈𝐧𝐭𝐮𝐢𝐭𝐢𝐨𝐧



✅We need to maximize the number of candy bars to be bought by the given set of coins

✅So the cost should be minimized so that more ice cream bars can be bought

✅So we can start by buying the minimum cost first and move ahead until our coins exhaust



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡



✅Sort the array in increasing order of prices

✅Iterate through the array and first check if the cost of that candy bar added to th e already cost spent is greater than the coins or not

✅If it is not we can buy that particular ice cream and move ahead

✅Otherwise we break the loop there itself and print the number of ice cream bars we bought till that instance
