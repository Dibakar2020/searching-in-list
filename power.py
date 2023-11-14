L=[2**i for i in range(7)]  #generate power of 2 upto 2^6
X = 6
print('list of powers-of-2 =',L)
if 2 ** X in L:
    print('at index', L.index(2**X))
else:
    print(X, 'not found')