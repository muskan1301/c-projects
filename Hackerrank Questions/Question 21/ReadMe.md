# Question 21
In this example, you will learn to find the roots of a quadratic equation in C programming.
The standard form of a quadratic equation is:

__ax<sup>2</sup> + bx + c = 0,__

__Where__
a, b and c are real numbers and a != 0

The term __b<sup>2</sup>-4ac__ is known as the discriminant of a quadratic equation. It tells the nature of the roots.
__If the discriminant is greater than 0, the roots are real and different.__
__If the discriminant is equal to 0, the roots are real and equal.__
__If the discriminant is less than 0, the roots are complex and different.__

![Formulae](https://s3.amazonaws.com/hr-assets/0/1601890339-8b9649f529-roots-of-quadratic-equation_0.png)

### Input Format
```
coefficients a, b and c
```
### Constraints

a, b and c are real numbers and a != 0

### Output Format
```
roots of the quadratic equation
```
### Sample Input 0
```
2 3 4
```
### Sample Output 0
```
root1 = -0.75+1.20i and root2 = -0.75-1.20i
```
### Sample Input 1
```
2 5 1
```
### Sample Output 1
```
root1 = -0.22 and root2 = -2.28
```
### Sample Input 2
```
2 0 0
```
### Sample Output 2
```
root1 = root2 = -0.00
```
