#include <stdio.h>
#include "sum.h"

int sum_of_five_digits(int input){

    // input = 12345;
    int reminder, sum = 0;

    while(input != 0)
    {
        reminder = input % 10; // get the last digit
        sum = sum + reminder; // add the digit to sum
        input = input / 10;  // remove the last digit

    }
     return sum;
}

int findReverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n = n/10;
   }
   return sum;
}

int countoccurence(int number , int digit){

    int rem, count;

    count = 0;
    while(number>0){
        rem = number % 10; //to separately consider each digit one by one
        if(rem == digit)
            count++;      //checks if the number entered is present and stores in a counter
        number = number / 10;      //remaining digits in the entered number and stored in number
    }
    return count;
}

int check_palindrome_or_not(int n){

    int original,reverse;
    original = n;

    reverse = findReverse(n);
    if(original == reverse)
        return 0;
    else
        return 1;
}

int is_prime_number(int input)
{
    int i;

    for(i=2; i <= input/2; i++)
    {
        if(input % i == 0)
            return 0;
    }

    return 1;

}
int generate_first_n_prime_numbers(int limit)
{
    int count = 0, input = 2;

    while(count < limit)
    {
        if(is_prime_number(input)){ // check if it is a prime number
            count++; // keep track of prime numbers
            printf("%d \t", input); // display the prime number
        }

        input++; // choosing next number
    }

    return count;
}

