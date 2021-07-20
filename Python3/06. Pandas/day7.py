# -*- coding: utf-8 -*-
"""
Created on Thu Mar 18 12:55:59 2021

@author: amdan
"""

#Replace Empty Values

import pandas as pd

var = pd.read_csv('E:\Codes and stuff\Python3\Pandas\Downloads\dirtydata.csv')

print(var)

var['Calories'].fillna(999, inplace = True)

print(var)