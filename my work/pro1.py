from tkinter import *
import pandas as pd

def add_details():
    global details_dict
    name=name_entry.get()
    num=num_entry.get()
    name_list.append(name)
    num_list.append(num)
    print(name_list)
    print(num_list)
    details_dict ={'name':name_list,'num':num_list}
    print(details_dict)

def excel_data():
    ex=pd.DataFrame(details_dict)
    ex.to_csv('details')




#main frame
root = Tk()

#creating outter frame
content_entry = LabelFrame(root,width=20,height=50)
button_entry = LabelFrame(root)

#Entry_frame(name)
name = Label(content_entry,text="Name:")
name.grid(row=0,column=0)
name_entry = Entry(content_entry)
name_entry.grid(row=0,column=1)
name_list = list()


#Entry_frame(number)
num = Label(content_entry,text="Num:")
num.grid(row=1,column=0)
num_entry = Entry(content_entry)
num_entry.grid(row=1,column=1)
num_list = list()

#Entry_frame(gender)
gender = Label(content_entry,text="gender")
gender.grid(row=2,column=0)

#check button
i = StringVar()

button = Radiobutton(content_entry,text="male",variable=i,value="male")
button2 = Radiobutton(content_entry,text="female",variable=i,value="female")

button.grid(row=2,column=1)
button2.grid(row=2,column=2)

#button_entry(save)
button = Button(button_entry,text="SAVE",command=add_details)
button.grid(row=3,column=1)
button1 = Button(button_entry,text="export to excel",command=excel_data)
button.grid(row=3,column=2)

button.pack()
button1.pack()


#packing of objects
content_entry.pack(fill=X)
button_entry.pack(fill=X)


root.minsize(300,300)
root.mainloop()
