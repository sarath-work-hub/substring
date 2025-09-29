# substring


## Description
This project solves the **Longest Common Substring (LCSu)** problem using a dynamic programming approach in C++.  
The program builds a DP lookup table, prints it for visualization, and outputs the longest common substring along with its length.  

## Features
- Takes two input strings (assumed to be equal length).  
- Generates and prints the DP table step by step.  
- Outputs the longest common substring and its length.  
- Shows one valid solution in case of ties.  

## Example Usage
Enter first string: ABAB
Enter second string: BABA

DP Lookup Table:
B A B A
0 0 0 0 0
A 0 0 1 0 1
B 0 1 0 2 0
A 0 0 2 0 3
B 0 1 0 3 0

Longest Common Substring: ABA
Length: 3
