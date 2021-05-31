# -*- coding: utf-8 -*-
"""
Created on Fri Mar 19 18:13:35 2021

@author: amdan
"""

#Convert Into a Correct Format

import pandas as pd

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\dirtydata.csv')

print(data)

data['Date'] = pd.to_datetime(data['Date'])

print(data)