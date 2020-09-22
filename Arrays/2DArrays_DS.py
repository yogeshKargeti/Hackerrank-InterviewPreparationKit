#!/bin/python3

import math
import os
import random
import re
import sys

def listsum(ar):
    s=0
    for i in ar:
        s+=i
    return s

# Complete the hourglassSum function below.
def hourglassSum(arr):
    add,ma=0,0
    for i in range(0,4):
        for j in range(0,4):
            add=listsum(arr[i][j:j+3])+arr[i+1][j+1]+listsum(arr[i+2][j:j+3])
            if(i==0 and j==0):
                ma=add
            if(add>ma):
                ma=add
    return ma

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
