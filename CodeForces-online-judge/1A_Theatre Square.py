n, m, a = map(int, input().split())

l = n // a
k = m // a

if n % a != 0:
    l += 1
if m % a != 0:
    k += 1

print(l * k)
