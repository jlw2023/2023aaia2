#week12-3.py
table = [True]*240000
ans = 0
for i in range(2, 240000):
  if table[i]==True: #找到了他是質數 因為沒有被殺死 當國王
    ans += 1
  for k in range(i*i, 240000, i): table[k] = False 

  #國王繼位後 把他兄弟殺光kill
print('找到', ans, '個質數')