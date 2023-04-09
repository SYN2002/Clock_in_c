#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int h,m,s;
	int d=1;//we add a delay of 1000 millisecond and we will use it in the function sleep

    time_t st, val = 1;
    struct tm* curr_time;
    st = time(NULL); //This will store the time in seconds
    curr_time = localtime(&st); //get the current time using localtime()
    //Display in HH:mm:ss format
    printf("%02d:%02d:%02d", curr_time->tm_hour, curr_time->tm_min,curr_time->tm_sec);

    h=curr_time->tm_hour,m=curr_time->tm_min,s=curr_time->tm_sec;
	
	while(1){
	// this is  an infinite loop and anything inside will repeat itseelf infinity
		s++;
		
		if(s>59){
			m++;
			s=0;
		}
		
		if(m>59){
			h++;
			m=0;
		}
		
		if(h>24){
			h=1;
		}

		printf("\nClock ");
		printf("\n%02d:%02d:%02d",h,m,s); // this writes our in this format 00:00:00
		sleep(d); //the function sleep slows down the while loop make it more like real clock
		system("clear"); //this  clear the screen
	}
	
}
