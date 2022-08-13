from pydoc import doc


a = 0
b = 1
c = 1
while c<4:
    b = b*c
    a = a + (b/c)
    c = c + 1
print(a)