class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        for i in range(len(word)): #重點1:找字母
            if word[i]==ch: #找到字母了, 這時候i很重要
            #重點2: 把word[0]....word[i]字反過來
                return word[i::-1] + word[i+1:]#python的特殊範圍寫法
            #如果都沒有提早結束,就是找不到,就原來的字回傳
        return word
