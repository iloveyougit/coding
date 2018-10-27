d={}
str="aaankithanki"
l=[]
for i in str:
    if i not in l:
        l.append(i)

for j in l:
    d[j]=list(str).count(j)
print(max(d,key=d.get))
