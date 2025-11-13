#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>


int main (){

//variable initializations
int do_counter = 2;          //counter for do-while loop
int for_counter;             //counter for for loop
int multiplier = 1;

char username_bank[100];     //storage of username
char username[100];          //username field input

char password_bank[100];     //storage of password
char password[100];          //password field input

char choice;                 //Yes or no choice for going back to the Login page

printf("WELCOME TO C LOGIN PAGE!\n\n");
printf("Lets create a new account for you.\n\n");

printf("Create Username: ");
scanf(" %s", username_bank);   //create username (store username value)

printf("\n");

printf("Create Password: ");
scanf(" %s", password_bank);    //create username (store password value)

printf("Remember your login credentials.\n\n");
printf("Your Username is: %s\n", username_bank);  //print username
printf("Your Password is: %s\n", password_bank);  //printf password

printf("\n\n");  //next line (for formatting)

printf("REDIRECTING YOU TO LOGIN PAGE in   ");


for (for_counter=3; for_counter>0; for_counter--){

printf("%d  ", for_counter);
Sleep(1000);

}

while (do_counter > 1){   //looping the system to redirect in login part after user lock 

do{

    system("cls");   //clears all lines upon looping

    printf("WELCOME TO C LOGIN PAGE\n\n");

    printf("ENTER USERNAME: ");
    scanf(" %s", username);
    printf("\n");

    printf("ENTER USERNAME: ");
    scanf(" %s", password);
    printf("\n");



    if (strcmp(username_bank, username) == 0 && strcmp(password_bank, password) == 0 ){   //comparing stored username and password value to the input

     do_counter =0;   //getting out of do-while loop


    } else {

     printf("Wrong Username or Password!\n\n");
     printf("Redirecting you to LOGIN page in   ");

     for (for_counter=3; for_counter>0; for_counter--){
     printf("%d  ", for_counter);
     Sleep(1000);

     }
     
     printf("\n");
     do_counter++;   //activating do-while loop

    }


system ("cls");

if (do_counter == 0){

printf ("WELCOME TO C!\n\n");

break;   //to break out of the loop


}else if (do_counter >= 5){   //user lock after 3 times of wrong attempts

for (for_counter=60*multiplier; for_counter>-1; for_counter--){   //timer for user lock after several wrong attempts

system("cls");

printf("You have entered wrong username and password multiple times.\n\n");
printf("Your account is locked for: ");
printf("%d seconds ", for_counter);
Sleep(1000);


}

multiplier++; //


}


}while (do_counter > 1);   //conditions for do-while loop to go back from the start


}

return 0;

}