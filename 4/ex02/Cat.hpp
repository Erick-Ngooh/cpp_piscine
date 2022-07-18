#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
   public:
      Cat();
      virtual ~Cat();
      virtual void  makeSound( void ) const;
   private:
      Brain *_brain;
   protected:
};

#endif

