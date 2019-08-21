def rightRotate(lists, num):
	output_list = []

	for item in range(len(lists) - num, len(lists)):
		output_list.append(lists[item])

	for item in range(0, len(lists) - num):
		output_list.append(lists[item])

	return output_list

list = [1, 2, 3, 4, 5]
print(list)

rotate_num = int(input("Reverse:"))

print(rightRotate(list, rotate_num))
