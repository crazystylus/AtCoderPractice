import math
k=int(input())
x = input().strip().split()
a=int(x[0])
b=int(x[1])
a1 = 0
b1 = 0
buf=1
while a != 0 and b != 0:
  a1 += (a % 10) * buf
  b1 += (b % 10) * buf
  a /= 10
  b /= 10
  buf *= k
  a = math.floor(a)
  b = math.floor(b)
while a != 0:
  a1 += (a % 10) * buf
  a /= 10
  buf *= k
  a = math.floor(a)
while b != 0:
  b1 += (b % 10) * buf
  b /= 10
  buf *= k
  b = math.floor(b)
print(a1*b1)