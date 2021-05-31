# -*- coding: utf-8 -*-
"""
Created on Sat Mar 20 11:08:35 2021

@author: amdan
"""

#Pandas - Removing Duplicates
import pandas as pd

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\dirtydata.csv')

print(data)
print(data.duplicated()) 

data.drop_duplicates(inplace = True)

print(data)