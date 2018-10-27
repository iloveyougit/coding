a=153
l=list(map(int,str(a)))
l=[x**3 for x in l]
s=sum(l)
if s==a:
    print("yup",s)
    
    
