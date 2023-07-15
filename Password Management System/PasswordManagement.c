#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// initialize the variables
char website_name[100];
char user_name[100];
char password[100];

// function to get the data by just using printf and scanf and will only accept
// password if its greater than 4
void add_data() {
    printf("\nEnter the site name - ");
    scanf("%99s", website_name);
    printf("Enter the User name - ");
    scanf("\n%99s", user_name);
    printf("Enter the password - ");
    scanf("\n%99s", password);
    for (;;) {
        while (strlen(password) <= 7) {
            printf("\n\t\tYour Password is too short \n");
            printf("Enter Password again -");
            scanf("%s", password);
        }
        break;
    }
}

// output the data recieved in stdout so that user can see what they typed
void output() {
    printf("The Site name is - %s\n", website_name);
    printf("The User name is - %s\n", user_name);
    printf("The password is - %s\n", password);
}

// store the data in the file using fprintf in a file called password in the
// same folder also creates that file if its not created
void output_to_file() {
    FILE *file_ptr_a = fopen("password.txt", "a");
    if (file_ptr_a == NULL) {
        printf("this file doesnt exist");
        printf("create the file");
    }
    fprintf(file_ptr_a, "\nSite-%s\n", website_name);
    fprintf(file_ptr_a, "Username-%s\n", user_name);
    fprintf(file_ptr_a, "Password-%s\n", password);
    fclose(file_ptr_a);
}

// read the data from the file using scanf
// will put everything from the file into stdout
void scan_from_file() {
    FILE *file_ptr_r = fopen("password.txt", "r");
    if (file_ptr_r == NULL) {
        printf("\nThe password file hasn't been created, Create it by "
               "re-running the program");
        exit(0);
    } else {
        printf("\nAll your sites username and passwords are - \n");
        printf(
            "--------------------------------------------------------------");
        char line[10000];
        while (fgets(line, 10000, file_ptr_r)) {
            printf("%s", line);
        }
        printf(
            "--------------------------------------------------------------");
    }
}

// this is the function that executes all the functions about collecting data
// and then outputing to the file and stdout
void pass_man() {
    add_data();
    system("cls");
    output();
    output_to_file();
}

// this asks user infinite times if he or she or them want to add more sites or
// exit the program or see the password they have typed
void inf_loop_add_more() {
    while (1) {
        int add_more;
        printf("\nEnter 1 if you want to add more passwords\nEnter 2 if you "
               "want to see the passwords entered\nEnter anything else if you "
               "want to exit\n- ");
        scanf("%i", &add_more);
        if (add_more == 1) {
            pass_man();
            continue;
        } else if (add_more == 2) {
            printf("\n");
            scan_from_file();
            goto a;
        } else {
            exit(0);
        }
    a:
        inf_loop_add_more();
        break;
    }
}

int main() {
    printf("-------------------------------------------------------------------"
           "\n");
    printf("                  PASSWORD MANAGEMENT SYSTEM                       "
           "\n");
    printf("-------------------------------------------------------------------"
           "\n");
    printf(
        "This is a password management system which will store your usernames\n"
        " and passwords for any site you enter\n");
    printf("Do you want enter the passwords or see your "
           "passwords?\n");
    printf(
        "\nEnter 1 if you want to store your passwords\nEnter 2 if you want to "
        "see "
        "your passwords \nEnter 3 if you want to remove the file in which your "
        "password is saved\nEnter 4 if you want to exit\n- ");
    int num;
    scanf("%i", &num);
    switch (num) {
    case 1:
        pass_man();
        inf_loop_add_more();
        break;
    case 2:
        scan_from_file();
        break;
    case 3:
        // removing the passord file
        printf("Warning!! \nThis will remove the password file in which all your "
               "passwords\n are stored\n");
        printf("Press y to proceed or anything else to exit - ");
        char ps[1];
        scanf("%s", ps);
        if (strcmp(ps, "y") == 0) {
            system("del password.txt");
            printf("The password file has been deleted");
            exit(0);
        } else {
            printf("Password file has not been deleted ");
        }
        break;
    case 4:
        printf("Hope this program was useful to you");
        exit(0);
    default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}
