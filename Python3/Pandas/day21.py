# -*- coding: utf-8 -*-
"""
Created on Mon Mar 22 10:43:12 2021

@author: amdan
"""

#practice
import pandas as pd

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\data.csv')

print(data)

pd.load_json(data)