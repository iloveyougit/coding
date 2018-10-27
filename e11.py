dict={}
str="ankithanki"
l=[]
for i in str:
    if i in l:
        pass
    else:
        l.append(i)
for i in range(len(list(str))):
    for j in l:
        dict[j]=list(str).count[i]
