# Multi-Channel Data Analysis Using C

## Project Description
This project focuses on analysing Bit Error Rate (BER) values in a fibre-optic communication system. The system monitors three communication channels over four different time intervals and stores the recorded readings in a 3 × 4 two-dimensional array.

The program calculates the average BER for each communication channel and identifies the time interval with the highest combined BER. It also implements input validation to ensure that exactly 12 readings are entered and that every BER value is within the valid range of 0 to 1.

## Objectives
- Store BER readings of three channels across four time intervals using a 2D array.
- Calculate the average BER for each channel.
- Calculate the combined BER for each time interval.
- Identify the interval with the highest combined BER.
- Handle invalid record counts, non-numeric inputs and out-of-range BER values.
- Display the calculated results with appropriate labels.

## Programming Concepts Used
- C Programming
- Two-Dimensional Arrays
- User-Defined Functions
- Nested `for` Loops
- Pointers
- Conditional Statements
- Input Validation
- Macros and Preprocessor Directives

## Functions Used
| Function | Purpose |
|---|---|
| `readData()` | Accepts and validates BER readings. |
| `channelAverages()` | Calculates the average BER of each channel. |
| `peakInterval()` | Identifies the interval with the highest combined BER. |
| `main()` | Controls program execution and displays results. |

## Input Requirements
- Number of channels: 3
- Number of time intervals: 4
- Total BER readings: 12
- Valid BER range: 0.0 to 1.0

## Expected Output
The program displays:
1. Average BER for Channel 1.
2. Average BER for Channel 2.
3. Average BER for Channel 3.
4. The interval with the highest combined BER.
5. The corresponding combined BER value.

## Conclusion
This project demonstrates how C programming concepts can be applied to analyse communication data. By using two-dimensional arrays, functions, loops and pointers, the program efficiently processes BER readings, calculates channel averages and identifies intervals with the highest combined error rates. Input validation also improves the reliability of the program.

## Course Information
- **Course:** Programming for Problem Solving (PPS)
- **Language:** C
- **Project:** Multi-Channel Data Analysis
