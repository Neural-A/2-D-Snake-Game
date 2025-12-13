module; 
#include <

export module State; 
export class State
{
   private: 
   public: 
      State()
      virtual ~State(); 
      virtual void initialize()=0; 
      virtual void inputP() = 0; 
      virtual void UpdateState(sf::Time deltaTime) = 0; 
      virtual void draw() = 0;
      virtual void Pausing();
      virtual void Start(); 
}
