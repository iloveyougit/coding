s=[]
while(1):
    n=input()
    if n in s:
        print("yesy")
        print(s)
    else:
        print("no")
        s.append(n)
        print(s)
    
