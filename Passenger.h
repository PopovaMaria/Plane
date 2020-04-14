#pragma once

#include "i_store_luggage.h"

class Passenger: public IStoreLuggage {

public:
    size_t seat = 0;
    [[nodiscard]] size_t get_luggage_weight() const  override;
    size_t luggage_weight = 0;
    void show() const override;

    Passenger(size_t luggage_weight)
    {
      this->luggage_weight = luggage_weight;
    }
};



