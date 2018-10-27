n=int(input())
a=[int(input()) for i in range(n) ]
b=[]
print("b")
for i in range(n):
    b.append(int(input()))
#print(b)
for i in reversed(a):
    print(i)
print(list(reversed(a)))
