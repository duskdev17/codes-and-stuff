# -*- coding: utf-8 -*-
"""
Created on Wed Mar 17 14:54:52 2021

@author: amdan
"""

#data frames

import pandas as pd

data = {
        "games" : [1, 2, 3, 4],
        "duration" : [20, 15, 17, 10]
        }

myVar = pd.DataFrame(data)

print(myVar)

print(myVar.loc[0])