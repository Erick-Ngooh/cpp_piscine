/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:59:01 by anremiki          #+#    #+#             */
/*   Updated: 2022/07/12 17:05:27 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
    int _fixed;
    float   fnum;
    int     num;
    
    fnum = 6.42;
    _fixed = fnum * (float)(1 << 8);
    num = _fixed >> 8;
    std::cout << "num = " << num << std::endl;
    std::cout << "fixed = " << _fixed << std::endl;
    std::cout << "fnum = " << fnum << std::endl;
    return (0);
}
