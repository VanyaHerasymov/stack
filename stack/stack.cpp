// stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Mystack.h"
#include <string>
#include <stack>
#include "ActionStack.h"
using namespace std;
int main()
{
    /*
    using namespace myStack;
    Stack<string> p33;
    p33.push_back("Students");
    p33.push_back("of");
    p33.push_back("the");
    p33.push_back("group");
    p33.push_back("p33");
    p33.showStack();
    cout << "------------" <<endl;
    p33.pop_back();
    p33.showStack();
   // cout << "-------------";
       // while (!p33.isEmpty()) {
            

    //}
    */
    /*std::string user;
    cout << "Enter word;]";
    std::cin >> user;
    std::stack<char> Poli;

    for (int i = 0; i < user.size(); i++)  {
        Poli.push(user[i]);

    }
    bool isPoli = true;
    int i = 0;
    while (!Poli.empty()) {
        if (Poli.top() != user[i]) {

            isPoli = false;
            break;

        }Poli.pop();
        i++;

    }
    if (Poli.empty()&& isPoli) {
        cout << "The word is palindrom" << endl;

    }*/

    ActionStack Ivan;
    Ivan.performAction("Opened Folder");
    Ivan.performAction("Copied file");
    Ivan.performAction("deleted file");
    while (true) {
        string User;
        cout << "1-cancel action"<<endl;
        cout << "2-return action" << endl;
        cout << "3-add action" << endl;
        cin >> User;
        if(User=="1"){
            cout << Ivan.undo() << endl;

        }
        else if (User == "2") {
            cout << Ivan.redo() << endl;


        }
        else if (User == "3") {
            cout << "enter action"<<endl;
            cin >> User;
            Ivan.performAction(User);
        }


    }






}