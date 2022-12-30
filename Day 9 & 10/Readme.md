Problem Solved: Single-Threaded CPU

Problem Link: https://leetcode.com/problems/single-threaded-cpu/



📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡

✅ Sort the tasks according to start time, remember to keep a reference to the original task index

tasks = [[start_time, process_time, original_index], ..., ...]



✅Set the current time to the first start time in the task list.



✅Push all tasks whose start time is ≤ the current time into heap h.

heapq.heappush(h, (process_time, original_index))

Notice we don't care about start time, since we know any item pushed into the heap is already past it's start_time.



✅Pop the first task to be processed.



✅Increase the current time by the processing time.



✅Repeat

