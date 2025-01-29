#include <stdio.h>
#include <time.h>

int main() {
    time_t s, v;
    struct tm* current_time;
    s = time(NULL);

    current_time = localtime(&s);   
    
    printf("%02d:%02d:%02d\n", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
    printf("%02d/%02d/%d\n", current_time->tm_mday, current_time->tm_mon + 1, current_time->tm_year + 1900);



}