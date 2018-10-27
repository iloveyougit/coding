t=int(input())
a=[]
for j in range(t):
    n,k=map(int,input().split())
    #a=[int(input()) for i in range(n)]
    a=map(int,input().split())
    min=min(a)
    r=k-min
    print(r)
    

