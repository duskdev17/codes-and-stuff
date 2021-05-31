# -*- coding: utf-8 -*-
"""
Created on Wed Mar 17 10:59:53 2021

@author: amdan
"""

#series

import pandas as pd

a = [10, 20, 30]

myVar = pd.Series(a, index=("x", "y", "z"))

print(myVar)

print(myVar["x"])

