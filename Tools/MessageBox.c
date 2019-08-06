#include<stdio.h>
#include<stdlib.h>
/***********************************************
date:2019 6 19
author:latefly
description:
version:0.0.01
this is basic model to show the message on the LCD screen.
20 messages max and 50 character max for each.



***********************************************/

#define Max_Message 20
#define Max_Character   50


//tips:last byte to mark is used.
char Message[Max_Message][Max_Character]={0};//Init array.
char StatePointer=0;
char LimitedTimes=10;//to show 10 message on screen onece.
char FormatSart[20]={0};

void ShowMessage()
{
    int i,j;
    system("cls");
    i=StatePointer-LimitedTimes;
    if(i<0){
        for(j=Max_Message+i;j<Max_Message;j++)
        {
            if(Message[StatePointer][i]==0x01)printf("%s\n",Message[j]);
        }
        for(i=0;i<=StatePointer;i++)
        {
            printf("%s\n",Message[i]);
        }
    }
    else if(i==0){
        for(j=Max_Message-10;j<Max_Message;j++)
        {
            if(Message[StatePointer][i]==0x01)printf("%s\n",Message[j]);
        }
    }else{
        for(i=0;i<=StatePointer;i++)
        {
            printf("%s\n",Message[i]);
        }
    }

}

char AddMessage(char *message)
{
    char i;
    for(i=0;i<Max_Character-1;i++)
    {
        Message[StatePointer][i]=*message;
        message++;
    }
    Message[StatePointer][i]=0x01;//mark used.
    StatePointer++;
    if(StatePointer==Max_Message)StatePointer=0;
    ShowMessage();
    return StatePointer;
}
//you can limit the quantity of message to show

int main()
{
    char input[50]={0};
    printf("this is a test for MessageBox!!!\n");
    while(1){
        scanf("%s",&input);
        AddMessage(input);//this step to add message and show it to screen.
    }

    return 0;
}


