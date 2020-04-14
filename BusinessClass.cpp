#include "BusinessClass.h"

#include <iostream>


void BusinessClass::add_child(IStoreLuggage* item)
{
  if(children.size() + 1 <= max_number_of_passengers)
  {
    if(item->get_luggage_weight() >= max_passenger_free_luggage_weight && item->get_luggage_weight() <= max_passenger_paid_luggage_weight )
    {
      std::string answer;
      std::cout << "Pay for luggage: y/n"<< std::endl;
      std::cin >> answer;
      if (answer == "y")
      {dynamic_cast<Passenger*>(item)->seat = children.size() + 1;
        children.push_back(item);}
      else
        std::cout << "Can't board a passenger"<< std::endl;
    }
    else
    {dynamic_cast<Passenger*>(item)->seat = children.size() + 1;
      children.push_back(item);}
  }
  else
  {
    std::cout << "Business-class is full";
  }
}

void BusinessClass::show() const
{
  for(auto i = 0; i < max_number_of_passengers; ++i)
  {
    bool flag = false;
    for(const auto* child: children)
    {
      const auto* passenger = dynamic_cast<const Passenger*>(child);
      if(passenger->seat == i)
      {
        flag = true;
        break;
      }
    }
    auto seat_char = flag ? '*' : '_';
    std::cout << seat_char;
  }
}
