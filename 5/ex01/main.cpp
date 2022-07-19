/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:28:02 by anremiki          #+#    #+#             */
/*   Updated: 2022/07/19 18:36:37 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void  alpha( void )
{
      std::cout << std::endl << "\033[1;31m" << "_____ALPHA_____" << "\033[0m" << std::endl;

      Bureaucrat test("Alpha", 2);
      Form formtest("Alphaform", 1, 1);

      std::cout << test << std::endl;
      std::cout << formtest << std::endl;

      test.upgrade();
      formtest.beSigned(test);

      std::cout << formtest << std::endl;
}

void  beta( void )
{

      std::cout << std::endl << "\033[1;31m" << "_____BETA______" << "\033[0m" << std::endl;

      Bureaucrat test1("Beta", 149);
      Form  formtest1("Betaform", 150, 10);
      
      std::cout << test1 << std::endl;
      std::cout << formtest1 << std::endl;

      formtest1.beSigned(test1);

      std::cout << formtest1 << std::endl;
}

void  omega( void )
{
      std::cout << std::endl << "\033[1;31m" << "_____OMEGA_____" << "\033[0m" << std::endl;

      Bureaucrat test2("Omega", 42);
      Form formtest2("Omegaform", 10, 10);

      std::cout << test2 << std::endl;
      std::cout << formtest2 << std::endl;

      formtest2.beSigned(test2);
}

int main(void)
{
   try
   {
      alpha();
      beta();
      omega();
   }
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
   return (0);
}
