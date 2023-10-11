#include<stdio.h>
#include<conio.h>
#include<direct.h>
#include<stdlib.h>
int brick();
void about();
void review();
#define B1_PRICE 12000  //per 1000 bricks   
#define B2_PRICE 11000  //per 1000 bricks
#define B3_PRICE 10000  //per 1000 bricks
int main()
{
    int options ; 
    // Hearder apperance of industry 
    printf("_________________________________________________________________________________\n") ;
    printf("\n                       \3   B.M.N BRICKS & TRUST    \3           Since : 2003  \n") ;
    printf("_________________________________________________________________________________\n") ;
    printf("\nThankyou of visiting us...\3\n ");
    printf("\n\n");
    
        // Service options  providing by the   
    printf("Chose your option\n\n");
    printf(" 1. Buying Bricks\n");
    printf(" 2. Just Exploring\n ");
    printf("3. For Feedback \n\n");

    printf("Enter the any one option : ");  // Take input as per the user intrest 
    scanf("%d",&options);
    switch (options)
    {
    case 1 :                          // cases as per user input 
        brick();
        break;

    case 2 : 
        about();
        break ;

    case 3 :
        review();
        break ;

        default:
        main();
        break;
    }
}
int brick()
{   int amobri ;  // brick price as per pices
    int brinum ;  // quantity of bricks
    long int total ; // use of long kayword for accuracy  
    typedef int brickquality ;
    brickquality B1,B2,B3 ;
    B1 = 12 ; B2 = 11 ; B3 = 10 ;
    int choice;
    char conti ;

    printf("Price according to quality & per 1000 bricks_______\n\n");  //displaying the bricks price according to quality
    printf("B1 BRICKS :%d\n",B1_PRICE);
    printf("B2 BRICKS :%d\n",B2_PRICE);
    printf("B3 BRICKS :%d\n\n",B3_PRICE);

    printf("Which Quality do you want(1,2,3) : ");  // take input for quality
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter the number of brick you want to buy : ");         // take input for numbers of bricks 
        scanf("%d",&brinum);                                    
        printf("All Right now its time to pay...\n");
        total =(brinum*B1 ) ;
        printf("Total Price : %d\n",total);                             // Display the total price 
        break;
    case 2:
        printf("Enter the number of brick you want to buy : ");         // take input for numbers of bricks
        scanf("%d",&brinum);
        printf("All Right now its time to pay...\n");
        total =(brinum*B2 ) ;
        printf("Total Price : %d\n",total);                              // Display the total price 
        break;
    case 3:
        printf("Enter the number of brick you want to buy : ");         // take input for numbers of bricks
        scanf("%d",&brinum);
        printf("All Right now its time to pay...\n");
        total =(brinum*B3 ) ;
        printf("Total Price : %d\n",total);                             // Display the total price 
        break;
            
          
        default:
        printf("SORRY But , There are only three quality of brick .\n\n");
        printf("Do you want to continue (Y or N) : ");       // asking for continue or not 
        scanf("%s",&conti);
        if(conti = 'y' || 'Y')
        {
            brick();
        }
        else
        {
            printf("Exit Done. \n");
        }
        
        break;
    }

    
}
void about()
{   char conti ;
//                                                                           modal of industry 
   printf("                             |^|\n          ");
   printf("                  |   |\n   ");
   printf("                        |     |\n  ");
   printf("                        |       |  \n ");
   printf("                        |\t   |\n");
   printf("                         |\t   |\n");
   printf("                         |\t   |\n");
   printf("                         |\t   |\n");
   printf("                         |\t   |\n");
   printf("                         |\t   |\n");
   printf("                         |    B    |\n");
   printf("                         |  B M N  |\n");
   printf("                         |    N    |\n");
   printf("                         |\t   |\n");
   printf("                         |\t   |\n");
   printf("                         |\t   |\n");
   printf("                         |\t   |\n");
   printf("                         |\t   |\n");
   printf("                         |_________|\n");

    printf("About the company_________\n");
    printf("--------------------------\n\n");
    printf("This Company is Originally Established in 2002 by Great Hand Of \"SHIRI RAM TIWARI\", \nIt Started at 15 Aug 2003 After the birth of his Grandson Murari . ");
    printf("Its spread over the 10 acres\n");
    printf("\n Address  : Mahammadapur , Saran (Bihar) Near M.D HIGH SCHOOL Mahammadpur\n Pin Code : 841223 \n\n ");
    printf("Do you want to continue (Y or N) : ");
        scanf("%s",&conti);
        if(conti = 'y' || 'Y')
        {
            main();
        }
        else
        {
            printf("Exit Done. \n");
        }
    
}
void review()
{   int star ;
    char conti ;
    char str2[20] ;
    char str1[1000]; 
    printf(" 1. Murari Tiwari\t *****\n Good Quality Bricks Provider\n\n");
    printf(" 2. Vikash Tiwari\t ****\n Quality is too good.\3\n\n ");
    printf("You can also give the feedback .\nwrite down your review -\n\n");
    
    printf("Rate with the star(1-5) : "); 
    scanf("%d",&star);
    fflush(stdin);

    printf("Name : ");
    gets(str2);
    fflush(stdin);

    printf("Now write your discription -\n");
    gets(str1);
    fflush(stdin);
    printf("Name : %c\t Star : %d",star);
    if(star==1)
    {
        printf("*");
    }
    else if(star==2)
    {
        printf("**");
    }
    else if(star==3)
    {
        printf("***");
    }
    else if(star==4)
    {
        printf("****");
    }
    else if(star==5)
    {
        printf("*****");
    }
    else
    printf("Sorry");

    
    printf("\n\n\nThankyou for sharing your feedback. \3\n\n\n");
    printf("Do you want to continue (Y or N) : ");
        scanf("%s",&conti);
        if(conti = 'y' || 'Y')
        {
            main();
        }
        else
        {
            printf("Exit Done. \n");
        }

}