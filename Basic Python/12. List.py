# List Declaration
a = []
b = ['hong', 'gil', 'dong']
c = [1, 2, 'hong', 'yun']

# slicing
print(b[0:1])
print(b[1:])

# item insert
a.append("python")
a.insert(1, "C++")
print(a)

# item searching
print(b.index('hong'))

# item remove
b.remove('hong')
b.pop()
del c[1]

print(b)
print(c)


