#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
   public:
      ShrubberyCreationForm(std::string name);
      virtual ~ShrubberyCreationForm();
      virtual std::string const &getName( void ) const;
      
      void  execute(std::string target);
   private:
   protected:
};

#endif

