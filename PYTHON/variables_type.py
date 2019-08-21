#assign multiple variables-------------------
a , b , c = 3,6.7,"patel"

print(a,b)

#python string--------------------------------
w="hello patel"
#  0123456789
print(w)
print(w[1:4])#display 1 and not 4
print(w[3:])
print(w*2)#print 2 times
print(w + "\titi")


#python lists----------------------------------
#similar to array but with different datatypes
list = ["hii",4.5,2,'ms']
add_list = ["meet",100]

print(list)
print(list[0])
print(list[1:])
print(list + add_list)

list[2]="iti"
print(list)

#tuples-----------------------------------------
#similar to list but () and can not be updated
tuple = ("i",56,2.456,"hellllo")

#here we have to add atleast two values to differentiate with string
add = ("metiya",5)

print(tuple)
print(tuple[2])
print(tuple + add)

#dictionaries-----------------------------------
#associative arrays and {} and values:keys
dict = {"name":"iti", "roln":99}#only one values
dicta = {"Name":["iti","meet","jay"],"Roln":[35,78]}#for multiple values

print(dict)
print(dicta)
print(dict.keys())
print(dict.values())

dict[3] = "meet"
dict["pop"] = "menu"

print(dict[3],dict["pop"])
