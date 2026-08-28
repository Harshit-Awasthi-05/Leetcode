class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_t="".join(sorted(s))
        t_t="".join(sorted(t))
        return s_t==t_t
