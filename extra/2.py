import pandas as pd

df = pd.read_excel('Meet.xlsx', encoding='utf-16')
print(df)

df = df.to_dict()
print(df)
