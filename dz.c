#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float balance = 5000, bet = 100;
    int x=0,y=0,z=0;
    char baraban[3];
    time_t t;
    srand((unsigned) time(&t));
    printf("Your balance: %.1f\n",balance);
    printf("Bet: %.1f\n",bet);
    do{
        x = rand()%8;
        y = rand()%8;
        z = rand()%8;
        baraban[0]=x+'0';
        baraban[1]=y+'0';
        baraban[2]=z+'0';
        if (!strcmp(baraban,"777")){
            printf("Combination: %s ",baraban);
            printf("Balance: %.1f, you have won the jackpot!!!!!!\n",balance);
            balance+=500000;
            break;
        }
        if(!strcmp(baraban,"111") || !strcmp(baraban,"222") || !strcmp(baraban,"333") || !strcmp(baraban,"444") || !strcmp(baraban,"555") || !strcmp(baraban,"777")){
            printf("Combination: %s ",baraban);
            printf("Balance: %.1f, you win 1000 money!!!\n",balance);
            balance+=1000;
        }
        if(x==5 && y==5 || x==7 && y==7){
            printf("Combination: %s ",baraban);
            printf("Balance: %.1f, you win 100 money!!!\n",balance);
            balance+=100;
        }
        if(x==5 || x==7){
            printf("Combination: %s ",baraban);
            printf("Balance: %.1f, you win 50 money!!!\n",balance);
            balance+=50;
        }
        if (!strcmp(baraban,"666")){
            printf("Combination: %s ",baraban);
            printf("Balance: %.1f, you loose ;(\n",balance);
            balance=0;
            break;
        }
        else{
            balance-=bet;
            printf("Combination: %s ",baraban);
            printf("Balance: %.1f\n",balance);
        } 
    }while(balance>0 || balance==0);
    printf("Your balance: %.1f\n",balance);
    return 0;
}
