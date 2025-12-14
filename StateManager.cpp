module;
#include <stack> 
#include <memory> 

import State; 

export module StateManager;
export class StateManager
{
  private: 
      std::stack<std::unique_ptr<state>> StateStack; 
      unique_ptr<state> MyNewState; 

      bool add; 
      bool replacing; 
      bool removing; 
  public: 
      StateManager();
      ~StateManager();

      void add (std::unique_ptr<state> Adding, bool Replace =  false)
      void popCurrent(); 
      void ProcessStateChange(); 
      std::unique_ptr<state> &CurrentState(); 
}

      StateManager::StateManager(){};
      StateManager::~StateManager(){};

 void StateManager::add (std::unique_ptr<state> Adding, bool Replace =  false)
{
  add = true; 
  MyNewState = std::move(Adding); 

  replacing = Replace
}

      void StateManager::popCurrent()
{
     removing = true; 
}
      void StateManager::ProcessStateChange()
{
  if(removing && (!StateStack.empty())
  { Statestack.pop();
      if(!StateStack.empty())
      {
        StateStack.top() -> Start(); 
      }
  }
  if(add)
  {
    if(replacing &&(!StateStack.empty()))
    {
      StateStack.pop(); 
      replacing = false; 
    }
    if(!StateStack.empty())
    {
      StateStack.top() -> pause(); 
      
    }
    StateStack.push(std::move(MyNewState);
    add = false; 
      
  }
}
      std::unique_ptr<state> StateManager::&CurrentState()
{
  return StateStack.top(); 
}

