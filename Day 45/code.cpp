class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int[] map = new int[26];
        List<Integer> result = new ArrayList<>();
        
        for(int i=0;i<p.length();i++){
            map[p.charAt(i) - 'a']++;
        }
    
        int windowStart = 0;
        int windowEnd = 0;
        while(windowEnd<s.length()){
		// valid anagram
            if(map[s.charAt(windowEnd) - 'a'] > 0){
                map[s.charAt(windowEnd++) - 'a']--;
			// window size equal to size of P
                if(windowEnd-windowStart ==  p.length()){                    
                    result.add(windowStart);
                }
            }
			// window is of size 0
            else if(windowStart == windowEnd){
                windowStart ++;
                windowEnd ++;
            }
			// decrease window size
            else{
                map[s.charAt(windowStart++) - 'a']++;
            }      
        }
        return result;
    }
}
