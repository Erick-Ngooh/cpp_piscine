#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
   public:
      DiamondTrap(std::string name);
      ~DiamondTrap();
      void  whoAmI( void );
   private:
   protected:
};

#endif

