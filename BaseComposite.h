#pragma once

#include <list>

#include "i_store_luggage.h"
#include "Passenger.h"


class BaseComposite : public IStoreLuggage {

public:
    [[nodiscard]] size_t get_luggage_weight() const  override;
    virtual void add_child(IStoreLuggage* item) = 0;
    virtual void show() const = 0;

protected:
    std::list<IStoreLuggage*> children;

};
