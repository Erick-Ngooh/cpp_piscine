#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
   public:
      ShrubberyCreationForm(std::string name);
      virtual ~ShrubberyCreationForm();
      std::string const &getName( void ) const;
      
      void  execute( void ) const;
   private:
      std::string const _target;
   protected:
};

#endif

