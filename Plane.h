#pragma once

#include "BaseComposite.h"

#include <list>

class Plane : public BaseComposite {

public:
    [[nodiscard]] size_t get_luggage_weight() const  override;
    void show() const override;

    void add_child(IStoreLuggage* item);
    static void get_ready_for_flight();

protected:
    std::list<IStoreLuggage*> children;
    static const size_t max_number_of_passengers = 180;

};

