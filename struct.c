#include<stdio.h>

struct time{
    int hour;
    int minute;
    int seconds;
};

void diff(struct time s1, struct time s2){
    printf("The time difference is: \n");
    int h = s1.hour - s2.hour;
    int m = s1.minute - s2.minute;
    int s = s1.seconds - s2.seconds;
    printf("The difference is %d hours, %d minutes, %d seconds\n", h, m, s);
}

int main(){
    struct time s1, s2;

    printf("Enter the starting time in hours, minutes, and seconds: ");
    scanf("%d %d %d", &s1.hour, &s1.minute, &s1.seconds);

    printf("Enter the ending time in hours, minutes, and seconds: ");
    scanf("%d %d %d", &s2.hour, &s2.minute, &s2.seconds);

    diff(s1, s2);
    
    return 0;
}
