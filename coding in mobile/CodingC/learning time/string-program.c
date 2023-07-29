#include<stdio.h>

int main()
{
    char string[100], ch;
    int i,vowel,consonant,word,other;
    i=vowel=consonant=other=0;
    word=1;

    printf("Enter a string ");
    gets(string);

    while(string[i] != '\0') {
        ch = string[i];
        

        if(ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U' ||
                ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u') {
            vowel++;
        } else if(ch >='a' && ch<='z' || ch >='A' && ch<='Z') {
            consonant++;
        } else if(ch == ' ') {
            word++;
        } else {
            other++;
        }
        i++;
    }

    printf("Number of vowel = %d\n", vowel);
    printf("Number of consonat = %d\n", consonant);
    printf("Number of word = %d\n", word);
    printf("Number of others = %d\n", other);


    //printf("You entered: %s\n", string);

    return 0;
}