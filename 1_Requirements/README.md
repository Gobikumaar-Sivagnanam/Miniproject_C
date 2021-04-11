# Requirements: 

## Introduction

 * During my engineering course, there was a subject, Applied Numerical Methods (ANM), which demonstrated the numerical methods that can be applied to solve problems like finding the roots of a non-linear function, finding the value of integration or differentiation at a point for a function.
 * These algorithms are tedious to solve, so I always thought it would be useful to have a tool that could solve such problems.
 * This is the motivation for the Miniproject in which I will try to implement the different numerical methods algorithms to achieve the above mentioned tasks.

 ## Research

 ### Need and Importance of Numerical Methods

  * Numerical methods are already being used in computations performed by computers as the algorithms are iterative or are closely related to how many programming languages define the datatypes for performing these algorithms.
  * Hence numerical methods have become important and have their own precence in the modern world due to the rise in computational capabilities.
  * They are able to produce useful results, this is because problems which cannot be solved can be cleverly approximated using numerical methods.
  * This is the reason why numerical methods are being using in applied mathematical problems, as the direct solution for such problems might not be possible or is time consuming. Yet we can get a result close to the real solution with a margin of error which is acceptable.
  * Numerical approach enables solution of complex problem with a great number of smaller but simpler operations, which make it a perfect match to implement with computers.

### Implementation with Programming Language C

  * C defines datatypes like double which have high precision and can be used to implement the algorithms with high accuracy. 
  * The loops and precision can be used to iterate the algorithms in an efficient manner. 
  

  ## Cost and Features

  ### Cost:
   * Cost of the program depends on the input function and complexity of the algorithm. 
   * Cost can be calculated in terms of the computation performed and/or based on the plaform where the progam is being executed. 

  ### Features:
   * The input can be improved by taking input as an abstract data type and then parsing this as a string for identification and performing the needed function on top of this string.
   * Functions can be expanded to run on any function.
   * Root Functions can be designed to find all the roots of the given non-linear function.
   * Integration and differentiation can be made to be analytical with intensive designing.


## Defining The System
  ![Basic System Overview](https://github.com/Gobikumaar-Sivagnanam/Miniproject_C/blob/main/1_Requirements/System%20Design.png)
  * Creating individual functions to implement the different algorithms for each of the tasks e.g., Newton Raphson Method, Bisection Method, Regula Falsi Method.
  * Creating a function which calls the methods implemented based on an option.
  * Creating a main driver program to select the functionality, i.e. Finding root of a Non-linear Function, Numerical Differentiation or Numercial Integration.
  
## SWOT Analysis
![SWOT Analysis](https://github.com/Gobikumaar-Sivagnanam/Miniproject_C/blob/main/1_Requirements/SWOT%20Analysis.png)

# 4W&#39;s and 1&#39;H

## Who:
 * Students facing difficulty with implementation.
 * People curious on how numerical algorithms work;

## What:
 * Using C programming to implement the numerical algorithms.

## When:
 * Thought came to my mind when I was studying Applied Numerical Methods subject during my enginnering.

## Where:
 * Open source so anyone can use it, and help in improving it.

## How:
 * Thinking about how the implementation of mumerical methods are similar to how a computer operates.

 # Detailed Requirements:

 ## High Level Requirements:
 * Function to call the functionalities of finding the root, numerical integration and numerical differentiation.
 * Functions to implement the individual Algorithms.

 ## Low Level Requirements:

| Function Name | Function Input | Function Description | Function Output |
|---------------|----------------------|-----------------|---|
| bisection.c | 