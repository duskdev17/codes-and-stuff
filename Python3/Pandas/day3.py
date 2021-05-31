# -*- coding: utf-8 -*-
"""
Created on Wed Mar 17 11:09:43 2021

@author: amdan
"""
#series

import pandas as pd

calories = {"day1": 300, "day2" : 200, "day3" : 321}

myVar = pd.Series(calories, index = ["day1", "day2", "day3"])

print(myVar)