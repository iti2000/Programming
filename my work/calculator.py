from tkinter import *

#creating outer window
root = Tk()
root.title("my calc")

#creating the LabelFrame and entry box
frame = LabelFrame(root,text="my calculator!!")

entry = Entry(frame)
entry.grid(row=0,columnspan=0)

#creating the buttons below the Entry
button9 = Button(frame,text="9")
button8 = Button(frame,text="8")
button7 = Button(frame,text="7")
button6 = Button(frame,text="6")
button5 = Button(frame,text="5")
button4 = Button(frame,text="4")
button3 = Button(frame,text="3")
button2 = Button(frame,text="2")
button1 = Button(frame,text="1")
button0 = Button(frame,text="0")

button9.grid(row=2,column=1)
button8.grid(row=2,column=2)
button7.grid(row=2,column=3)
button6.grid(row=3,column=1)
button5.grid(row=3,column=2)
button4.grid(row=3,column=3)
button3.grid(row=4,column=1)
button2.grid(row=4,column=2)
button1.grid(row=4,column=3)
button0.grid(row=5,column=1)







#packing of the objects


frame.pack()
root.minsize(400,400)
root.mainloop()
