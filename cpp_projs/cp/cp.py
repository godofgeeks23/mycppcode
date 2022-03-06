def shortestToChar(self, S, C):
        index_nums=[]
        for i, letter in enumerate(s):
            if letter == s: 
                index_nums.append(i)
        ans = []
        l=len(s)
        l2=len(index_nums)
        d=[None]*l2
        for j in range(l):
            for k in range(l2):
                d[k]=abs(j-index_nums[k])
            ans.append(min(d))
        return ans
