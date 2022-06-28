#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int list();
void about();
void deposit();
void last();
void transfer();
void withdraw();
void si();
int TotalAmount=1000,Amount,Amo,Tr,Totaldeposit=0,Totalwith=0;
int TotalTr=0;
int Acc;
char name[50];
float principal_amt, rate, simple_interest;
    int time;
void main()
{
printf("\n Enter your name!");
scanf("%s",name);
printf("\n Enter your Acc number!");
scanf("%d",&Acc);
while(1)
{
switch(list())
{
case 1:
deposit();
Totaldeposit+=Amount;
break;
case 2:
withdraw();
if(Amo<=TotalAmount)
Totalwith+=Amo;
break;
case 3:
transfer();
if(Tr<=TotalAmount)
TotalTr+=Tr;
break;
case 4:
si();
break;
case 5:
about();
break;
case 6:
last();
exit(0);
default:
printf("\n invalid choice:");
}
}
}
int list()
{
int ch;
printf("\n1.Deposit Amount:");
printf("\n2.withdraw Amount:");
printf("\n3.transfer Amount:");
printf("\n4.simple interest:");
printf("\n5.about:");
printf("\n6.Exit");
printf("\nEnter your choice:");
scanf("%d",&ch);
return(ch);
}
void deposit()
{
printf("\n Enter the Amount you want to deposit: ");
scanf("%d",&Amount);
TotalAmount+=Amount;
}
void withdraw()
{
printf("\nEnter the amount you wish to withdraw:");
scanf("%d",&Amo);
if(Amo<=TotalAmount)
TotalAmount-=Amo;
else
printf("\nless Amount withdraw is not possible:");
}
void transfer()
{
printf("\n Enter the amount you want to transfer:");
scanf("%d",&Tr);
if(Tr<=TotalAmount)
TotalAmount-=Tr;
else
printf("\n less amount transfer is not possible:");
}
void si()
{
      printf("Enter the values of principal_amt, rate and time \n");
    scanf("%f %f %d", &principal_amt, &rate, &time);
    simple_interest = (principal_amt * rate * time) / 100.0;
    printf("Amount = Rs. %5.2f\n", principal_amt);
    printf("Rate = Rs. %5.2f\n", rate);
    printf("Time = %d years\n", time);
    printf("Simple interest = %5.2f\n", simple_interest);
}
void last()
{
    printf("\n************************************************************");
    printf("\nYour Name=%s",name);
   
    printf("\nyour Account number=%d",Acc);
    printf("\nTotal Amount=%d",TotalAmount);
    printf("\nTotal Deposited Amount=%d",Totaldeposit);
    printf("\nTotal Withdrawn Amount=%d",Totalwith);
    printf("\nTotal Transfered Amount=%d",TotalTr);
     printf("\nSI=%f",simple_interest);
     printf("Dear Customer's, Thank you so much for allowing us to help you with your recent account opening. We are committed to providing our customers with the highest level of service and the most innovative banking products possible.");
 printf ("\n\n************************THANK YOU******************************");
     }
void about()
    {
        printf("\nTHIS IS THE PROJECT CREATED BY 4th SEM ISE STUDENTS OF SDMIT-UJIRE 2021 FOR MINI PROJECT UNDER THE GUIDANCE OF MRS SHOBHA SHARMA THE LIST OF STUDENTS ARE:\nAKSHAY BHANDARKAR H\nADITYA ATIKUKKE\nACHALA\nAISHWARYA " );
    }
