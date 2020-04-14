#pragma once

#include "i_store_luggage.h"

class Stewardess: public IStoreLuggage {

public:
    [[nodiscard]] size_t get_luggage_weight() const  override;
};

