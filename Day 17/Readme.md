Problem Solved: Maximum Ice Cream Bars

Problem Link: https://leetcode.com/problems/maximum-ice-cream-bars/



๐๐๐ง๐ญ๐ฎ๐ข๐ญ๐ข๐จ๐ง



โWe need to maximize the number of candy bars to be bought by the given set of coins

โSo the cost should be minimized so that more ice cream bars can be bought

โSo we can start by buying the minimum cost first and move ahead until our coins exhaust



๐๐๐ฉ๐ฉ๐ซ๐จ๐๐๐ก



โSort the array in increasing order of prices

โIterate through the array and first check if the cost of that candy bar added to th e already cost spent is greater than the coins or not

โIf it is not we can buy that particular ice cream and move ahead

โOtherwise we break the loop there itself and print the number of ice cream bars we bought till that instance
