#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
   public:
      Dog();
      virtual ~Dog();
      virtual void  makeSound( void ) const;
   private:
      Brain *_brain;
   protected:
};

#endif
