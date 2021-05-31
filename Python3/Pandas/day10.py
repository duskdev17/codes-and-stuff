# -*- coding: utf-8 -*-
"""
Created on Fri Mar 19 13:50:26 2021

@author: amdan
"""

#fill with mode 
#Mode = the value that appears most frequently.

import pandas as pd

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\dirtydata.csv')
print(data)

x = data["Calories"].mode()[0]
data["Calories"].fillna(x, inplace = True)
print(data)