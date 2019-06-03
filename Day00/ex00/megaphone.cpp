/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:25:48 by ksiziva           #+#    #+#             */
/*   Updated: 2019/06/03 14:44:31 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void to_upper(char *wrd)
{
  int len;
  int i;
  
  i = 0;
  len = 0;

  while (*wrd)
  {
    len++;
  }
}

int main(int argc, char **argv)
{
  int i;

  i = 0;
  while (i < argc)
  {
    std::cout << argv[i] << "\n";
    i++;
  }
  return 0;
}
