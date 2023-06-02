"""
import sys
sys.stdin = open("prob.inp", "r")
sys.stdout = open("prob.out", "w")
"""
file_in = open("prob.inp")
file_out = open("prob.out", "w")
n = int(file_in.readline())
data = file_in.readline()
# Main

file_in.close()
file_out.close()