/*
Suppose we want to read a list of n floating-point quantities and then
calculate their averagc, as in Example 6.17. In addition to simply calculating the average, however, we will also compute
the deviation of each numerical quantity about the average, using the formula
d=x-avg
where *, represents each of the given quantities, i - 1, 2, • - , n, and avg represents the calculated average.
In order to solve this problem we must store each of the given quantities in a one-dimensional, floating-point array.
This is an essential part of the program. The reason, which must be clearly understood, is as follows.
In all of the earlier examples where we calculated the average of a list of numbers, each number was replaced by its
successor in the given list (sec Examples 6.10, 6.13, 6.17 and 6.31). Hence each individual number was no longer
available for subsequent calculations once the next number had been entered. Now, however, these individual quantities
must be retained within the computer in order to calculate their corresponding deviations after the average has been
determined. We therefore store them in a one-dimensional array, which we shall call list.
Let us define list to be a 100-clement, floating-point array. However, we need not make use of all 100 elements
Rather, we shall specify the actual number of elements by entering a positive integer quantity (not exceeding 100) for the
integer variable n.

*/

#include <stdio.h>

int main() {

    
}
