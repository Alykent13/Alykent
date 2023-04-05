#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define rent 7000
#define eUnit 30
#define wUnit 200
#define garbage 150
#define security 100

struct houses
{
    char name[50];
    double eBill, eReading,wBill, wReading;
    int totalBill;
} A1, A2, A3, A4;
int sleep();

int main()
{
START:
    char pass[30], pass2[30], password[30],occupied,occupied1,occupied2,occupied3, verify[30];
    int k,j, o = 1, m = 1;
    printf("Create your new password:\n");
    scanf("%s", pass);
    strcpy(password, pass);
    printf("Confirm your password:\n");
    scanf("%s", pass2);
    strcmp(password, pass2);
    k = (strcmp(password, pass2));
    if (k == 0)
    {
        sleep(1);
        printf("Succesfully created your password:\n");

        goto CONT;
    }
    else
    {
        printf("! Your passwords do not match ! : \n    ***** Try again *****\n");
        goto START;
    }
CONT:
sleep(2);
    printf("------------------MONTLY BILLS CALCULATOR------------------\n");
    printf("-----------------------------------------------------------\n");
    printf("\nHouse Number A%d: \n Is the house currently occupied ? (Y= YES) or (N= NO)\n", o++);
    scanf(" %c", &occupied);
    if (occupied == 'Y' || occupied == 'y')
    {
        struct houses;
        {
            printf("Enter the occupant name:\n");
            scanf(" %[^\n]" ,A1.name);
            printf("Electrical meter reading :\n");
            scanf(" %lf", &A1.eReading);
            printf("Enter the water meter reading :\n");
            scanf(" %lf", &A1.wReading);
            A1.eBill = (eUnit * A1.eReading);
            A1.wBill = (wUnit * A1.wReading);
            A1.totalBill = (A1.eBill+A1.wBill+rent+garbage+security);
        }
    }
    else {
        goto ONE;
    }
    ONE:
    printf("------------------------------------------------------------------------------\n");
    printf("House Number A%d: \n Is the house currently occupied ? (Y= YES) or (N= NO)\n", o++);
    scanf(" %c", &occupied1);
    if (occupied1 == 'Y' || occupied1 == 'y')
    {
        struct houses;
        {
            printf("Enter the occupant name:\n");
             scanf(" %[^\n]" ,A2.name);
            printf("Electrical meter reading : \n");
            scanf(" %lf", &A2.eReading);
            printf("Enter the water meter reading : \n");
            scanf(" %lf", &A2.wReading);
            A2.eBill = (eUnit * A2.eReading);
            A2.wBill = (wUnit * A2.wReading);
            A2.totalBill = (A2.eBill + A2.wBill + rent + garbage + security);
        }
    }
    else {
        goto TWO;
    }
    TWO:
    printf("------------------------------------------------------------------------------\n");
    printf("House Number A%d: \n Is the house currently occupied ? (Y= YES) or (N= NO)\n", o++);
    scanf(" %c", &occupied2);
    if (occupied2 == 'Y' || occupied2 == 'y')
    {
        struct houses;
        {
            printf("Enter the occupant name: \n");
             scanf(" %[^\n]" ,A3.name);
            printf("Electrical meter reading : \n");
            scanf(" %lf", &A3.eReading);
            printf("Enter the water meter reading : \n");
            scanf(" %lf", &A3.wReading);
            A3.eBill = (eUnit * A3.eReading);
            A3.wBill = (wUnit * A3.wReading);
            A3.totalBill = (A3.eBill + A3.wBill + rent + garbage + security);
        }
    }
    else {
        goto THREE;
    }
    THREE:
    printf("------------------------------------------------------------------------------\n");
    printf("House Number A%d: \n Is the house currently occupied ? (Y= YES) or (N= NO)\n", o++);
    scanf(" %c", &occupied3);
    if (occupied3 == 'Y' || occupied3 == 'y')
    {
        struct houses;
        {
            printf("Enter the occupant name: \n");
            scanf(" %[^\n]" ,A4.name);
            printf("Electrical meter reading :\n");
            scanf(" %lf", &A4.eReading);
            printf("Enter the water meter reading :\n");
            scanf(" %lf", &A4.wReading);
            A4.eBill = (eUnit * A4.eReading);
            A4.wBill = (wUnit * A4.wReading);
            A4.totalBill = (A4.eBill + A4.wBill + rent + garbage + security);
        }
    }
    else {
        goto FOUR;
    }
    FOUR:
    printf("------------------------------------------------------------------------------\n");
    START2:
    printf("Confirm your password to continue :\n");
    scanf(" %s" ,verify);
    strcmp(verify, password);
    j = (strcmp(verify, pass2));
    if (j == 0)
    {
        sleep (1);
        printf("Success:\n");
    }
    else
    {
        printf("! Incorrect password entered ! : \n    ***** Try again *****\n");
        goto START2;
    }
sleep(2);
    printf("The Bills for the month are as follows.\n");
    if(occupied == 'Y'|| occupied =='y')
        {
            printf("\n*****************************************************************\n");
            printf("House Number: A%d\nName: " ,m++);
            puts(A1.name);
            printf("Total Bill: Ksh %d \n", A1.totalBill);
        }
        else {
            printf("\n*****************************************************************\n");
            printf("House Number: A%d\n" ,m++);
            printf("The house is not occupied \nNo bill recoreded\n");
        }
     if (occupied1 == 'Y' || occupied1 == 'y'){
            printf("\n*****************************************************************\n");
            printf("House Number: A%d\nName: " ,m++);
            puts(A2.name);
            printf("Total Bill: Ksh %d \n", A2.totalBill);
        }
         else {
             printf("\n*****************************************************************\n");
            printf("House Number: A%d\n" ,m++);
            printf("The house is not occupied \nNo bill recoreded\n");
        }
     if (occupied2 == 'Y' || occupied2 == 'y'){
            printf("\n*****************************************************************\n");
            printf("House Number: A%d\nName: " ,m++);
            puts(A3.name);
            printf("Total Bill: Ksh %d \n", A3.totalBill);
        } 
         else {
             printf("\n*****************************************************************\n");
            printf("House Number: A%d\n" ,m++);
            printf("The house is not occupied \nNo bill recoreded\n");
        } 

    if (occupied3 == 'Y' || occupied3 == 'y'){
            printf("\n*****************************************************************\n");
            printf("House Number : A%d\n Name: " ,m++);
            puts(A4.name);
            printf("Total Bill: Ksh %d \n", A4.totalBill);
        }
         else {
             printf("\n*****************************************************************\n");
            printf("House Number: A%d\n" ,m++);
            printf("The house is not occupied \nNo bill recoreded \n");
        }

printf("-------------------------Thank you----------------------------------\n");
    return 0;
}


