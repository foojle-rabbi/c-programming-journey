#include<stdio.h>

int main()
{
    int beng, eng;
    float average = (beng + eng)/ 2;

    printf("Please Enter Your Bengali marks: \n");
    scanf("%d", &beng);
    printf("Now! Enter your English marks: \n");
    scanf("%d", &eng);
    if(beng < 34) {
        printf("Oh dear! you are failed in Bengali.\n");
    } else if(beng < 50) {
        printf("You get C grade in Bengali\n");
    } else if(beng < 60) {
        printf("You get B grade in Bengali\n");
    } else if(beng < 70) {
        printf("You get A- grade in Benglai\n");
    } else if(beng < 80) {
        printf("You get A grade Bengali\n");
    } else if(beng < 101) {
        printf("Great! You get A+ in Bengali.\b");
    } else {
        printf("Please enter a correct value. \n");
    }
    if(eng < 34) {
        printf("Oh dear! you are failed in English.\nBettr luck next time\n");
    } else if(eng < 50) {
        printf("And you get C grade English.\n");
    } else if(eng < 60) {
        printf("And you get B grade in English\n");
    } else if(eng < 70) {
        printf("And you get A- grade in English.\n");
    } else if(eng < 80) {
        printf("And you get A grade in English\n");
    } else if(eng < 101) {
        printf("Great! You get A+ in English.\n");
    } else {
        printf("Please enter a correct value. \n");
    }
        printf("And your average marks is: %.2f", average);
    return 0;

}