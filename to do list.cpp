#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> tasks;
void toaddTask(const string& task) 
{
    tasks.push_back(task);
    cout << "Task added successfully.\n";
}
void toviewTasks() 
{
    cout << "Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) 
    {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}
void toremoveTask(size_t index) 
{
    if (index >= 1 && index <= tasks.size()) 
    {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed successfully.\n";
    } 
    else
    {
        cout << "Invalid task index.\n";
    }
}
int main() 
{
    int choice;
    string task;
    do 
    {
        cout << "\n1. Add Task\n2. View Tasks\n3. Remove Task\n4. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;
        switch (choice) 
        {
            case 1:
            {
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, task);
                toaddTask(task);
                break;
            }
            case 2:
            {
                toviewTasks();
                break;
            }
            case 3:
            {
                size_t index;
                cout << "Enter the index of the task to remove: ";
                cin >> index;
                toremoveTask(index);
                break;
            }
            case 4:
            {
                cout << "Exiting program.\n";
                break;
            }
            default:
            {
                cout << "Invalid choice. Please try again.\n";
            }
        }
    } 
    while (choice != 4);
    return 0;
}
