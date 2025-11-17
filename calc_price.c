/*------------------------------------------------------
* Filename: calc_price
* Description: This program will calculate the price for delivaring a package which gets it width, length and weight. prints the price, weight in kg and dimentions on cm squared.
* Author:Yonatan shami
-------------------------------------------------------*/
#include <stdio.h>

int main(void){
    /*all const numbers of prices and convertions*/
    const float delivery = 5.5;
    const int for_every_kg = 11;
    const float for_every_cm_squared = 0.03;
    const float from_mm_to_cm = 0.1;
    const float from_gr_to_kg = 0.001;
    const float for_extra = 0.01;

    int length, width, weight;
    float price=0.0;

    /*inputs length, width, weight*/
    printf("enter the length and width of your package in mm:\n");
    scanf("%d %d", &length, &width);
    printf("enter the weight of your package in grams:\n");
    scanf("%d", &weight);

    float dim_cm_squ = (from_mm_to_cm*length)*(from_mm_to_cm*width);/*package's dimentions calculation with convertions to cm*/
    float weight_kg = from_gr_to_kg*weight;/*package's weight calculation with convertions to kg*/
    float extra= (for_extra*dim_cm_squ)/(weight_kg);/*extra price calculation*/
    price+= delivery+for_every_kg*(from_gr_to_kg*weight)+for_every_cm_squared*((from_mm_to_cm*length)*(from_mm_to_cm*width))+extra;/*total price calc*/
    
    printf("the package dimentions in cm squared is: %.2f\n", dim_cm_squ);
    printf("the weight of the package in kg is: %.3f\n", weight_kg);
    printf("the total price for the package delivery: %.2f\n", price);
}