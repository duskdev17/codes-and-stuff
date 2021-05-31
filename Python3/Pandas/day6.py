# -*- coding: utf-8 -*-
"""
Created on Wed Mar 17 19:56:42 2021

@author: amdan
"""

#cleaning data/ empty cellls
import pandas as pd

var = pd.read_csv('E:\Codes and stuff\Python3\Pandas\Downloads\dirtydata.csv')

print(var)

var.dropna(inplace = True)

print(var.to_string())