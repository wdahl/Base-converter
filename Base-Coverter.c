/*

    William Dahl
    wd347166
    Areeb Khan
    Friday 1:40 */

/*

    This is a c program that accepts two decimal integers, d and r.
    It is assumed that d is nonnegative and that r, which repersents the radix, will be an integter between 2 and 16.
    The program converts the decimal integer d into its repersentation in radix r and prints the result. */

/* includes the stdio libary in c */ #include <stdio.h>

/*

    This is the main function.
    It accepts no paramters and returns 0 to show that the program has been run succsesfully */

int main() { /* d is the deceimal integer to be converted and r is the radix */ int d, r;

printf("Enter the number to be converted: "); fflush(stdout); // Asks user to enter the deceimal to be converted scanf("%d", &d); // Sets the entered number as d printf("Enter the radix for the number to be converted too: "); fflush(stdout); // Asks the user to enter the radix scanf("%d", &r); // Sets the entered number as r

/* answer is an integer array set to size 100 that will be used to store the answer */ int answer[100];

/* hold is an integer that holds the value stored in d by the user */ int hold = d;

/* size is an integer and is used to keep track of the size of the array answer */ int size = 0;

/* this while loop uses the division method to store the answer into the array answer */ while(d != 0) // Will loop as long as d does not equal 0 { answer[size] = d%r; // Sets the elemnt in answer at index size equal to the remainder of d and r d = d/r; // Sets d equal to the quotient of d and r size++; // Increases size by one }

/* temp is an integer that temporarly holds the value stored in the array answer */ int temp;

/* start is an integer that is intinalized to 0 and signifies the element in the array answer to be switched */ int start = 0;

/* end is an integer that is intialized to the size of the array answer and signified the other element to be swithced */ int end = size;

/* this while loop reverses the array answer */ while(start < end) // Will loop as long as start is less than end { temp = answer[start]; // Sets temp to the element stored in answer at start answer[start] = answer[end]; // Sets the elemnet in answer at start to the elemnt in answer at end answer[end] = temp; // Sets the element in answer at end to the value stored in temp start++; // Increases start by one end--; // Decreases end by one }

/* i is an integer to be used as the indix to retrive the value stored in the array answer at i */ int i;

printf("Answer = "); fflush(stdout); // Prints "Answer = " to stdout inorder to indicate the new repersentation of the number in the r radix

/* This if statment checks to see if hold is equal to zero and if so prints 0 */ if(hold == 0) // Checks of hold equals zero { printf("0"); fflush(stdout); // Prints 0 to standerd output }

/* this for loop prints out the elemnets stored in the array answer / for(i = 1; i <= size; i++) // Sets i to 1, will loop until i is greater than size, increases i by one { / This switch statment checks the value stored in answer at i and either gives it a letter repersentation or prints the value */ switch(answer[i]) // Will choose the case to use depending on the value stored in answer at i { case 10: // When the value in answer at i is 10 printf("A"); fflush(stdout); // Prints A in the place of 10 break; // Breaks out of the switch statment

case 11: // When the value in answer at i is 11
  printf("B"); fflush(stdout); // Prints B in the place of 11
  break; // Ends the switch statment
  
case 12: // When the value in answer at i is 12
  printf("C"); fflush(stdout); // Prints C in the place of 12
  break; // Ends the switch statment

case 13: // When the value stored in answer at i is 13
  printf("D"); fflush(stdout); // Prints D in the place of 13
  break; // Ends the switch statment

case 14: // When the value in answer at i is 14
  printf("E"); fflush(stdout); // Prints E in the place of 14
  break; // Ends the switch statment

case 15: // When the value in answer at i is 15
  printf("F"); fflush(stdout); // Prints F in the place of 15
  break; // Ends the switch statment

default: // Happens when one of the above cases is not meet
  printf("%d", answer[i]); fflush(stdout); // Prints the value stored in answer at i
}
}

printf("\n"); fflush(stdout); // Prints a new line return 0; // Returns 0 to confirm that the program ran succsesfully }
