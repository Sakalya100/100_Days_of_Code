𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Best Time to Buy and Sell Stocks

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ firstly we check if size of prices 𝐚𝐫𝐫𝐚𝐲 𝐢𝐬 1 𝐨𝐫 𝐧𝐨𝐭 if so then return 0.

✅ We declare two variable 𝐥𝐨𝐰 and 𝐦𝐚𝐱𝐩𝐫𝐨𝐟𝐢𝐭 ,here low is index pointing to that index which is giving 𝐦𝐢𝐧𝐢𝐦𝐮𝐦 𝐩𝐫𝐢𝐜𝐞 in prices array so far . 𝐦𝐚𝐱𝐩𝐫𝐨𝐟𝐢𝐭 𝐬𝐭𝐨𝐫𝐞𝐬 𝐦𝐚𝐱𝐢𝐦𝐮𝐦𝐩𝐫𝐨𝐟𝐢𝐭 till now.

✅ Iterate through each elements of prices array and observe it .

✅ a) if we encounter price 𝐥𝐞𝐬𝐬𝐞𝐫 𝐭𝐡𝐚𝐧 𝐚𝐬𝐬𝐮𝐦𝐞𝐝(we assume minimum price is first element of array) then we store that index into low and continue

✅ b) if it is not less , then we need to calculate 𝐦𝐚𝐱𝐩𝐫𝐨𝐟𝐢𝐭 , it is simply max of (𝐦𝐚𝐱𝐩𝐫𝐨𝐟𝐢𝐭 so far calculated) and (current price - minimum prices so far encountered),

return 𝐦𝐚𝐱𝐩𝐫𝐨𝐟𝐢𝐭 .
