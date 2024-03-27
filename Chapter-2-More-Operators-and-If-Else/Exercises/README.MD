# Chapter 2 Exercises

Exercises under the heading **Assessment Exercises** with a tick mark :ballot_box_with_check: must be attempted as a minimum expectation of the programming skills portfolio assessment. The assessment exercises also include some bonus exercises, these do not have to be completed, but doing so offers the potential to attain marks in the higher grade boundaries.

Further exercises are provided for you to practice and develop your programming skills. Completing these exercises is encouraged, although they have **no impact** on the programming skills portfolio mark.

For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository. Once you have completed your solution you should make sure you commit and push the code to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.

---
&nbsp;

## Assessment Exercises

### 1: Can I Vote :ballot_box_with_check:

Write a programme that tells the user whether or not they are eligible to vote.

* The programme should declare and initialise a variable to store the age.
* It should use an if-else statement to compare this value to the UK voting age, which is 18.
* The programme should print a response to the user for each possible outcome.

Use the following starter code to begin writing your solution and fill in the blanks
```C++
________________
________________

int main() {
    _________ //declare and initialise variable to store age
    if(________){ //check if age is greater than or equal to 18
        _______________ //output can vote message
    }else{ //else block if above condition is false (e.g. age under 18)
        ______________ //output can vote message
    }
    ________
}
```

&nbsp;
&nbsp;

### 2: Splashing out :ballot_box_with_check:

Write a programme that decides whether or not you can afford to buy the latest computer game, which costs £25. Use the below pseudocode as the basis of your program and translate this into the required C++ syntax.

```
START
  declare required variables
  OUTPUT "How much money do you have"
  INPUT user inputs money
  IF money >= 25
    OUTPUT "You can buy the game"
    CALCULATE money left after purchase
    OUTPUT "You have " + money + " remaining"
    ELSE
      CALCULATE money needed for the purchase
      OUTPUT "I need to save " + moneyNeeded
  ENDIF
END
```

&nbsp;
&nbsp;

## 3: Theme Park :ballot_box_with_check:

At a Theme Park there is a ride that has both a height restriction and an age restriction. To gain admission to the ride you have to be above 0.6 metres tall AND age 5 and above. Write a program that deals with this situation.

You will need a compound condition and the && logical operator to solve this, e.g:

```
if( first-condition && second-condition ){
       //output can ride message
}else{
       //output can't ride message
}
```

&nbsp;
&nbsp;

## 4: Starting a Band :ballot_box_with_check:

You want to start a two-piece band, but first you need a friend to join it. If you have a musical friend, you next need to check (using a nested IF statement) that they actually play an instrument you want in the band. You decide that they need to play either guitar OR drums to join.

Write a program that checks to see if you can start a band! You should use the following variables to write your program:

```C++
bool musicalFriend = true;
string friendPlays = "guitar";
```

Use the following psuedo-code as a guide to structure your program:
```
START
    declare required variables
    IF(have musical friend)
          //this IF is nested inside the first
          IF(friend plays guitar OR drums)
              output can play message                  
          ELSE
              output can't play message
          ENDIF
    ELSE
        output can't play message
    ENDIF
END
```

&nbsp;
&nbsp;

### Bonus Assessment Exercise: Chessboard Checker

  <img src="https://jakehobbs.co.uk/markdown_images/chessboard.png">

Positions on a chess board are identified by a letter and a number. The letter identifies the column, while the number identifies the row, as shown above

Write a program that reads a position from the user and use an IF statement(s) to determine if the column begins with a black or white square. For example, if the user enters a1 then your program should report that the square is black. If the user enters d5 then your program should report that the square is white.

&nbsp;
&nbsp;

## Further Exercises

### A: Good Morning

Write a programme that tells the user whether it is AM or PM. For the purposes of this programme we are using a 24 hour clock.

* Declare a variable called currentTime and initialise it with the value 3.
* Write an IF-ELSE statement that compares the currentTime to the value, 12.
* If currentTime is greater than or equal to 12 then print “it is PM” to the console.
* If currentTime is less than 12 then print “it is AM” to the console.

Use the starter code below to complete this exercise, filling in the gaps to complete the solution

```C++
#include <iostream>
using ___________ std;

int main() {
    ___________ = 3; //declare and initialise variable for time
    if(____________){ //check if 'currentTime' is greater than 12
        cout << "It's PM" << endl; //output PM message
    }else{ //else 'currentTime' must be less than 12
        _____________________ //output AM message
    }
    return 0;
}
```

*Extension Problem*

Extend the program to include greetings similar to the example in the “Checking multiple conditions with ELSE-IF” section above

* “Good Morning” for times before 12
* “Good Afternoon” for times before 18
* “Good Evening” for times before 21
* “Good Night” for time before 24
* “Time not Valid” for all other times

&nbsp;
&nbsp;

### B: Odd or Even

Write a program that works out if a number is odd or even

*Extension Problem*

Assign the values of the variable via user input.
Include appropriate input error checking

&nbsp;
&nbsp;

### C: Number Checker

Write a program to check whether a number is positive, negative or zero.

&nbsp;
&nbsp;

### D: Profit or Loss

Write a program to calculate profit or loss. The program should ask the user for the purchase price and sale price then calculate whether profit or loss was made on the sale. For example:

>Purchase Price: £1250  
>Sale Price: £1000  
>Loss = £250  

&nbsp;
&nbsp;

### E: Name that Shape
Write a program that determines the name of a shape from its number of sides. Read the number of sides from the user and then report the appropriate name as part of a meaningful message. Your program should support shapes with anywhere from 3 up to (and including) 10 sides. If a number of sides outside of this range is entered then your program should display an appropriate error message.

&nbsp;
&nbsp;

### F: Temperature			
In chapter 1 you wrote a program to convert temperature in Fahrenheit to Celsius. Extend this program by having the computer ask the user the question shown below (with correct formatting!) and then complete the necessary steps:

```
Hello, please enter an option:    
'1': To convert from Fahrenheit to Celsius  
'2': To convert from Celsius to Fahrenheit  
```

Your program should display an appropriate warning message if the user does not enter a valid integer.

&nbsp;
&nbsp;

### G: Primitive Quiz

You have been asked to write a simple question and answer programme. There is only one question to answer: “What is the capital of France”.

* The programme should ask the user this question, then prompt for a response.
* The user then types in an answer.
* If the answer is correct, the programme should tell the user that their answer was correct.
* If the answer is incorrect, the programme should tell the user that their answer was wrong.

*Extension Problem*

* What about capital letters? (e.g. paris vs. Paris)
* Add additional questions.  (e.g. 10 Capitals Cities of Europe Quiz)

&nbsp;
&nbsp;

### H: Dog Days

It is commonly said that one human year is equivalent to 7 dog years. However this simple conversion fails to recognise that dogs reach adulthood in approximately two years. As a result, some people believe that it is better to count each of the first two human years as 10.5 dog years, and then count each additional human year as 4 dog years.

Write a program that implements the conversion from human years to dog years described in the previous paragraph. Ensure that your program works correctly for conversions of less than two human years and for conversions of two or more human years. Your program should display an appropriate error message if the user enters a negative number.

&nbsp;
&nbsp;

### I: Letter Checker

In this exercise you will create a program that reads a letter of the alphabet from the user. If the user enters a, e, i, o or u then your program should display a message indicating that the entered letter is a vowel. Any other letter should display a message indicating the entered letter is a consonant

*Extension Problem*

Have your program handle other character inputs - e.g. provide appropriate messages for numbers or special characters like @, !, # etc. *Hint look up “isalpha c++” and “isdigit c++” on google.*

&nbsp;
&nbsp;

### J: Mark my Words

You are marking test papers for a local college, and need help keeping track of the grade boundaries. For example, you need to be reminded whether 50 - 59% is a C or a D, or if 60 - 69% is a B or an A.
Write a program that does this job for you. Grade Boundaries are as follows:

>A - Above 70%  
>B - 60 - 69%  
>C - 50 - 59%  
>D - 40 - 49%  
>F - Below 40%  

&nbsp;
&nbsp;

### K: Killing Time

You are killing time in the middle of Bath city centre, waiting for your friend who is always late. You receive a text telling you how late they are going to be.

Write a program that follows the below rules:

> Scenario 1: Your friend is going to be another 15 minutes or more
> Result:     If you have more than 3 pounds in change, go buy a coffee, otherwise go for a walk around the town

>Scenario 2:  Your friend is going to with you in less than 15 minutes  
>Result:      Sit in the park and wait (probably grumbling).

You will need to use a nested IF-ELSE statement to complete this task. Please print appropriate text to the console to describe the result of each scenario.

&nbsp;
&nbsp;

### L: Earthquake

The table below contains earthquake magnitude ranges on the Richter scale and their descriptors. Write a program that reads a magnitude from the user and displays the appropriate descriptor as part of a meaningful message. For example, if the user enters 5.5 then your program should indicate that a magnitude 5.5 earthquake is considered to be a moderate earthquake.

| Magnitude             | Descriptor |
| ----------------------| -----------|
| Less than 2.0         | Mirco      |
| 2.0 to less than 3.0  | Very Minor |
| 3.0 to less than 4.0  | Minor      |
| 4.0 to less than 5.0  | Light      |
| 5.0 to less than 6.0  | Moderate   |
| 6.0 to less than 7.0  | Strong     |
| 7.0 to less than 8.0  | Major      |
| 8.0 to less than 10.0 | Great      |
| More than 10.0        | Meteoric   |

&nbsp;
&nbsp;

### M: Triangles

Write a program that asks the user to enter the lengths of the three sides of a triangle.

Use the triangle inequality to determine if we have a triangle: In mathematics, the triangle inequality states that for any triangle, the sum of the lengths of any two sides must be greater than or equal to the length of the remaining side ([see here](https://en.wikipedia.org/wiki/Triangle_inequality))

If valid, have the program correctly classify the type of triangle as either: Equilateral, Isosceles or Scalene ([see here](https://www.mathsisfun.com/triangle.html)).

&nbsp;
&nbsp;

### N: Note Calculator

Write a program that calculates the minimum number of notes required for a given amount of money. Available notes are 500, 100, 50, 20, 10, 5, 2, & 1.

The program should ask the user to enter the amount, then calculate the number of notes. For example:

**Input**
```
Input amount: 575
```


**Output**
```
Total number of notes

500: 1
100: 0
50: 1
20: 1
10: 0
5: 1
2: 0
1: 0
```
