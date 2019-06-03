/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:25:48 by ksiziva           #+#    #+#             */
/*   Updated: 2019/06/03 17:12:35 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string toUpper(const char *s)
{
  std::string ret;
  for (int i = 0; s[i] != '\0'; i++) {
    ret += std::toupper(s[i]);
  }
  return ret;
}

int main(int argc, char **argv)
{
  int i;

  i = 1;
  while (i < argc)
  {
    std::cout << toUpper(argv[i]);
    i++;
  }
  if (i == 1) {
    std::cout << toUpper("* loud and unbearable feedback noise *");
  }
  std::cout << "\n";
  return 0;
}
