class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        result=""
        adder=1
        if len(strs)==1:
            return strs[0]
        i=0
        while i<len(strs[0]):
            sub=strs[0][0:adder]
            for j in range( 1,len(strs)):
                sub2=strs[j][0:adder]
                if sub !=sub2:
                    return result
                if len(sub)>len(result) and j==len(strs)-1:
                    result=sub
            adder+=1
            i+=1
        
        return result
