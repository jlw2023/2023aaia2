class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        #先用python打字串迴圈寫出來
        N = len(s)
        ans = 0
        j = 0
        for i in range (N):#字串的迴圈
            maxCost -= abs(ord(s[i]) - ord(t[i]))
            while maxCost < 0:
                maxCost += abs(ord(s[j]) - ord(t[j]))
                j+=1
            ans = max(ans, i-j+1)

            #print( s[i], t[i])  #字串的陣列

        return ans#課堂作業1,先隨便給個0當答案(答案當然不對)