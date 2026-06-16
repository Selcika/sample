/*
 ============================================================================
 Name        : DAY01.c
 Author      : selcika
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Check a number is a Positive or negative.

#include <stdio.h>


int main()
{
    int num;
    num=44;

    if(num > 0)
        printf("The number %d is Positive", num);
    else if(num < 0)
        printf("The number %d is Negative", num);
    else
        printf("The number is Zero");

    return 0;
}
