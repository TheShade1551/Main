website_name = ""
user_name = ""
password = ""

def add_data():
    global website_name, user_name, password
    website_name = input("Enter the site name - ")
    user_name = input("Enter the User name - ")
    password = input("Enter the password - ")
    while len(password) <= 7:
        print("\n\t\tYour Password is too short \n")
        password = input("Enter Password again -")

def output():
    print("The Site name is -", website_name)
    print("The User name is -", user_name)
    print("The password is -", password)

def output_to_file():
    file_ptr_a = open("password.txt", "a")
    if file_ptr_a == None:
        print("this file doesnt exist")
        print("create the file")
    file_ptr_a.write("\nSite-" + website_name + "\n")
    file_ptr_a.write("Username-" + user_name + "\n")
    file_ptr_a.write("Password-" + password + "\n")
    file_ptr_a.close()

add_data()
output()
output_to_file()
import os

def scan_from_file():
    file_ptr_r = open("password.txt", "r")
    if file_ptr_r == None:
        print("\nThe password file hasn't been created, Create it by re-running the program")
        exit(0)
    else:
        print("\nAll your sites username and passwords are - \n")
        print("--------------------------------------------------------------")
        for line in file_ptr_r:
            print(line)
        print("--------------------------------------------------------------")

def pass_man():
    add_data()
    os.system("cls")
    output()
    output_to_file()

def inf_loop_add_more():
    while True:
        add_more = int(input("\nEnter 1 if you want to add more passwords\nEnter 2 if you want to see the passwords entered\nEnter anything else if you want to exit\n- "))
        if add_more == 1:
            pass_man()
            continue
        elif add_more == 2:
            print("\n")
            scan_from_file()
            break
        else:
            exit(0)
    inf_loop_add_more()

print("-------------------------------------------------------------------")
print("                  PASSWORD MANAGEMENT SYSTEM                       ")
print("-------------------------------------------------------------------")
print("This is a password management system which will store your usernames")
print(" and passwords for any site you enter")
print("Do you want enter the passwords or see your passwords?")
print("Enter 1 if you want to store your passwords")
print("Enter 2 if you want to see your passwords")
print("Enter 3 if you want to remove the file in which your password is saved")
print("Enter 4 if you want to exit")
num = int(input("- "))
if num == 1:
    pass_man()
    inf_loop_add_more()
elif num == 2:
    scan_from_file()
elif num == 3:
    print("Warning!!")
    print("This will remove the password file in which all your passwords")
    print(" are stored")
    print("Press y to proceed or anything else to exit - ")
    ps = input()
    if ps == "y":
        import os
        os.remove("password.txt")
        print("The password file has been deleted")
        exit(0)
    else:
        print("Password file has not been deleted")
elif num == 4:
    print("Hope this program was useful to you")
    exit(0)
else:
    print("Invalid Choice")