/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:28:02 by anremiki          #+#    #+#             */
/*   Updated: 2022/07/18 04:28:04 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main(void)
{
   try
   {
      Bureaucrat Anis("Beret", 3);
      std::cout << Anis.getName() << std::endl;
      Bureaucrat Joan("Beret frere", 42);
      std::cout << Joan.getName() << std::endl;
      Bureaucrat Ricko("faux beret", -42);
      std::cout << Ricko.getName() << std::endl;
   }
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
   return (0);
}
