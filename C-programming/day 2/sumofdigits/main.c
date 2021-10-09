#include <assert.h>
#include "sum.h"


int main()
{
    assert(sum_of_five_digits(12345) == 15);
    assert(sum_of_five_digits(47803) == 22);
    assert(sum_of_five_digits(10101) == 03);
    assert(sum_of_five_digits(13579) == 25);

    assert(findReverse(2122) == 2212);
    assert(findReverse(356) == 653);
    assert(findReverse(9834) == 4389);
    assert(findReverse(7654398) == 8934567);
    assert(findReverse(404) == 404);

    assert(countoccurence(33456,3)== 2);
    assert(countoccurence(272727,7)== 3);
    assert(countoccurence(272727,7)== 3);
    assert(countoccurence(11111,1)== 5);

    assert(check_palindrome_or_not(3223) == 0);
    assert(check_palindrome_or_not(983) == 1);
    assert(check_palindrome_or_not(2020) == 1);
    assert(check_palindrome_or_not(2002) == 0);

    assert(generate_first_n_prime_numbers(20));
}

