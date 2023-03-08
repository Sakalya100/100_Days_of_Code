𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Minimum Time to Complete Trips

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/minimum-time-to-complete-trips/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Define 𝐥𝐞𝐟𝐭=0 , 𝐫𝐢𝐠𝐡𝐭=1𝐞14 or 𝐭𝐨𝐭𝐚𝐥𝐓𝐫𝐢𝐩𝐬 𝐱 (𝐥𝐨𝐧𝐠 𝐥𝐨𝐧𝐠)𝐭𝐢𝐦𝐞[0] . This is because total time may be 10 to the power 14 (see constraints below)

✅ Calculate mid as we do in binary search.

✅ when we have mid treat this mid , as time to complete TotalTrips.

✅ We have to minimize it since in question it is said to calculate least time to complete TotalTrips trips .

✅ See if using that time we exceed or equal to TotalTrips or not . if yes then there may be less time which can complete given trips .so make right =mid and do same for left subpart .

✅ Otherwise select right subpart and make 𝐥𝐞𝐟𝐭=𝐦𝐢𝐝+1.

✅ Repeat it until 𝐥𝐞𝐟𝐭<𝐫𝐢𝐠𝐡𝐭.
