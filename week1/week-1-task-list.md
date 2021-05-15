# Task List : Week 1

### Mapping

Write a small python program to take a few numbers as input and make them print as a list.

Sample Input: `1 22 33 44`
Sample Output: `[1, 22, 33, 44]`

### Multiply

Write a small python program to take a few `<space>` seperated numbers as input and make the product of those numbers.

Sample Input: `10 20 30 100`
Sample Output: `600000`

Explanation: `10*20*30*100 = 600000`

### All or Any

You are given a space separated list of integers. If all the integers are positive, then you need to check if any integer is a palindromic integer. Note: Single Digit Numbers are always palindromic

Input Format

The first line contains the space separated list of integers.

Output Format

Print "True" if all the conditions of the problem statement are satisfied. Otherwise, print "False".

Sample Input: `12 9 61 5 14`
Sample Output: `True`

Condition 1: All the integers should be positive (True)
Condition 2: Atleast one of the integers must be palindromic (True)
Since both the conditions are passed that prints "True"

### Nested Lists

Given the names and grades for each student in a class of students, store them in a nested list and print the name(s) of any student(s) having the second lowest grade.
Note: If there are multiple students with the second lowest grade, order their names alphabetically and print each name on a new line.

Input Format:
```
The first line contains an integer, specifying the number of students.
The subsequent lines describe each student over lines.
- The first line contains a student's name.
- The second line contains their grade.
```

Constraints:
```
There will always be one or more students having the second lowest grade.
```
Output Format:
```
Print the name(s) of any student(s) having the second lowest grade in. If there are multiple students, order their names alphabetically and print each one on a new line.
```

Sample Input
```
5
Harry
37.21
Berry
37.21
Tina
37.2
Akriti
41
Harsh
39
```

Sample Output
```
Berry
Harry
```

### ginortS

You are given a string S.
S contains alphanumeric characters only.
Your task is to sort the string in the following manner
All sorted lowercase letters are ahead of uppercase letters.
All sorted uppercase letters are ahead of digits.
All sorted odd digits are ahead of sorted even digits.

Input Format:
`A single line of input contains the string .`

Output Format:
`Output the sorted string.`

Sample Input
`Sorting1234`

Sample Output
`ginortS1324`
