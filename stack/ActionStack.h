#pragma once
#include <string>
#include <iostream>
#include <stack>
using namespace std;

class ActionStack
{
	
	stack<string> doneAction;
	stack<string>repeatAction;
public:
	void performAction(const std::string& action);
	string get_NowAction();
	std::string undo();
	std::string redo();
};

