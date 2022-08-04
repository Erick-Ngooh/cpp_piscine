#include "Brain.hpp"

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Brain::Brain()
{
   std::cout << "Default brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
   std::cout << "Copy brain constructor called" << std::endl;
   *this = src;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Brain::~Brain()
{
   std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &src)
{
   std::cout << "Brain assignment operator called" << std::endl;
   _ideas = src._ideas;
   return *this;
}
