class Solution:
    def secondsBetweenTimes(self, sT: str, et: str) -> int:
        end=int(et[0:2])*3600+int(et[3:5])*60+int(et[6:])
        start=int(sT[0:2])*3600+int(sT[3:5])*60+int(sT[6:])
        return end-start