#include <iostream>
using namespace std;
// class student
// {
//     // private:
//     // int roll;
//     // public:
//     // void setroll(int roll)
//     // {
//     //     this->roll=roll;
//     // }
//     // void display()
//     // {
//     //     cout<<"roll number:"<<this->roll<<endl;
//     // }









//     private : 
//     int marks;
//     string name;

//     public :

//     student* setname(string name)
//     {
//         this->name=name;
//         return this;
//     }

//     student* setmarks(int marks)
//     {
//         this->marks=marks;
//         return this;
//     }

//     void display()
//     {
//         cout<<"name:"<<this->name<<endl;
//         cout<<"marks:"<<this->marks<<endl;
//     }
// };


// class Node
// {
//     public :
//     int data ;
//     Node* next;

//     Node(int value)
//     {
//        data=value;
//        next=NULL;
//     }
// };

    

// int main() {
//     // student s;
//     // s.setname("Alice");
//     // s.setmarks(85);
//     // s.display();
//     // return 0;

//     Node* first=new Node(10);
//     Node* second=new Node(20);
//     Node* third=new Node(30);

//     first->next=second;

// Node*temp = first;
// while (temp != nullptr){
//     cout<< temp->data<<" ";
//     temp = temp->next;
// }

// }


class Node
{
    public :
    int data ;
    Node* next;

    Node(int value)
    {
       data=value;
       next=NULL;
    }
};

int main() {
    Node* first = nullptr;
    Node* last = nullptr;
    int choice, value;

    do {
        cout << "\n\n==== LINKED LIST MENU ====\n";
        cout << "1. Create Node\n";
        cout << "2. Display List\n";
        cout << "3. Delete First Node\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1: {
                cout << "Enter value: ";
                if (!(cin >> value)) {
                    cout << "Invalid value.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    break;
                }

                Node* newNode = new Node(value);
                if (first == nullptr) {
                    first = newNode;
                    last = newNode;
                } else {
                    last->next = newNode;
                    last = newNode;
                }
                cout << "Node created.\n";
                break;
            }

            case 2:
                if (first == nullptr) {
                    cout << "List is empty.\n";
                } else {
                    Node* temp = first;
                    cout << "List: ";
                    while (temp != nullptr) {
                        cout << temp->data << " ";
                        temp = temp->next;
                    }
                    cout << "\n";
                }
                break;

            case 3:
                if (first == nullptr) {
                    cout << "List is empty. Nothing to delete.\n";
                } else {
                    Node* nodeToDelete = first;
                    first = first->next;
                    if (first == nullptr) {
                        last = nullptr;
                    }
                    delete nodeToDelete; 
                    cout << "First node deleted.\n";
                }
                break;

            case 4:
                break;

            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4)
    while (first != nullptr) {
        Node* nodeToDelete = first;
        first = first->next;
        delete nodeToDelete;
    }
    last = nullptr;
    cout << "Program ended.\n";
    return 0;
}