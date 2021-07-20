# -*- coding: utf-8 -*-
"""
Created on Sat Mar 20 11:01:46 2021

@author: amdan
"""

#Removing Rows
import pandas as pd

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\dirtydata.csv')
print(data)

for x in data.index:
    if data.loc[x, "Duration"] > 120:
        data.drop(x, inplace = True)
        
print(data)