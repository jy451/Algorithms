def sum3(nums):
    res=[]
    nums.sort()
    n=len(nums)-2
    for i in range(0,n):
        x=nums[i]
        if i>0 and nums[i]==nums[i-1]:
            continue
        l=i+1
        r=len(nums)-1
        while(l<r):
            s=x+nums[l]+nums[r]
            if s==0:
                res.append([x,nums[l],nums[r]])
                l+=1
                r-=1
                while l<r and nums[l]==nums[l-1]:
                    l+=1
                while l<r and  nums[r]==nums[r+1]:
                    r-=1
            elif s<0:
                l+=1
                
            elif s>0:
                r-=1
                
    return res
nums=[-1, 0, 1, 2, -1, -4]
print(sum3(nums))