𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Longest Substrings without Repeating Characters

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/longest-substring-without-repeating-characters/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Use sliding window with hashset, use left and right pointers to move the window .

✅ If the set doesn't contains character then first add into the set and calculate the maxLength hand-in-hand

✅ If character already present in the set that means you have to move your sliding window by 1 , before that you have to remove all the characters that are infront of the character that is present already in window before.

✅ Now you have to remove that character also and move the left pointer and also add the new character into the set.
