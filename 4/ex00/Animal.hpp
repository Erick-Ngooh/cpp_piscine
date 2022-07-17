#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
   public:
      Animal();
      virtual ~Animal();
      virtual void  makeSound( void ) const;
      std::string getType( void ) const;
   private:
   protected:
      std::string _type;
};

#endif

