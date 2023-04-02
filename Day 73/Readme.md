𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Successful pairs of Spells and Potions

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://lnkd.in/d8m-KBGX



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Sort the potions array.

✅ For every spell we will find min Index where the product of spell[i] * potion[i]) is greater than success

✅ Once we find such an index via binary search answer for that spell is

potions.length - minIndex

✅ Intialize with l = 0, h= potion.length and not potion.length-1, since we can have a case where we do not find any minIndex in that case the minIndex will be potion.length and hence result[i] of such spell[i] = potion.length -minIndex = 0
