class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        freq=[0]*26
        n=len(sentence)
        for i in range(0,n):
            ch=sentence[i]
            freq[ord(ch)-ord('a')]+=1
        
        #check the frequencies
        m=len(freq)
        for i in range(0,m):
            if(freq[i]==0):
                return False
        return True