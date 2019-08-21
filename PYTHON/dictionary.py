x = {"name":'iti',"num":67}
print(x)
del x["name"]
print(x)

print("...................................")
n = ['meet','pia','janki','falgun','dhruv','iti']
r = [1,2,3,4,5]
g = ['M','F','F','M','M']
classs = {'Name':n,'Roll No':r}

print (classs)

print("...................................")
classs['gender'] = g
print(classs)

print("....................................")
print(type(classs))

z = (str(classs))
print(z)
print(type(z))

#remove all entries..........
classs.clear()
print(classs)

#remove entire dict...........
del classs
print(classs)
