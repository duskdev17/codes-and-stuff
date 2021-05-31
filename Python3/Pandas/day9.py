# -*- coding: utf-8 -*-
"""
Created on Fri Mar 19 13:45:53 2021

@author: amdan
"""
#fill with median
#Median = the value in the middle, after you have sorted all values ascending.

import pandas as pd

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\dirtydata.csv')

print(data)

x = data["Calories"].median()
data["Calories"].fillna(x, inplace = True)
print(data)