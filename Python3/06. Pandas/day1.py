#pandas intro

import pandas as pd

myDataSet = {
    'car' : ["BMW", "AUDI", "Lambo", "Porche", "Lexus", "Lmao"],
    'count' : [10, 20, 21, 32, 32, 10],
}

myVar = pd.DataFrame(myDataSet)

print(myVar)
