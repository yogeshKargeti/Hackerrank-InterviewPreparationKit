#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the isValid function below.
def isValid(st):
    Hash = dict() 
    for i in st: 
        if i in Hash.keys(): 
            Hash[i] += 1
        else: 
            Hash[i] = 1

    maxval=Hash[i]
    minval=Hash[i]
    count=dict()
    for key,val in Hash.items():
        if val in count:
            count[val]+=1
        else:
            count[val]=1
        if val>maxval:
            maxval=val
        elif val<minval:
            minval=val

    if len(count)==1:
        return "YES"
    elif len(count)==2:
        if count[maxval]==1 and (maxval-minval)==1:
            return "YES"
        elif count[minval]==1 and minval==1:
            return "YES"
    return "NO"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = isValid(s)

    fptr.write(result + '\n')

    fptr.close()
