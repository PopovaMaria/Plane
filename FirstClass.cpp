#include <iostream>
#include "FirstClass.h"


void FirstClass::add_child(IStoreLuggage* item) {

  if (children.size() > max_number_of_passengers)
    std::cout << "First-class is full";
  else
  {dynamic_cast<Passenger*>(item)->seat = children.size() + 1;
    children.push_back(item);}
}


void FirstClass::show() const
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

void FirstClass::delete_child(size_t seat)
{
    for(auto* child: children)
    {
      auto* passenger = dynamic_cast<Passenger*>(child);
      if(passenger->seat == seat)
      {
        children.remove(child);
        break;
      }
    }

}

