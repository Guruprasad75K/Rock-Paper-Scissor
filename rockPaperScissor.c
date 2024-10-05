#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n,i,count=1,input,computer,userPoints=0,computerPoints=0;
    char comp[10]="";
    printf("Enter number of rounds:");
    scanf("%d",&n);
    if(!(n>=1)){
        printf("Invalid Input!!\n");
    }
    
    for (i=1; i <= n; i++) {
        printf("~~~~~~~~~~ Round %d ~~~~~~~~~~\n",count);
        printf("1:Rock, 2:Paper, 3:Scissor :");
        scanf("%d",&input);
        if(!(input>=1 && input<=3)){
            printf("Invalid Input!!\n");
            i--;
            continue;
        }
        computer = rand()%(3-1+1)+1;
        
        if (computer == 1) {
            strcpy(comp, "Rock");
        }
        else if (computer == 2) {
            strcpy(comp, "Paper");
        }
        else if (computer == 3) {
            strcpy(comp, "Scissor");
        }
        
        
        if((computer==1 && input==1) || (computer==2 && input==2) || (computer==3 && input==3)){
            printf("Computer :%s\n",comp);
            printf("User: %d \t Computer: %d\n",userPoints,computerPoints);
            n++;
            count++;
            continue;
        }
        else if((computer==1 && input==2) || (computer==2 && input==3) || (computer==3 && input==1)){
            userPoints++;
        }
        else if((computer==1 && input==3) || (computer==2 && input==1) || (computer==3 && input==2)){
            computerPoints++;
        }
            
        printf("Computer :%s\n",comp);
        printf("User: %d \t Computer: %d\n",userPoints,computerPoints);
        count++;
    }
    if(userPoints>computerPoints){
        printf("\n\n\t\t\tYou Won!!\n\n\n");
    }
    else if(userPoints<computerPoints){
        printf("\n\n\t\tComputer Wins, Better Luck Next Time :)\n\n\n");
    }
    else if(userPoints==computerPoints && userPoints!=0){
        printf("\n\n\t\t\t## Draw ##\n\n\n");
    }
    return 0;
}
