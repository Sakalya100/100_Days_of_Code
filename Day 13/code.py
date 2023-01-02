class Solution(object):
    def detectCapitalUse(self, word):
        def checkcapital(words):
            for i in words:
                if(not(i.isupper())):
                    return False
            return True
        
        def checklower(words):
            for i in words:
                if(not(i.islower())):
                    return False
            return True
        
        
        if(word[0].isupper()):
            if(checkcapital(word[1:]) or checklower(word[1:])):
                return True
            else: return False
        else:
            if(checklower(word[1:])):
                return True
            else: return False
