#include <iostream>
#include "Plane.h"

size_t Plane::get_luggage_weight() const
{
  return BaseComposite::get_luggage_weight();
}

void Plane::add_child(IStoreLuggage* item) {
    children.push_back(item);
}

void Plane::show() const
{
  for(const auto& child: children)
  {
    child->show();
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

