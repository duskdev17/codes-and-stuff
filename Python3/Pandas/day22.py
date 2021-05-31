# -*- coding: utf-8 -*-
"""
Created on Wed Mar 24 11:57:17 2021

@author: amdan
"""

import pandas as pd

def variance(data):
    n= len(data)
    
    #mean of the data
    mean = sum(data)/n
    print(mean)
    
    #square deviations - list comprehensions
    deviations = [(x-mean)**2 for x in data]
    print(deviations)
    
    #variance
    variance = sum(deviations)/n
    print(variance)
    return variance

    
    
    