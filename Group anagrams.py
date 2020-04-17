#Given an array of strings, group anagrams together.
class Solution(object):
    def groupAnagrams(self, strs):
        if not strs:
            return []
        
        mydict = {}


        for i, val in enumerate(strs):
            tmp = "".join(sorted(val))
            if tmp not in mydict:
                mydict[tmp] = [strs[i]]
            else:
                mydict[tmp].append(strs[i])
        
        result = [ x for x in mydict.values()]
        return result 