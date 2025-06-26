#include <iostream>

using namespace std;

void print_tasks(string tasks[], int task_count)
{

    cout << "Tasks To Do:" << endl;
    for (int i = 0; i < task_count; i++)
    {
        cout << "Task" << i << ":" << tasks[i] << endl;
    }
}

int main()
{
    string tasks[10] = {" "};
    // counter variable -> know how many tasks you have
    int task_count = 0;

    int option = -1;
    while (option != 0)
    {
        // we will make menu here
        cout << "---Rv's To Do---" << endl;
        cout << "option 1 - Add New Task" << endl;
        cout << "option 2 - To View Task" << endl;
        cout << "option 3 - Delete The Task" << endl;
        cout << "option 0 - To Terminate The Program" << endl;
        cin >> option;

        switch (option)
        {

        case 1:
        {
            if (task_count > 9)
            {
                cout << "Task List is FULL" << endl;
            }
            else
            {
                cout << "Enter the New Task: " << endl;
                cin.ignore();
                getline(cin, tasks[task_count]);
                task_count++;
            }
            break;
        }

        case 2:
            system("cls");
            print_tasks(tasks, task_count);
            break;

        case 3:
        {
            system("cls");
            print_tasks(tasks, task_count);
            int del_task = 0;
            cout << "Enter A Task to delete: " << endl;
            cin >> del_task;

            if (del_task < 0 || del_task > 9)
            {
                cout << "You Entered Invalid Task Number." << endl;

                break;
            }
            for (int i = del_task; i < task_count; i++)
            {
                tasks[i] = tasks[i + 1];
            }
            task_count = task_count - 1;
            break;
        }

        case 0:
            cout << "Terminating The Program........." << endl;
            break;

        default:
            cout << "You've Entered The InValid Value!" << endl;
        }
    }

    return 0;
}