#include <stdio.h>
#include <stdlib.h>

int main()
{

char companystart[20];
char companyend[20];
char oy[20];

printf("Enter company name: ");
scanf("%s%s%s", companystart, companyend, oy);


printf("We, the kind people at %s %s %s\n", companystart, companyend, oy);
printf("Would like to offer Toni Lehtola \na summer job for summer 2019. \n");
printf("The reason why we decided to do that is this awesome mad libs game \n");
printf("That shows that he has a basic aknowledge of C \n");
printf("And he can think outside the box \n");
printf("And he really wants to find a job that could improve his coding skills\n");
printf("To hire Toni Lehtola, please contact 045 159 5199 or toni.lehtolaa@gmail.com \n");
printf("Job application and CV is also sent to you by email or via your internet pages\n");
printf("Have a wonderful day\n");
    return 0;
}
