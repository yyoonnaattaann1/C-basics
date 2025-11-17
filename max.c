/*------------------------------------------------------
* Filename: max
* Description: This program will set two variables x,y and set up third one z as the max between the two. The program will print z.
* Author:Yonatan shami
-------------------------------------------------------*/
#include <stdio.h>

int main(void){
    int x=7;
    int y=9;
    int z = (x>y)? x:y;/*condition on wheter x is larger then y*/
    printf("the largest number is: %d", z);

}