#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
   public:
      RobotomyRequestForm(std::string name);
      virtual ~RobotomyRequestForm();
      virtual std::string const &getName( void ) const;

      void  execute(std::string target);
   private:
   protected:
};

#endif
