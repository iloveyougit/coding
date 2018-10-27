a=input("no")
l=list(map(int,str(a)))
dec=0
c=len(l)-1
for i in l:
    dec=dec+(i*(2**c))
    c-=1
print(dec)
