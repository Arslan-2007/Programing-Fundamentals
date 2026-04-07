#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int total_students = 1000; // total size
    // data structure
    string nameArray[total_students] = {"arslan", "saad","ammar","hafiz","ali"};
    int ageArray[total_students] = {19, 20,19,18,20};
    float fscArray[total_students] = {1121, 1100,1101,1120,1150};
    float matricArray[total_students] = {1053, 1060,1020,1030,1051};
    float ecatArray[total_students] = {352, 340,301,312,320};
    float aggregateArray[total_students];
    string p1Array[total_students] = {"cs", "ce","cs","cs","cs"};
    string p2Array[total_students] = {"ce", "cs","ee","ce","ce"};
    string p3Array[total_students] = {"ee", "ee","ce","ee","ee"};
    int index = 5;
    while (true)
    {
        // main header of ums
        system("cls");
        cout << "------------------------------------------------------------" << endl;
        cout << "---------- University Admission Management System ----------" << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << endl;
        cout << "\t\t\tUser Menu\t" << endl;
        cout << "1. Admin " << endl;
        cout << "2. Student " << endl;
        cout << "3. Exit " << endl;
        cout << "Choose option(1-3): ";
        string userOption;
        cin >> userOption;
        cout << "You Choose " << userOption << "." << endl;
        if (userOption == "1")
        {
            // write here the admin code
            int attemp = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Welcome to the admin menu! (Login attempt " << i + 1 << ")" << endl;
                cout << "Enter Username: ";
                string username;
                cin >> username;
                cout << "Enter password: ";
                string password;
                cin >> password;
                cout << endl;
                if (username == "admin" && password == "1234")
                {
                    cout << "Login Successfully!\n"
                         << endl;
                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all Students" << endl;
                        cout << "2. Search Students" << endl;
                        cout << "3. Update student record" << endl;
                        cout << "4. Generate Merit List" << endl;
                        cout << "5. Delete Student Record" << endl;
                        cout << "6. Logout" << endl;
                        cout << "Choose option(1-6): ";
                        string option;
                        cin >> option;
                        cout << endl;
                        if (option == "1")
                        {
                            // show student record
                            cout << "Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << fscArray[i] << "\t" << ecatArray[i] << "\t" << p1Array[i]
                                         << "\t" << p2Array[i] << "\t" << p3Array[i] << "\t" << endl;
                                }
                            }
                        }
                        else if (option == "2")
                        {
                            // search student by name
                            cout << "Enter the name of student you want to search: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    cout << "Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3" << endl;
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << fscArray[i] << "\t" << ecatArray[i] << "\t" << p1Array[i]
                                         << "\t" << p2Array[i] << "\t" << p3Array[i] << "\t" << endl;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "No record found against name " << name << endl;
                            }
                        }
                        else if (option == "3")
                        {
                            // update student record
                            cout << "Enter the name of student you want to update record of: ";
                            string name;
                            cin >> name;
                            int foundindex = -1;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found = true)
                            {
                                cout << "------ Old Record ------" << endl;
                                cout << "Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << fscArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << p1Array[foundindex]
                                     << "\t" << p2Array[foundindex] << "\t" << p3Array[foundindex] << "\t" << endl;
                                cout << "Enter new record for update" << endl;
                                cout << "Enter your Name: ";
                                string name;
                                cin >> name;
                                cout << "Enter your age: ";
                                int age;
                                cin >> age;
                                cout << "Enter your Matric Marks: ";
                                float matric;
                                cin >> matric;
                                cout << "Enter your FSc Marks: ";
                                float fsc;
                                cin >> fsc;
                                cout << "Enter your Ecat marks: ";
                                float ecat;
                                cin >> ecat;
                                cout << endl;
                                cout << "Choose your preference(CS,CE,EE)" << endl;
                                cout << "Enter your first preference: ";
                                string p1;
                                cin >> p1;
                                cout << "Enter your second preference: ";
                                string p2;
                                cin >> p2;
                                cout << "Enter your third preference: ";
                                string p3;
                                cin >> p3;
                                cout << endl;
                                cout << "Your data has been entered successfully.\n"
                                     << endl;
                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                fscArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                p1Array[foundindex] = p1;
                                p2Array[foundindex] = p2;
                                p3Array[foundindex] = p3;
                            }
                            else if (found = false)
                            {
                                cout << "Record not found!" << endl;
                            }
                        }
                        else if (option == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggregate = (matricArray[i] * 30.0) / 1100.0 + (fscArray[i] * 40.0) / 1200.0 + (ecatArray[i] * 30.0) / 400.0;
                                aggregateArray[i] = aggregate;
                            }
                            //sorting data on the base of aggregate
                            for(int i=0;i<index;i++){
                                for(int j=i+1;j<index;j++){
                                    if(aggregateArray[i] < aggregateArray[j]){
                                        //swaping of name
                                        string temp = nameArray[i];
                                        nameArray[i]=nameArray[j];
                                        nameArray[j]=temp;
                                        //swaping of age
                                        int tempage = ageArray[i];
                                        ageArray[i] = ageArray[j];
                                        ageArray[j] = tempage;
                                        //swaping of matric
                                        float tempm = matricArray[i];
                                        matricArray[i]=matricArray[j];
                                        matricArray[j]=tempm;
                                        //swapig of fsc
                                        float tempfsc=fscArray[i];
                                        fscArray[i]=fscArray[j];
                                        fscArray[j]=tempfsc;
                                        //swaping of ecat;
                                        float tempecat=ecatArray[i];
                                        ecatArray[i]=ecatArray[j];
                                        ecatArray[j]=tempecat;
                                        //swaping of p1
                                        string temp1=p1Array[i];
                                        p1Array[i]=p1Array[j];
                                        p1Array[j]=temp1;
                                        //swaping of p2
                                        string temp2=p2Array[i];
                                        p2Array[i]=p2Array[j];
                                        p2Array[j]=temp2;
                                        //swaping of p3
                                        string temp3=p3Array[i];
                                        p3Array[i]=p3Array[j];
                                        p3Array[j]=temp3;
                                        //swaping of aggregate
                                        float tempaggre=aggregateArray[i];
                                        aggregateArray[i]=aggregateArray[j];
                                        aggregateArray[j]=tempaggre;
                                    }
                                }
                            }
                            // code to display all data
                            cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t"<<aggregateArray[i]<< endl;
                                }
                            }

                            
                        }
                        else if (option == "5")
                        {
                            // delete student record
                            cout << "Enter the name of student you want to delete record of: ";
                            string name;
                            cin >> name;
                            int foundindex = -1;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                // record to be deleted
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                fscArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                p1Array[foundindex] = "";
                                p2Array[foundindex] = "";
                                p3Array[foundindex] = "";
                                cout << "Record Deleted Successfully!" << endl;
                            }
                            else
                            {
                                cout << "Record not found." << endl;
                            }
                        }
                        else if (option == "6")
                        {
                            cout << "Logout Successfully" << endl;
                            break;
                        }
                        else
                        {
                            cout << "Wrong option Selected!" << endl;
                        }
                        cout << "Press any key to countinue...";
                        getch();
                    }
                    break;
                }
                else
                {
                    cout << "Username or password is incorrect!\n"
                         << endl;
                    cout << "Press any key to countinue...";
                    getch();
                }
            }
        }
        else if (userOption == "2")
        {
            // write here code for student
            system("cls");
            cout << "Welcome to the student registration menu!" << endl;
            cout << "Enter your Name: ";
            string name;
            cin >> name;
            cout << "Enter your age: ";
            int age;
            cin >> age;
            cout << "Enter your Matric Marks: ";
            float matric;
            cin >> matric;
            cout << "Enter your FSc Marks: ";
            float fsc;
            cin >> fsc;
            cout << "Enter your Ecat marks: ";
            float ecat;
            cin >> ecat;
            cout << endl;
            cout << "Choose your preference(CS,CE,EE)" << endl;
            cout << "Enter your first preference: ";
            string p1;
            cin >> p1;
            cout << "Enter your second preference: ";
            string p2;
            cin >> p2;
            cout << "Enter your third preference: ";
            string p3;
            cin >> p3;
            cout << endl;
            cout << "Your data has been entered successfully.\n"
                 << endl;
            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            fscArray[index] = fsc;
            ecatArray[index] = ecat;
            p1Array[index] = p1;
            p2Array[index] = p2;
            p3Array[index] = p3;
            index++;
        }
        else if (userOption == "3")
        {
            cout << "Program Exits Successfully.\n"
                 << endl;
            break;
        }
        else
        {
            cout << "Invalid choice! Please choose between 1-3!\n";
        }

        cout << "Press any key to countinue......";
        getch();
    }
    cout << "Thanks For using this software!\n";
}