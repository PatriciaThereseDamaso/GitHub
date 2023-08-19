#Don't know how this works yet...might come back later
alpha = {}
alpha['A'] = "  A     A A   A   A  AAAAA  A   A  A   A  A   A  "
alpha['B'] = "BBBB   B   B  B   B  BBBB   B   B  B   B  BBBB   "

for i in range(7):
  print (alpha['A'][i*7:i*7+7], alpha['B'][i*7:i*7+7])
