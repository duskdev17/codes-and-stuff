# -*- coding: utf-8 -*-
"""
Created on Sun Mar 21 17:39:22 2021

@author: amdan

"""
"""
#Cleaning Data and correlations
import pandas as pd

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\dirtydata.csv')
print(data)

x = data['Calories'].mode()[0]
data['Calories'].fillna(x ,inplace = True)
print(data)

"""
import pandas as pd

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\dirtydata.csv')
print(data)

"""
data['Date'] = pd.to_datetime(data['Date'])
data.dropna(subset=['Date'], inplace=True)
data.loc[18, 'Calories'] = 999

for x in data.index:
    if data.loc[x, 'Calories'] > 300:
        #data.loc[x, 'Calories'] = 100
        data.drop(x, inplace = True)

"""

#data.drop_duplicates(inplace = True)      
data.corr()
print(data)





