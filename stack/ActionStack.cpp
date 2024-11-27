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

    return std::string();
}

std::string ActionStack::redo()
{
    return std::string();
}
