#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
   public:
      Dog();
      Dog(Dog const &src);
      Dog &operator=(Dog const &src);
      virtual ~Dog();
      virtual void  makeSound( void ) const;
   private:
      Brain *_brain;
   protected:
};

#endif
