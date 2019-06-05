/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:46:52 by ksiziva           #+#    #+#             */
/*   Updated: 2019/06/05 16:14:18 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

class Phonebook 
{
  public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_number;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;


    void add()
    {
      while(first_name == "")
      {
        std::cout << "- Enter first name" << std::endl;
        std::cin >> first_name;
        continue;
      }
      while(last_name == ""){
        std::cout << "- Enter last name" << std::endl;
        std::cin >> last_name;
        continue;
      }
      while(nickname == "")
      {
        std::cout << "- Enter nickname" << std::endl;std::cin >> nickname;
        continue;
      }
      while(login == "")
      {
        std::cout << "- Enter login" << std::endl;std::cin >>login;
        continue;
      }
      while(postal_address == "")
      {
        std::cout << "- Enter postal address" << std::endl;std::cin >>postal_address;
        continue;
      }
      while(email_address == "")
      {
        std::cout << "- Enter email address" << std::endl;std::cin >>email_address;
        continue;
      }
      while(phone_number == "")
      {
        std::cout << "- Enter phone number" << std::endl;std::cin >>phone_number;
        continue;
      }
      while(birthday_date == "")
      {
        std::cout << "- Enter birthday date" << std::endl;std::cin >>birthday_date;
        continue;
      }
      while(favorite_meal == "")
      {
        std::cout << "- Enter favorite meal" << std::endl;std::cin >>favorite_meal;
        continue;
      }
      while(underwear_color == "")
      {
        std::cout << "- Enter underwear color" << std::endl;std::cin >>underwear_color;
        continue;
      }
      while(darkest_secret == "")
      {
        std::cout << "- Enter darkest secret" << std::endl;std::cin >>darkest_secret;
        continue;
      }
    }

    void show()
    {
      std::cout << std::right << std::setw(10) << "first name |";
      std::cout << std::right << std::setw(10) << "last name |";
      std::cout << std::right << std::setw(10) << "nickname |";
      std::cout << std::right << std::setw(10) << "login |";
      std::cout << std::right << std::setw(10) << "address |";
      std::cout << std::right << std::setw(10) << "email |";
      std::cout << std::right << std::setw(10) << "phone  |";
      std::cout << std::right << std::setw(10) << "birthdate |";
      std::cout << std::right << std::setw(10) << "meal |";
      std::cout << std::right << std::setw(10) << "underwear |";
      std::cout << std::right << std::setw(10) << "secret |" << std::endl;
      std::cout << std::left << std::setw(10) << first_name;
      std::cout << std::left << std::setw(10) << last_name;
      std::cout << std::left << std::setw(10) << nickname;
      std::cout << std::left << std::setw(10) << login;
      std::cout << std::left << std::setw(10) << postal_address;
      std::cout << std::left << std::setw(10) << email_address;
      std::cout << std::left << std::setw(10) << phone_number;
      std::cout << std::left << std::setw(10) << birthday_date;
      std::cout << std::left << std::setw(10) << favorite_meal;
      std::cout << std::left << std::setw(10) << underwear_color;
      std::cout << std::left << std::setw(10) << darkest_secret << std::endl;
    }
};
