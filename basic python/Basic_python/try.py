try:
    x=int(input("enter working hours:"))
    y=int(input("rate:"))

    if x<40:
        pay = x*y
    else:
        pay = 40*y + (x-40)*y*1.5


    print(pay)

except:
    print("Enter numeric value !")
