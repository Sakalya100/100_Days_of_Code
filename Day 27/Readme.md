𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Insert Interval

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/insert-interval/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡



When iterating over the intervals there are total three cases:



✅𝐓𝐡𝐞 𝐧𝐞𝐰 𝐢𝐧𝐭𝐞𝐫𝐯𝐚𝐥 𝐢𝐬 𝐚𝐟𝐭𝐞𝐫 𝐭𝐡𝐞 𝐫𝐚𝐧𝐠𝐞 𝐨𝐟 𝐨𝐭𝐡𝐞𝐫 𝐢𝐧𝐭𝐞𝐫𝐯𝐚𝐥

Example:-new interval= {6,9} and current interval= {2,4}

In this case, we can add the current interval into our answer because the new one does not overlap with it.



✅𝐓𝐡𝐞 𝐧𝐞𝐰 𝐢𝐧𝐭𝐞𝐫𝐯𝐚𝐥'𝐬 𝐫𝐚𝐧𝐠𝐞 𝐢𝐬 𝐛𝐞𝐟𝐨𝐫𝐞 𝐭𝐡𝐞 𝐨𝐭𝐡𝐞𝐫

Example:-new interval= {3,5} and current interval= {7,9}

In this case, we can add the new interval in the answer and update it to the current interval



✅𝐓𝐡𝐞 𝐧𝐞𝐰 𝐢𝐧𝐭𝐞𝐫𝐯𝐚𝐥 𝐢𝐬 𝐢𝐧 𝐭𝐡𝐞 𝐫𝐚𝐧𝐠𝐞 𝐨𝐟 𝐭𝐡𝐞 𝐨𝐭𝐡𝐞𝐫 𝐢𝐧𝐭𝐞𝐫𝐯𝐚𝐥

Example:-interval= {5,8} and new interval= {6,12}

In this case, we update the 𝐟𝐢𝐫𝐬𝐭 𝐞𝐥𝐞𝐦𝐞𝐧𝐭 𝐨𝐟 𝐭𝐡𝐞 𝐧𝐞𝐰 𝐢𝐧𝐭𝐞𝐫𝐯𝐚𝐥 to the minimum of [current interval and new interval] and update the 𝐬𝐞𝐜𝐨𝐧𝐝 𝐞𝐥𝐞𝐦𝐞𝐧𝐭 𝐨𝐟 𝐭𝐡𝐞 𝐧𝐞𝐰 𝐢𝐧𝐭𝐞𝐫𝐯𝐚𝐥 to the maximum of [current interval and new interval].

Example interval= {5,8} and new interval= {6,11}. Then update new interval = {min(5,6),max(8,12)}={5,12}

𝐧𝐞𝐰𝐈𝐧𝐭𝐞𝐫𝐯𝐚𝐥[0]=𝐦𝐢𝐧(𝐧𝐞𝐰𝐈𝐧𝐭𝐞𝐫𝐯𝐚𝐥[0],𝐢[0]);

𝐧𝐞𝐰𝐈𝐧𝐭𝐞𝐫𝐯𝐚𝐥[1]=𝐦𝐚𝐱(𝐧𝐞𝐰𝐈𝐧𝐭𝐞𝐫𝐯𝐚𝐥[1],𝐢[1]);



✅𝐀𝐭 𝐭𝐡𝐞 𝐞𝐧𝐝 𝐚𝐟𝐭𝐞𝐫 𝐭𝐡𝐞 𝐥𝐨𝐨𝐩 𝐣𝐮𝐬𝐭 𝐚𝐝𝐝 𝐭𝐡𝐞 𝐮𝐩𝐝𝐚𝐭𝐞𝐝 𝐧𝐞𝐰 𝐢𝐧𝐭𝐞𝐫𝐯𝐚𝐥𝐬
