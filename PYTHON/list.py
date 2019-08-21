list1 = ["hiii","mango",67,90.5]

print(list1[1])

del list1[3]

print(list1)

#negative counts from last
print(list1[-1])

list1 = ["hiii","mango",67,90.5]
#earlier length was 3 but now due to line12 lenght is 4
print(len(list1))

list1.append("iti")
print(list1)

list1.remove(list1[2])
print(list1)

#insert(position,letter to be inserted)
list1.insert(3,"meet")
print(list1)

#to count total number of times that particular letter
list1.append("iti")
print(list1.count("iti"))
