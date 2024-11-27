#include "ActionStack.h"

void ActionStack::performAction(const std::string& action)
{
    repeatAction.push(action);

}

string ActionStack::get_NowAction()
{
    return repeatAction.top();
}

std::string ActionStack::undo()
{
    if (repeatAction.empty()) {
        return "empty action";


    }
    doneAction.push(repeatAction.top());
    repeatAction.pop();
    return doneAction.top();
}

std::string ActionStack::redo()
{
    if (doneAction.empty()) {
        return "empty action";


    }

    repeatAction.push(doneAction.top());

    doneAction.pop();
    return repeatAction.top();
}
