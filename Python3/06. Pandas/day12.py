# -*- coding: utf-8 -*-
"""
Created on Fri Mar 19 18:22:21 2021

@author: amdan
"""

#Removing Rows

import pandas as pd

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\dirtydata.csv')

print(data)

data.dropna(subset=['Date'], inplace = True)

print(data)