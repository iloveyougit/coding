
n, d= map(int, input().split())
a = input().split()
a = a[d:]+a[:d]
print(' '.join(a))
