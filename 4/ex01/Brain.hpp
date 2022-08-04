#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
   public:
      Brain();
      Brain(Brain const &src);
      ~Brain();
      Brain &operator(Brain const &src);
   private:
      std::string _ideas[100];
   protected:
};

#endif

