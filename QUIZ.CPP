#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
clrscr();
int i,a;
char name[30];
printf("\n\t\t\t -: QUIZ :-\n");
printf(" Press 1.START THE QUIZ \t\t\t\n Press 0.QUIT THE QUIZ \n");
scanf("%d",&i);
switch(i)
{
   case 1:
    printf("\n\t\t\t ENTER YOUR NAME ");
    scanf("%s",&name);
   // printf("\n\t\t\t YOUR NAME IS ",name);
    printf("\n\t\t\t {SELECT AN OPTION AND ENTER THE ANSWER NUMBER}");
    printf("\n\t\t\t Q1 How many main() function we can have in our project");
    printf("\n\t\t\t 1.1\n\t\t\t 2.2\n\t\t\t 3.No limit \n\t\t\t 4.Depend on complier\n\t\t\t");
    scanf("%d",&a);
    if (a==1)
    {
      printf("\n\t\t\t correct.\n");
    }
    else
    {
      printf("\n\t\t\t wrong.\n ");
    break;
    }
    printf("\n\t\t\t Q2 WHAT IS THE SIZEOF() IN C?");
    printf("\n\t\t\t 1. Operator \n\t\t\t 2. Function\n\t\t\t 3.Macro \n\t\t\t 4.None of above\n\t\t\t ");
    scanf("%d",&a);
    if (a==1)
    {
     printf("\n\t\t\t correct.\n ");
    }
    else
    {
    printf("\n\t\t\t wrong.\n");
    break;
    }
    printf("\n\t\t\t Q3 int x=~1; What is the value of 'x' ?");
    printf("\n\t\t\t 1. -1 \n\t\t\t 2. --1 \n\t\t\t 3. -2 \n\t\t\t 4. --2 \n\t\t\t");
    scanf("%d",&a);
    if (a==4)
   {
   printf("\n\t\t\t correct.\n");
   }
   else
   {
   printf("\n\t\t\t wrong.\n");
   break;  
   }
   printf("\n\t\t\t Q4 Identify the incorrect file opening mode from the following.");
   printf("\n\t\t\t 1. r \n\t\t\t 2.w \n\t\t\t 3.x \n\t\t\t 4.a \n\t\t\t");
   scanf("%d",&a);
   if(a==3)
   {
   printf("\n\t\t\t correct. \n");
  }
  else 
  {
   printf("\n\t\t\t wrong. \n");
   break;
   }
   printf("\n\t\t\t Q5 In C, whta are the various types of real data type (floating point data type)?");
   printf("\n\t\t\t 1. Float,long double \n\t\t\t 2. long double,short int \n\t\t\t 3. float,double,long double \n\t\t\t 4. short int,double,long int,float \n\t\t\t");
   scanf("%d",&a);
    if(a==3)
   {
    printf("\n\t\t\t correct.\n");
    }
   else
    {
    printf("\n\t\t\t wrong. \n");
   break;
    }
    printf("\n\t\t\t Q6 Choose the function that is most appropriate for reading in a multi-word string?");
   printf("\n\t\t\t 1. strnset() \n\t\t\t 2. scanf() \n\t\t\t 3. strchr() \n\t\t\t 4. gets() \n\t\t\t");
   scanf("%d",&a);
    if(a==4)
    {
    printf("\n\t\t\t correct.\n");
    }
    else
    {
     printf("\n\t\t\t wrong. \n");
    break;
    }
    printf("\n\t\t\t Q7 Which programming language is more faster among these?");
    printf("\n\t\t\t 1. Java \n\t\t\t 2.PHP \n\t\t\t 3. C \n\t\t\t 4. Visual Basic \n\t\t\t");
    scanf("%d",&a);
    if (a==3)
    {
    printf("\n\t\t\t correct.\n");
   }
   else
    {
    printf("\n\t\t\t wrong.\n");
    break;
    }  
   printf("\n\t\t\t Q8 Which of the following is executed by Preprocess?");
   printf("\n\t\t\t 1. #include<stdio.h> \n\t\t\t 2. return 0 \n\t\t\t 3. void main(int argc,char**argv) \n\t\t\t None of above \n\t\t\t");
   scanf("%d",&a);
   if(a==1)
   {
    printf("\n\t\t\t correct. \n");
   }
    else 
   {
    printf("\n\t\t\t wrong. \n");
  break; 
  }
   printf("\n\t\t\t Q9 How many loops are there in C");
    printf("\n\t\t\t 1. 2 \n\t\t\t 2. 3 \n\t\t\t 3. 4 \n\t\t\t 4. 1 \n\t\t\t");
    scanf("%d",&a);
    if (a==2)
   {
   printf("\n\t\t\t correct. \n");
   }
    else 
    {
    printf("\n\t\t\t wrong. \n");
   break;
    }
    printf("\n\t\t\t Q10 When C Language was invented?");
    printf("\n\t\t\t 1.1970 \n\t\t\t  2. 1972 \n\t\t\t 3. 1978 \n\t\t\t 4. 1979 \n\t\t\t");
    scanf("%d",&a);
     if(a==2)
     {
     printf("\n\t\t\t correct. \n");
    }
     else
     {
      printf("\n\t\t\t wrong.\n");
     } 
    break;
   case 0:
    printf("\n\t\t EXITED....");
    break;
    default:
    printf("\n\t\t INVALID INPUT !!!");
    break;
}
return 0;
}

