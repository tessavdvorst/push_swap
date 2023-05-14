# push_swap

## Table of Contents
* [General Info](#general-information)
* [Features](#features)
* [Setup](#setup)
* [Usage](#usage)
* [Contributors](#contributors)

## General Information
Push Swap is a project that involves sorting a list of integers using only two stacks and a limited set of operations. The program accepts input from standard input and outputs a series of instructions that will sort the list with the minimal amount of operations. This project is written in C and includes an implementation of the radix sort algorithm.

## Features

### Radix Sort Algorithm
Radix sort is a non-comparative sorting algorithm that sorts the integers by grouping them into buckets based on their digits. The algorithm then sorts the integers by comparing the digits in each bucket, starting with the least significant digit and working its way up to the most significant digit.

### Sorting operations
The available operations are:

sa: swap the first two elements of stack A
sb: swap the first two elements of stack B
ss: swap the first two elements of both stacks
pa: push the first element of stack B onto stack A
pb: push the first element of stack A onto stack B
ra: rotate stack A by one element (the first element becomes the last)
rb: rotate stack B by one element (the first element becomes the last)
rr: rotate both stacks by one element
rra: reverse rotate stack A by one element (the last element becomes the first)
rrb: reverse rotate stack B by one element (the last element becomes the first)
rrr: reverse rotate both stacks by one element

## Setup
To use push_swap, you must first clone this repository.

`$ git clone https://github.com/tessavdvorst/push_swap.git`

Once you have the source code, you can compile it using the provided Makefile.

`$ make`

This will create an executable file called push_swap in the same directory.

## Usage
Once you have compiled the program, you can run it by typing the following command:

`$ ./push_swap [list of integers]`


