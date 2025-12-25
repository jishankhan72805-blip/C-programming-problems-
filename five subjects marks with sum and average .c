#include<stdio.h>
#include<conio.h>
void main(){
int sub1,sub2,sub3,sub4,sub5;
int sum;
float average;

printf("Enter the marks of 5 subjects:");
scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);

sum=sub1+sub2+sub3+sub4+sub5;

average =sum/5.0;

printf("sum=%d\n",sum);
printf("average=%.2f\n",average);
getch();
}