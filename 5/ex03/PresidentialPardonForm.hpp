#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
   public:
      PresidentialPardonForm(std::string name);
      virtual ~PresidentialPardonForm();
      //virtual std::string const &getName( void ) const;
      
      void  execute( void ) const;
   private:
      std::string const _target;
   protected:
};

#endif

