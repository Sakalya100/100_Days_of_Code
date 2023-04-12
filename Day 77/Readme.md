𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Simplify Path

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://leetcode.com/problems/simplify-path/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅  We took a stack to store all the paths. We’ll have 3 operations to find all the paths:

✅  if(temp == "" || temp == ".") continue; we’ll ignore all empty or ‘.’ indexs.

✅  if(temp != ".." ) s.push(temp); if it’s not a ‘..’ means it indicates a path, simply push it to stack.

✅  else if(!s.empty()) s.pop(); and finally if it’s ‘..’ means we have to go previous directory, so pop the last path from stack.

✅ If we find the stack is empty that means we’re in the root directory, so return “/”.

✅  Now we’ll add all the paths with a ‘/’. But for stack the last element will be on top. So we need to reverse the stack.
