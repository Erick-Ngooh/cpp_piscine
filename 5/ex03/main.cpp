/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:28:02 by anremiki          #+#    #+#             */
/*   Updated: 2022/07/21 20:38:32 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void  test_intern( void )
{
      std::cout << std::endl << "\033[1;31m" << "_____INTERN_____" << "\033[0m" << std::endl;

      Bureaucrat  crat("Manager", 1);
      Intern   employe;

      //Form *pform = employe.makeForm("ShrubberyCreationForm", "TREE");
      Form *pform = employe.makeForm("RobotomyRequestForm", "BENDER");
      //Form *pform = employe.makeForm("PresidentialPardonForm", "STUDENT");
      
      std::cout << *pform << std::endl;
      crat.signForm(*pform);
      pform->beExec(crat);
      delete pform;
}

int main(void)
{
   try
   {
     test_intern();
   }
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
   return (0);
}
