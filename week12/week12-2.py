#week12-2.py 列出 n以下的全部質數
n = int(input('請輸入1個數字'))
def isPrime(n):
  for i in range(2, n):
    if n%i==0:
      return False
  return True
for i in range(2, n+1):
  if isPrime(i): print(i, end=' ')