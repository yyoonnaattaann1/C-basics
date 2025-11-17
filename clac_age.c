/*------------------------------------------------------
* Filename: clac_age
* Description: This program will calculate the age of a person based to inputes of current and birth dates
* Author:Yonatan shami
-------------------------------------------------------*/
#include <stdio.h>


int main(void){
    const int days_in_month = 30;/*const numbers of the year*/
    const int months_in_year = 12;
    const int days_in_year =365;
    
    int current_day, current_year, current_month;/*input variables*/
    int birth_day, birth_year, birth_month;

    float age_years=0;/*can be float number*/
    float age_months=0;
    int age_days=0;

    printf("enter the current date today\n");/*inputs the current date*/
    scanf("%d/%d/%d", &current_day, &current_month, &current_year);

    printf("enter your birthday date\n");
    scanf("%d/%d/%d", &birth_day, &birth_month, &birth_year);/*inputs birthday*/

    /*the calculation is based on current-birth*/
    age_days= (current_year*days_in_year + current_month*days_in_month + current_day)-(birth_year*days_in_year + birth_month*days_in_month + birth_day);
    age_months= (current_year*months_in_year + current_month + (float)current_day/days_in_month)-(birth_year*months_in_year + birth_month + (float)birth_day/days_in_month);
    age_years= (current_year + (float)current_month/months_in_year + (float)current_day/days_in_year)-(birth_year + (float)birth_month/months_in_year + (float)birth_day/days_in_year);

    printf("Gray's age in days is: %d\n", age_days);
    printf("Gray's age in months is: %f\n", age_months);
    printf("Gray's age in years is: %f\n", age_years);
}