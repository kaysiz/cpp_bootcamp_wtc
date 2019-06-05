/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:11:53 by ksiziva           #+#    #+#             */
/*   Updated: 2019/06/05 11:16:48 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"

int main() 
{
  std::string command;
  Phonebook book[8];
  int index;
  
  index = 0;
  while(1)
  {
    std::cout << "Please Enter A Phonebook Command" << std::flush << std::endl;
    std::cin >> command;
    if (!command.compare("EXIT"))
    {
      std::cout << "Goodbye.." << std::flush << std::endl;
      return 0;
    }
    else if (!command.compare("ADD")) 
    {
      while(index < 8)
      {
        if(book[index].first_name == "")
          break;
        index++;
      }
      if (index == 7)
      {
        std::cout << "Your contacts list is full.." << std::endl;
      }else
      {
       book[index].add();
      }
    }
    else if (!command.compare("SEARCH"))
    {
      index = 0;
      int psn;
      if(book[0].first_name == "")
      {
        std::cout << "Your phonebook is empty, choose add to add a few contacts!!" << std::endl;
        continue;
      } else {
        std::cout << std::right << std::setw(10) <<"index |";
        std::cout << std::right << std::setw(10) <<"first name |";
        std::cout << std::right << std::setw(10) <<"last name |";
        std::cout << std::right << std::setw(10) <<"nickname"<< std::endl;
        while (index < 8)
        {
          if (book[index].first_name == "")
            break;
          std::cout << std::right << std::setw(10) << index;
          std::cout << std::right << std::setw(10) << book[index].first_name;
          std::cout << std::right << std::setw(10) << book[index].last_name;
          std::cout << std::right << std::setw(10) << book[index].nickname;
          std::cout << std::endl;
          index++;
        }
        std::cout << "- Enter contact index number to view more" << std::endl;std::cin >> psn;
        if (psn >= 0 && psn <= index)
        {
            book[psn].show();
        } else
        {
          std::cout << "The number entered is greater than the number of contacts available" << std::endl;
          continue;
        }
      }
    }
  }
  return 0;
}
