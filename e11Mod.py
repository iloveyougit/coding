def wordcount(str):
    count=dict()
    #words=str.split()
    for i in str:
        if i in count:
            count[i]+=1
        else:
            count[i]=1
    count=dict(sorted(count.items(),key=lambda x:x[1]))
    l=[]
    for k in count.keys():
        l.append(k)
    ans=l[-1]
    return ans

print(wordcount("hello world hello"))
