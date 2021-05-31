# -*- coding: utf-8 -*-
"""
Created on Sat Mar 20 10:55:14 2021

@author: amdan
"""

##Replacing Values
import pandas as pd

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\dirtydata.csv')
print(data)

for x in data.index:
    if data.loc[x, "Duration"] > 120:
        data.loc[x, "Duration"] = 120
        
print(data)