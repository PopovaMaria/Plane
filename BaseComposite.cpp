#include "BaseComposite.h"


size_t BaseComposite::get_luggage_weight() const
{
  size_t weight = 0 ;
  for(const auto* child: children)
  {
    weight += child->get_luggage_weight();
  }
  return weight;
}



