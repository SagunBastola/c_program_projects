#include<stdio.h>
#include<unistd.h> //for sleep function
#include<time.h> //for sleep function
#include<stdlib.h> //to acess system function
void main()
{
    int min=0,hr=0,sec=0;
    while(1)
    {
        system("clear");
        printf("%02d:%02d:%02d",hr,min,sec);
        fflush(stdout);//for clearing the buffer
        sec++;;
        if(sec==60)
        {
            min++;
            sec=0;
        }
        if(min==60)
        {
            hr++;
            min=0;
        }
        if(hr==24)
        {
            hr=0;
        }
        sleep(1);//this function is used to hold the screen for 1 sec
    }
    
}