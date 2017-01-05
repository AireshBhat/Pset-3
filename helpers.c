/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int flag = 0;
    if (n > 0)
    {
        int mid;
        int beg = 0;
        int end = n - 1;
        while (beg <= end)
        {
            mid = (beg + end) / 2;
            if (values[mid] == value)
            {
                flag = 1;
                break;
            }
            if (values[mid] < value)
            {
                beg = mid + 1;
            }
            if (values[mid] > value)
            {
                end = mid - 1;
            }
        }
    }
    if (flag == 1)
    {
        return true;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    return;
}