#include<stdio.h>
int days_in_month=[0,31,28,31,30,31,30,31,31,30,31,30,31];
char *month[]=
{
    "\n\n\n",
    "\n\n\nJanuary",
    "\n\n\nFebruary",
    "\n\n\nMarch",
    "\n\n\nApril",
    "\n\n\nMay",
    "\n\n\nJune",
    "\n\n\nJuly",
    "\n\n\nAugust",
    "\n\n\nSeptember",
    "\n\n\nOctober",
    "\n\n\nNovember",
    "\n\n\nDecember"
}
int inputyear()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    return year;
}
int leapyear(int year)
{
    if(year%400==0 || (year%100!=0 && year%4==0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}