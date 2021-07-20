# -*- coding: utf-8 -*-
"""
Created on Thu Mar 18 13:05:41 2021

@author: amdan
"""

#Replace Using Mean
#Mean = the average value (the sum of all values divided by number of values).

import pandas as pd

data = pd.read_csv('E:\Codes and stuff\Python3\Pandas\Downloads\dirtydata.csv') 

print(data)

x = data["Calories"].mean()
data["Calories"].fillna(x , inplace = True)
print(data)