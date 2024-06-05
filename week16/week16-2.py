class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        #for i in range(3): #其實題目不是3個
        counter = Counter(words[0])
        for i in range(1, len(words)):
            counter &= Counter(words[i])
        #counter = Counter(words[0]) &Counter(words[1]) &Counter(words[2])
        ans = []
        for c in counter:
            for i in range(counter[c]): #看要重複幾次
                ans.append(c) #就要重複幾次
        return ans