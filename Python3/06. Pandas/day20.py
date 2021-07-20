# -*- coding: utf-8 -*-
"""
Created on Sun Mar 21 18:06:38 2021

@author: amdan
"""

#pandas plotting
import pandas as pd
import matplotlib.pyplot as plot

data = pd.read_csv('E:\codes and stuff\python3\pandas\downloads\data.csv')
print(data)

data.plot.hexbin(x = 'Maxpulse', y='Calories', gridsize = 10)
#data.plot(kind='scatter', x= 'Maxpulse', y='Calories')
plot.show()