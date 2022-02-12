
# Description
## Basic Calculator
Basic Calculator is a project which can help the user to do simple maths calculations like Addition, Subtraction ,Multiplication ,division , Factorial, Power ,modulas,Finding Cube in faster and  accurate manner.
So in this project the input has to be in a form "Number1 (Operator) Number2". For example (5+6).In some example the input can be just single integer value example in case of factorial and cube.
##  What is the purpose of a basic calculator?
*A basic calculator is sometimes referred to as a 4-function calculator. It's able to do simple arithmetic operations, which includes addition, subtraction, multiplication, and division. Use a basic calculator at home to figure out your monthly budget, or when you're trying to cook a new recipe*
## Requirements
# High Level Requirements:-
|ID|Description|Category|Status|
|------|-------|---------|--------|
|HR01|User should able to know what operations he/she can perform|TECHNICAL|IMPLEMENTED|
|HR02| User should able to view operation list|TECHNICAL|IMPLEMENTED|
|HR03|User should able to select the operation efficiently|TECHNICAL|IMPLEMENTED|
|HR04|The system should able perform the given operation|TECHNICAL|IMPLEMENTED|
|HR05|The system should provide Accurate/correct result with less time|TECHNICAL|IMPLEMENTED|
# Low Level Requirements:-
|ID|Description|Category|Status|
|------|-------|---------|--------|
|LR01|If the calculations is impossible the calculator has to display information helping the user to resolve the erroneous situation|TECHNICAL|IMPLEMENTED|
|LR02|On encountering a division by 0 the display should read "Cannot divide by 0" and by typing the key “C” should reset the calculator|TECHNICAL|IMPLEMENTED|
|LR03|On calculating the square root value of a negative operand, the display should read "Wrong operand"|TECHNICAL|IMPLEMENTED|
|LR04|User Friendly UI Of Calculator|TECHNICAL|IMPLEMENTED|
# SWOT
## STRENGTHS
* The  strength of this Calculator is its user-friendly nature and long lasting etc..
## WEAKNESSES
* Do not inlude all the operations rather have onlty addition,subtraction multiplication, division ,modulas ,power and factorial.
## OPPORTUNITIES
* The tech-based market has a huge opportunities in capturing the youth market. And this calculator comparatively already one step ahead than othe
## THREATS
* The slower growth in technological innovation will also bring a significant threat in the upcoming dynamic world.
# 5W's and 1H's
## Who
* Students who want to solve mathematics related problems for their academic work.
* Datascience workers working on machine learning and deep learning applications which majorly involve matrice Software engineer.
* Researchers and mathematicians.
## What
* Calculate the sum, differemce, product of two matrices and also the determinnt, transpose and inverse of a single matrix.
## When
* Students facing a difficulty in solving a matrix related problem, can use this program to conform their outputs.
* Researchers can use it for getting a quick calculation output.
* Comes to a great use when calculating for matrices of huge order.
## Where:
* Students, employees and researchers all over the world.
## How:
* This program can be executed in a system which has Linux or Windows operating system.
# Architecture
## Behavioural Diagram
## Flowchart
![flowchart](https://user-images.githubusercontent.com/98874290/153408198-bd151a78-f101-44f4-977b-689349e41f78.png)
## Sequence Diagram
![Sequence Diagram](https://user-images.githubusercontent.com/98874290/153408384-fba0b6b2-03b5-4d4a-afd2-22ab45d5533d.png)
## Diagram
![diagram](https://user-images.githubusercontent.com/98874290/153551820-02ce86fd-0bb1-497a-be3f-4fbefcdb1b19.png)
## case study
![case study](https://user-images.githubusercontent.com/98874290/153702804-21fda314-f809-42ee-92e8-5801b7af0bfa.jpg)

# Implementation
* Code in C programming using Multifile Programming and Unit Testing.
* Tools Used - VS Code 

# Test plan & output.
## High Level test Plan
|Test ID|Description|Exp I/P|Exp O/P|Actual Output|Type of Test|
|------|------|------|------|-------|------|
|H01|Check if the code is working as expected, by considering the test cases|Valid input|Correct output|Correct output|Manual testing|
|H02|Check if the system handles boundary conditions|Invalid input|Termination|Terminated|Manual testing|
|HO3|Check for the flow control Jumping|For valid input|Jumping correctly|Jumping correct|Manual testing|
|H04|Check for the flow control jumping|For invalid|Terminating|Terminate|Manual testing|
## Low level test Plan
|Test ID|Function|Exp I/P|Exp O/P|Actual Output|Type of Test|
|------|--------|--------|--------|--------|--------|
|L_01|addition|Int value|Int output|Int output|Unit test|
|L_02|addition|Float value|Termination|Termination|Unit test|
|L 03|subtraction|Int value|Int output|Int output|Unit test|
|L_04|subtraction|Float value|Termination|Termination|Unit test|
|L_05|multiplication|Int value|Int output|Int output|Unit test|
|L_06|multiplication|Float value|Termination|Termination|Unit test|
|L_07|division|Int value|Int output|Int output|Unit test|
|L_08|division|Float value|Termination|Termination|Unit test|
|L_09|power|Int value|Int output|Int output|Unit test|
|L_10|power|Float value|Termination|Termination|Unit test|
|L_11|modules|Int value|Int output|Int output|Unit test|
|L_12|modulus|Float value|Termination|Termination|Unit test|
|L_13|factorial|Int value|Int output|Int output|Unit test|
|L_14|factorial|Float value|Termination|Termination|Unit test|
|L_15|Cube|Int value|int output|int output|unit test|
|L_16|Cube|Float value|Termination|Termination|Unit test|

# Input & Output Images
![4b1a34b1-95b5-4247-958b-cb6ff5795f69](https://user-images.githubusercontent.com/98874290/153697540-bb35ffd3-8d88-48e0-b08e-a1033bb60bb8.jpg)
![8b72d467-34cd-4177-916c-7aebf8e420f1](https://user-images.githubusercontent.com/98874290/153697544-c9a52e1c-b3f4-435a-869b-5ce68f16b6d3.jpg)
![b16e111f-0cad-4f45-843b-cdce73a061db](https://user-images.githubusercontent.com/98874290/153697547-9ebe61ce-d0ee-4f72-963f-87d407770056.jpg)
![a61e2b2c-e913-451e-b0d7-703ef682054c](https://user-images.githubusercontent.com/98874290/153697549-db765f2d-ee9d-458c-b252-4118d0d6c107.jpg)






## Features
* This calculator can be used to do simple math calculation in very fast and efficient way.
* User Friendly interface.
* Accurate.
## Future scope of the project
* Various Mathematical Operations can be added.
* Trignometric calculations can be added.
* Calculation of Binary no. can be possible



# Badges 

|Code Grade|Code Score|Code Badge|Build Status|Static Check|
|-------|-------|--------|--------|--------|
|![Code grade](https://api.codiga.io/project/31116/status/svg)|![code score](https://api.codiga.io/project/31116/score/svg)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/b75ec0ae86914c028f4167ae390276d1)](https://www.codacy.com/gh/AkshayEknathe/M1_Operations_Utility/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=AkshayEknathe/M1_Operations_Utility&amp;utm_campaign=Badge_Grade)|[![Build-linux](https://github.com/AkshayEknathe/M1_Operations_Utility/actions/workflows/Build-linux.yml/badge.svg)](https://github.com/AkshayEknathe/M1_Operations_Utility/actions/workflows/Build-linux.yml)|[![cppcheck](https://github.com/AkshayEknathe/M1_Operations_Utility/actions/workflows/Static-Check.yml/badge.svg)](https://github.com/AkshayEknathe/M1_Operations_Utility/actions/workflows/Static-Check.yml)|

|Codiga Dashboard|
|-------|
|https://app.codiga.io/public/project/31116/M1_Operations_Utility/dashboard|




# References
https://github.com/stepin654321/MiniProject_Template.git