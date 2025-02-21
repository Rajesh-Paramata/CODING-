#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int number,guess,attempts=0;
    srand(time(0));
    number= rand() % 101;
    printf("Welcome to the guessing game...!\n");
    printf("......................GAME STARTS NOW......................\n");
    printf("Guess the number(1-100) correct with minimal attempts to WIN..\nEnter your Guess: ");

    do 
    {
        scanf("%d",&guess);
        if(guess==number){
            printf("**********Congrats.. You guessed it correct and You've Won :)**********");
            break;
        }
        else{
            printf("NO..You guessed it wrong. Try again now.\n");
            attempts++;
        }
        
        if(attempts==3)
        {
            if(number%2==0)
            printf("\tHint: The number is 'EVEN'\n");
            else
            printf("\tHint: The number is 'ODD'\n");
        }
        if(attempts==4){
            int num=number;
            int sum=0,rem;
            while(num>0){
                rem=num%10;
                sum=sum+rem;
                num=num/10;
            }
            printf("\tHint: The sum of the digits in the number is %d\n",sum);
        }
        if(attempts==5){
            int digit=number%10;
            printf("\tFinal Hint: The second digit in the number is %d\n",digit);
        }
        if(attempts>7){
            printf("You attempted too many times and haven't guessed it correct.. you lose :( ");
            break;
        }
    }while(guess!=number);
}