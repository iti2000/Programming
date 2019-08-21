import pandas as pd

#created a dictionary
data_dict = {'Name':['iti','meet','tithi'],'age' :[19,20,21]}

#created pandas dataframe from dictionary
dframe = pd.DataFrame(data_dict)

print(dframe)
print(dframe.index)
print(dframe.columns)

#added new column to DataFrame
salary = [100000,21000,23564]
dframe['salary'] = salary
print(dframe)

##writing to excel


df.to_excel("listtry.xlsx")
