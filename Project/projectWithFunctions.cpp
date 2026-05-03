#include <iostream>
#include <conio.h>
using namespace std;
int n;
string medicine[1000] = {"panadol", "softin"};
int price[1000] = {5, 10};
int quantity[1000] = {100, 100};
string employee[100] = {"Fahad", "Shoaib"};
int salary[100] = {10000, 5000};
int soldquantity[1000];
string soldName[1000];
float totalprice[1000];
// float sum = 0;
int count = 2;
int employeecount = 2;
void header()
{
    cout << "============================================================" << endl;
    cout << endl;
    cout << "                       Dr.RAC's Pharmacy      " << endl;
    cout << endl;
    cout << "============================================================" << endl;
    cout << endl;
}
void addMedicine()
{
    cout << "Enter the number of medicines you want to add:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of medicine you want to add:";
        cin >> medicine[count];
        cout << "Enter the quantity of medicine:";
        cin >> quantity[count];
        cout << "Enter price of medicine:";
        cin >> price[count];
        count++;
    }
    cout << n << " medicines added successfully." << endl;
}
void pause()
{
    cout << "Press any key to continue...." << endl;
    getch();
}
void viewAllMedicine()
{
    cout << "Quan\tMedicine\tPrice" << endl;
    for (int i = 0; i < count; i++)
    {
        if (medicine[i] != "")
        {

            cout << quantity[i] << "\t" << medicine[i] << "\t \t" << price[i] << endl;
        }
    }
}
void searchMedicine()
{
    cout << "Enter the name of medicine you want to search: ";
    string name;
    cin >> name;
    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if (medicine[i] == name)
        {
            cout << "Quan\tName\tPrice" << endl;
            cout << quantity[i] << "\t" << medicine[i] << "\t" << price[i] << endl;
            found = true;
            cout << endl;
            pause();
        }
    }
    if (found == false)
    {
        cout << "No record found against name " << name << endl;
    }
}
void updateMedicine()
{
    cout << "Enter the name of medicine of which you want to update status:";
    string name;
    cin >> name;
    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if (medicine[i] == name)
        {
            cout << medicine[i] << "\t" << price[i] << endl;
            cout << endl;
            found = true;
            cout << "What you want to update (quantity or name or price):";
            string choice;
            cin >> choice;
            if (choice == "quantity")
            {
                cout << "Enter updated quantity:";
                cin >> quantity[i];
            }
            if (choice == "name")
            {
                cout << "Enter updated name: ";
                cin >> medicine[i];
            }
            if (choice == "price")
            {
                cout << "Enter Updated price:";
                cin >> price[i];
            }
            cout << "Record updated Successfully" << endl;
            cout << "Press any key to continue......" << endl;
            getch();
        }
    }
    if (found == false)
    {
        cout << "Record not found!" << endl;
    }
}
void deleteRecord()
{
    cout << "Available Medicines:" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << medicine[i] << endl;
    }
    cout << endl;
    cout << "Enter the name of medicine you want to delete record:" << endl;
    string name;
    cin >> name;
    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if (medicine[i] == name)
        {
            medicine[i] = "";
            quantity[i] = 0;
            price[i] = 0;
            found = true;
            cout << "Record deleted successfully" << endl;
            cout << "Press any key to continue...." << endl;
            getch();
        }
    }
    if (found == false)
    {
        cout << "No record found against name " << name << endl;
        cout << "Press any key to continue...." << endl;
        getch();
    }
}
void MedicineManagementMenu()

{
    while (true)
    {
        system("cls");
        cout << "1. Add medicine" << endl;
        cout << "2. View all medicines" << endl;
        cout << "3. Search medicine" << endl;
        cout << "4. Update medicine" << endl;
        cout << "5. Delete a record" << endl;
        cout << "6. Return to admin menu" << endl;
        cout << "Choose option(1-6):";
        string option;
        cin >> option;
        if (option == "1")
        {
            // add medicine
            addMedicine();
            pause();
        }
        else if (option == "2")
        {
            // view all medicine
            viewAllMedicine();
            pause();
        }
        else if (option == "3")
        {
            // search medicine
            searchMedicine();
        }
        else if (option == "4")
        {
            // update medicine record
            updateMedicine();
        }
        else if (option == "5")
        {
            // delete record
            deleteRecord();
        }
        else if (option == "6")
        {
            break;
        }
        else
        {
            cout << "Wrong option selected" << endl;
        }
    }
}
void AddEmployee()
{
    cout << "Enter the number of employee you want to add:";
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        cout << "Enter the name of employee:";
        cin >> employee[employeecount];
        cout << "Enter his/her salary:";
        cin >> salary[employeecount];
        employeecount++;
    }
    cout << endl;
    cout << n1 << " Employee added successfully." << endl;
}
void viewEmployee()
{
    for (int i = 0; i < employeecount; i++)
    {
        cout << "Name\tSalary" << endl;
        if (employee[i] != "")
        {
            cout << employee[i] << "\t" << salary[i] << endl;
            cout << endl;
        }
    }
}
void updateEmployeeRecord()
{
    cout << "Enter the name of employee of which you want to update status:";
    string name;
    cin >> name;
    bool found = false;
    for (int i = 0; i < employeecount; i++)
    {
        if (employee[i] == name)
        {
            found = true;
            cout << employee[i] << "\t" << salary[i] << endl;
            cout << endl;
            cout << "What you want to update(name or salary):";
            string choice;
            cin >> choice;
            if (choice == "name")
            {
                cout << "Enter the updated name:";
                cin >> employee[i];
                cout << "Name updated successfully." << endl;
                cout << endl;
                cout << "Press any key to continue...." << endl;
                getch();
            }
            else if (choice == "salary")
            {
                cout << "Enter the updated salary:";
                cin >> salary[i];
            }
        }
    }
    if (found == false)
    {
        cout << "No record found against name " << name << endl;
        cout << endl;
        cout << "Press any key to continue...." << endl;
        getch();
    }
}
void deleteEmployeeRecord()
{
    cout << "Enter the name of employee of ehich you want to delete record:" << endl;
    string name;
    cin >> name;
    bool found = false;
    for (int i = 0; i < employeecount; i++)
    {
        if (employee[i] == name)
        {
            found = true;
            employee[i] = "";
            salary[i] = 0;
            cout << "Record deleted successfuly" << endl;
            cout << endl;
            cout << "Press any key to continue...." << endl;
            getch();
        }
    }
    if (found == false)
    {
        cout << "No record found against name " << name << endl;
        cout << endl;
        cout << "Press any key to continue...." << endl;
        getch();
    }
}
void employeeManagementMenu()
{
    while (true)
    {
        system("cls");
        cout << "1. Add an employee" << endl;
        cout << "2. View all employee" << endl;
        cout << "3. Update record of an employee" << endl;
        cout << "4. Delete record of an employee" << endl;
        cout << "5. Return" << endl;
        cout << "Choose option(1-5):";
        int option;
        cin >> option;
        if (option == 1)
        {
            // add employee
            AddEmployee();
            pause();
        }
        else if (option == 2)
        {
            // view employee
            viewEmployee();
            pause();
        }
        else if (option == 3)
        {
            // update record
            updateEmployeeRecord();
        }
        else if (option == 4)
        {
            // delete record
            deleteEmployeeRecord();
        }
        else if (option == 5)
        {
            break;
        }
        else
        {
            cout << endl;
            cout << "Wrong option selected!" << endl;
            cout << endl;
            pause();
        }
    }
}
bool adminLogin()
{
    int attemp;
    bool loginsuccess = false;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Welcome to Admin Menu (Login attemp:" << i << " )" << endl;
        cout << "Enter Username:";
        string userName;
        cin >> userName;
        cout << "Enter Password:";
        string password;
        cin >> password;
        if (userName == "arslan" && password == "1234")
        {
            cout << "Login Successfully..." << endl;
            loginsuccess = true;
            return loginsuccess;
            // write here admin code
        }
        else
        {
            cout << "User name or password is wrong..." << endl;
            cout << "Please Try again" << endl;
            cout << "Press any key to continue........" << endl;
            getch();
        }
    }
}
void adminMenu()
{
    while (true)
    {
        system("cls");
        cout << "[1] Medicine Management" << endl;
        cout << "[2] Empolyee Management" << endl;
        cout << "[3] Logout" << endl;
        cout << "Choose option[1-3]:";
        string adminOpiton;
        cin >> adminOpiton;
        if (adminOpiton == "1")
        {
            // write here medicine management system code
            MedicineManagementMenu();
        }

        else if (adminOpiton == "2")
        {
            // write here employee management code
            employeeManagementMenu();
        }
        else if (adminOpiton == "3")
        {
            cout << endl;
            cout << "Logout Successfully" << endl;
            break;
        }
        else
        {
            cout << "Wrong option selected...." << endl;
            pause();
        }
    }
}
void billing()
{
    float sum = 0;
    cout << "How many types of medicines customer wants to buy:";
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the name of medicine customer wants to buy:";
        string tempname;
        cin >> tempname;
        bool found = false;
        bool validorder = true;
        for (int j = 0; j < count; j++)
        {
            if (medicine[j] == tempname)
            {
                soldName[i] = tempname;
                cout << "Enter quantity:";
                int tempquantity;
                cin >> tempquantity;
                if (quantity[j] > tempquantity)
                {
                    totalprice[i] = tempquantity * price[j];
                    soldquantity[i] = tempquantity;
                    quantity[j] -= tempquantity;
                }
                else
                {
                    cout << "Sorry! Only " << quantity[j] << " are available." << endl;
                }
                found = true;
            }
        }
        if (found == false)
        {
            cout << "This medicine is not available." << endl;
            validorder = false;
            break;
        }
        if (!validorder)
        {
            sum = 0;
            continue;
        }
    }

    for (int i = 0; i < num; i++)
    {
        sum = sum + totalprice[i];
    }
    if (soldName[0] != "")
    {
        cout << "Quan\tName\tTotal Price" << endl;
    }
    // cout << "Quan\tName\tTotal Price" << endl;
    for (int i = 0; i < num; i++)
    {
        if (soldName[i] != "")
        {
            cout << soldquantity[i] << "\t" << soldName[i] << "\t\t" << totalprice[i] << endl;
        }
    }
    if (soldName[0] != "" && soldquantity[0] != 0)
    {
        cout << "---------------------------" << endl;
        cout << "Total Bill              " << sum << endl;
        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        soldName[i] = "";
        totalprice[i] = 0;
        soldquantity[i] = 0;
    }
}
void employeeMenu()
{
    while (true)
    {
        system("cls");
        cout << endl;
        cout << "==========Welcome to Menu==========" << endl;
        cout << endl;
        cout << "[1] Medicine Search" << endl;
        cout << "[2] Billing" << endl;
        cout << "[3] Logout" << endl;
        cout << "Choose option[1-3]:";
        string choice;
        cin >> choice;
        if (choice == "1")
        {
            // write medicine search code
            searchMedicine();
        }
        else if (choice == "2")
        {
            // billing code
            billing();
            pause();
        }
        else if (choice == "3")
        {
            cout << "Logout Successfully." << endl;
            cout << endl;
            cout << "Press any key to continue..." << endl;
            getch();
            break;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
            cout << endl;
            cout << "Press any key to continue...." << endl;
            getch();
        }
    }
}

int main()
{
    while (true)
    {
        // Header Of Application
        system("cls");
        header();
        cout << "=====================User Menu==============================" << endl;
        cout << "[1] Admin Menu" << endl;
        cout << "[2] Employee Menu" << endl;
        cout << "[3] Exit" << endl;
        cout << "Choose Option[1-3]:";
        string userOption;
        cin >> userOption;
        if (userOption == "1")
        {
            // admin code
            if (!adminLogin())
            {
                cout << "Too many failed attempts!" << endl;
                getch();
                continue;
            }
            adminMenu();
        }
        else if (userOption == "2")
        {
            // employee code
            employeeMenu();
        }
        else if (userOption == "3")
        {
            cout << "Thanks for using this software.";
            break;
        }
        else
        {
            cout << endl;
            cout << "Invalid option....." << endl;
        }
    }
    return 0;
}