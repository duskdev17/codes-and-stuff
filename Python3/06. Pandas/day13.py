# -*- coding: utf-8 -*-
"""
Created on Fri Mar 19 18:26:21 2021

@author: amdan
"""

#Replacing Values

import pandas as pd 

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\dirtydata.csv')

print(data)

data.loc[7, 'Duration'] = 45

print(data)