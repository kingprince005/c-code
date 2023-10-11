#include<stdio.h>
#include<conio.h>
#include<math.h>
int add();
int sub();
int multi();
int div();
int large();
int even_odd();
int factorial();
int leapyear_or_not();
int squre_root();
int CtoF();
int simple_intrest();
int KMTOM();
int Interchange();
int sumofnaturalnumber();
int main()
{ int Choice ;
   printf("Welcome From prince. \3\nAnd Thankyou for Visiting this Program. \3\n");
   printf("1. Press 1 and Enter for Addition\n2. Press 2 and Enter for Subtract\n3. Press 3 and Enter for Multipilication\n4. Press 4 and Enter for Divison\n5. Press 5 and Enter for Finding the Large\n6. Press 6 and Enter for Odd or Even\n7. Press 7 and Enter for Finding the  Factorial of A Number\n8. Press 8 and Enter for Finding the leap or not \n9. Press 9 and Enter for Squre Root\n10. Press 10 and Enter for C to F \n11. Press 11 and Enter for simple intrest\n12. Press 12 and Enter for Interchange in KM & Meter\n13. Press 13 and Enter for Interchange of two number\n14. Press 14 and Enter for sum of natural number\n");
   printf("Enter the Choice : ");
   scanf("%d",&Choice);
   if(Choice==1)
   {
   add();
   }
   else if (Choice==2)
   {
   sub();
   }
   else if(Choice==3)
   {
   multi();
   }
   else if(Choice==4)
   {
   div();
   }
   else if(Choice==5)
   {
   large();
   }
   else if(Choice==6)
   {
   even_odd();
   }
   else if(Choice==7)
   {
    factorial();
   }
   else if(Choice==8)
   {
    leapyear_or_not();
   }
   else if(Choice==9)
   {
    squre_root();
   }
   else if(Choice==10)
   {
    CtoF();
   }
   else if(Choice==11)
   {
    simple_intrest();
   }
   else if (Choice==12)
   {
    KMTOM();
   }
   else if (Choice==13)
   {
    Interchange();
   }
   else if(Choice==14)
   {
    sumofnaturalnumber();
   }
   else 
   {
    printf("Please Select Those Options are Given.\nThankyou\3\n");
   }
 getch();
   

}

int add()
{ 
int a,b,c=0,i;
printf("Enter The Desire Number For Addition : \n");
scanf("%d",&b);
printf("enter the number \n");
for(i=1;i<=b;i++)
{
scanf("%d",&a);
c= c+a;
}
printf("Addition=%d\n",c);
printf("Thankyou \3\n");
return 0;
}
int sub()
{
int a,b,c=0,i;
printf("Enter The Desire Number For Subtract : \n");
scanf("%d",&b);
printf("enter the number \n");
for(i=1;i<=b;i++)
{
scanf("%d",&a);
c= c-a;
}
printf("Subtracation=%d\n",c);
printf("Thankyou \3\n");
return 0;
}
int multi()
{
  int a,b,c=1,i;
printf("Enter The Desire Number For Multipication : \n");
scanf("%d",&b);
printf("enter the number \n");
for(i=1;i<=b;i++)
{
scanf("%d",&a);
c= c*a;
}
printf("Multipication=%d\n",c);
printf("Thankyou \3\n");
return 0;
}
int div()
{
  int a,b,c=0,i;
printf("Enter The Desire Number For Divison : \n");
scanf("%d",&b);
printf("enter the number \n");
for(i=1;i<=b;i++)
{
scanf("%d",&a);
c= c/a;
}
printf("Divison=%d\n",c);
printf("Thankyou \3\n");
return 0;
}
int large()
{
  int A, B, C;
 
    printf("Enter the numbers A, B and C:   ");
    scanf("%d %d %d", &A, &B, &C);
 
    if (A >= B && A >= C)
    { 
        printf("%d is the largest number.\n", A);
        printf("Thankyou \3\n");
    }
 
    else if (B >= A && B >= C)
    {
        printf("%d is the largest number.\n", B);
        printf("Thankyou \3\n");
    }
 
    else (C >= A && C >= B);
    
        printf("%d is the largest number.\n", C);
        printf("Thankyou \3\n");
    
        return 0 ;

}
int even_odd()
{
  int Number ;
  printf("Enter Any Number To Check Odd or Even : ");
  scanf("%d",&Number);
  if(Number%2==0)
  {
    printf("%d is Even Number .\n ",Number);
    printf("Thankyou \3\n");
  }
  else{
    printf("%d is Odd Number .\n",Number);
     printf("Thankyou \3\n");
  }
  return 0;

}
int factorial()
{
   int Number, i=1, f=1 ;
   printf("Enter the number for factorial :  ");
   scanf("%d",&Number);
   do
   {
    f=f*i;
    i++;
    
   } while (i<=Number);
   printf("\n The Factorial of %d is %d . \nThankyou \3\n",Number,f);
  return 0;

}
int leapyear_or_not()
{
  int year ;
  printf("Enter the Year : ");
  scanf("%d",&year);
  if(year%4==0)
  {
    printf("LEAP YEAR\nThe NUmber Of Days is 366");
  }
  else
  {
    printf("NOT LEAP YEAR\n The Number of Day is 365");
  }
  return 0 ;
}
int squre_root()
{
  float sum=0 ;
  int Number , x ;
  printf("Enter Any Number : ");
  scanf("%d",&Number);
  {
    sum=sum+sqrt(x);
  }
  printf("Squre root =%f",sum);
  return(110);
}
int CtoF()
{
  float centigrade , fahrnhite ;
  printf("Enter The Value of Centigrade :");
  scanf("%d", &centigrade);
  fahrnhite=(9/5*centigrade)+32;
  printf(" fahrnhite=%f ",fahrnhite);
  return 0 ;
}
int simple_intrest()
{
  float rate,time,persenteage,SI ;
  printf("Enter the value of persentage :");
  scanf("%f",&persenteage);
  printf("Enter the value of rate :");
  scanf("%f",&rate);
  printf("Enter the value of time :");
  scanf("%f",&time);
  SI=persenteage*rate*time/100;
  printf("Simple Intrest=%f",SI);
  return 0;

}
int KMTOM()
{
  int KM , M , choice ;
  printf("1.KM to M\n2.M to KM\nEnter the Choice :");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    printf("Enter the value of KM :");
    scanf("%d",&KM);
    M= KM*1000 ;
    printf("In %d KM value of Meter is %d",KM,M);
    break ;
    case 2:
    printf("Enter the value of Meter :");
    scanf("%d",&M);
    KM= M/1000 ;
    printf("KILOMETER=%d",KM);
    return 0 ;
  }

}
int Interchange()
 {
   int FirstNumber,SecondNumber,OtherNumber;
   printf("Enter The FirstNumber : ");
   scanf("%d",&FirstNumber);
   printf("Enter The SecondNumber :");
   scanf("%d",&SecondNumber);
   FirstNumber=SecondNumber;
   SecondNumber=OtherNumber;
   OtherNumber=FirstNumber;
   printf("SWAPING OF %d & %d is %d & %d",FirstNumber,SecondNumber,SecondNumber,FirstNumber);
   return 0;
 }
 int sumofnaturalnumber() 
{
    int number , i=1,sum=0 ;
    printf("Enter the any Natural Number : ");
    scanf("%d",&number);
    for(i=1;i<=number; i++)
    {
        sum=sum+i;
    }
    printf("Sum is Equal to  %d",sum);
getch();

}