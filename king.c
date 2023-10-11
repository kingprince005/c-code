#include <stdio.h>
#include <conio.h>
int main()
{
    int pass, choice, ur, mb, otp, npass, urpass;
    printf("Enter the password to join us :\n");
    scanf("%d", &pass);
    if (pass=1234)
    {
        printf("Welconme to the world of PRINCE\n");
    }
    else if(pass!=1234)
    {
        printf("Oops wrong password \nPlease try again later");
    }

    printf("How can i help you\n1.By opening your instagram\n2.By forgetting your password\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter your login information\nEnter your username\n");
        scanf("%d", &ur);
        printf("Please enter your paas\n");
        scanf("%d", &urpass);
        if (urpass = 111)
            printf("Congratulation now you can use your insta\n");
        else
            printf("Oops wrong password\n");
        printf("1.Main menu\n2.Exit\n");
        break;
    case 2:
        printf("Enter your mobile number\n");
        scanf("%d", &mb);
        printf("OTP is send please write here :-");
        scanf("%d", &otp);
        printf("Now enter your new password\n");
        scanf("%d", &npass);
        printf("Congrats u have created ur new password\n");
        printf("1.Main menu\n2.Exit\n");
        break;
    case 3:
        printf("How can i help you\n1.By opening your instagram\n2.By forgetting your password\n3.Main menu\n4.exit\n");
        ;
        break;
    case 4:
        printf("Thanks for giving time here\n");
        main();
        break;
    default:
        printf("Please enter the correct number \n");
    }
    getch();
}