# -*- coding: utf-8 -*-
"""
Created on Wed Mar 17 15:16:02 2021

@author: amdan
"""

#Load Files Into a DataFrame

import pandas as pd

data = {
  "Duration" : {
      "0" : 10, 
      "1" : 20,
      "2" : 30,
      "3" : 15,
      },
  "Pulse" : {
      "0" : 127, 
      "1" : 120,
      "2" : 117,
      "3" : 120,
      },
}

var = pd.DataFrame(data)
print(var)
#print(var.head(1))
#print(var.tail(1))
print(var.info())