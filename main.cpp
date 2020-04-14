#include "Plane.h"
#include "FirstClass.h"
#include "BusinessClass.h"
#include "EconomyClass.h"

//#include <iostream>
//#include <vector>
//#define NDEBUG
//#include <cassert>
//
//class CategoryException {};
//
//// Component(Unit)
//class Person {
//public:
//    std::vector<Person*> c;
//    virtual void addPerson(Person* p) { assert(false); };
//    virtual void deletePerson(Person* p) { assert(false); };
//    virtual ~Person() = default;
//};
//
//// Primitives
//class Passenger : public Person {
//public:
//    std::string Category;
//    int LuggageWeight = 0;
//    int maxLuggage = 0;
//
//    virtual void add_Luggage(int Weight)
//    {
//        if (this->Category == "Business")
//            maxLuggage = 35;
//        if (this->Category == "Economy")
//            maxLuggage = 20;
//        int newWeight = this->LuggageWeight + Weight;
//        if (this->Category != "First-class" && newWeight > this->maxLuggage)
//        std::cout << "Extra weight needs to be paid for" << std::endl;
//        else
//        this->LuggageWeight += Weight;
//    }
//
//    void take_off_Luggage(int weight)
//    {
//        if (this->Category != "Economy")
//            throw new CategoryException;
//        else
//            this->LuggageWeight -= weight;
//    }
//
//    virtual int get_LuggageWeight() { return LuggageWeight; }
//    std::string get_category() { return Category; };
//};
//class Pilot : public Person
//        {
//};
//
//class Stewardess : public Person {};
//
//
//// Composite
//class EPassenger : public Passenger {
//private:
//    std::string Category = "Economy";
//    int maxLuggage = 20;
//public:
//    void addEPassenger(Passenger* p) { c.push_back(p);}
//
//    void deleteEPassenger(Passenger* p, int seat) {c.erase(c.begin()+seat);};
//
//    void add_Luggage(int Weight) override
//    {
//      int newWeight = this->LuggageWeight + Weight;
//      if (newWeight > this->maxLuggage)
//        std::cout << "Extra weight needs to be paid for" << std::endl;
//      else
//        this->LuggageWeight += Weight;
//    }
//
//    void take_off_Luggage()
//    {
//        this->LuggageWeight = 0;
//    }
//    int get_LuggageWeight() override {
//      int total = 0;
//      int b = c.size();
//      for (int i = 0; i < c.size(); ++i) total += c[i]->get_LuggageWeight();
//      return total;
//    };
//
//    ~EPassenger() override {
//        for (auto& i : c) delete i;
//    }
//
////private:
////    std::vector<Person*> c;
//};
//class BPassenger : public Passenger {
//private:
//    std::string Category = "Business";
//    int maxLuggage = 35;
//public:
//    void addBPassenger(Passenger *p) { c.push_back(p); }
//
//    void deleteBPassenger(Passenger *p, int seat) { c.erase(c.begin() + seat); };
//
//    void add_Luggage(int Weight) {
//      int newWeight = this->LuggageWeight + Weight;
//      if (newWeight > this->maxLuggage)
//        std::cout << "Extra weight needs to be paid for" << std::endl;
//      else
//        this->LuggageWeight += Weight;
//    }
//
//    int get_LuggageWeight() override {
//      int total = 0;
//      int b = c.size();
//      for (int i = 0; i < c.size(); ++i) total += c[i]->get_LuggageWeight();
//      return total;
//    };
//
//    ~BPassenger() override {
//      for (auto &i : c) delete i;
//    }
//};
//
//class FPassenger : public Passenger {
//private:
//    std::string Category = "First-Class";
//public:
//    void addFPassenger(Passenger *p) { c.push_back(p); }
//
//    void deleteFPassenger(Passenger *p, int seat) { c.erase(c.begin() + seat); };
//
//    void add_Luggage(int Weight) { this->LuggageWeight += Weight; }
//
//    int get_LuggageWeight() override {
//      int total = 0;
//      int b = c.size();
//      for (int i = 0; i < c.size(); ++i) total += c[i]->get_LuggageWeight();
//      return total;
//    };
//
//    ~FPassenger() override {
//      for (auto &i : c) delete i;
//    }
//};
//
////Создание самолета
////CompositeUnit* createPlane() {
////    CompositeUnit* plane = new CompositeUnit;
////
////    for (int i = 0; i < 6; i++) plane->addStewardess(new Stewardess);
////    for (int i = 0; i < 2; i++) plane->addPilot(new Pilot);
////    for (int i = 0; i < 10; i++)
////    {
////        auto* p = new Passenger;
////        p->set_Category("First-class");
////        p->add_Luggage(10);
////        plane->addPassenger(p);
////    }
////    for (int i = 0; i < 20; i++)
////    {
////        auto* p = new Passenger;
////        p->set_Category("Business");
////        p->add_Luggage(35);
////        plane->addPassenger(p);
////    }
////    for (int i = 0; i < 150; i++)
////    {
////        auto* p = new Passenger;
////        p->set_Category("Economy");
////        p->add_Luggage(20);
////        plane->addPassenger(p);
////    }
////
////    return plane;
////}
////
int main()
{
    Plane plane;

    FirstClass firstClass;
    BusinessClass businessClass;
    EconomyClass economyClass;

    Passenger passenger1_1(50);
    Passenger passenger1_2(50);
    Passenger passenger1_3(50);
    Passenger passenger2(5);
    Passenger passenger3(40);


    plane.add_child(&firstClass);
    plane.add_child(&businessClass);
    plane.add_child(&economyClass);

    firstClass.add_child(&passenger1_1);
    firstClass.add_child(&passenger1_2);
    firstClass.add_child(&passenger1_3);
    businessClass.add_child(&passenger2);
    economyClass.add_child(&passenger3);


    plane.show();

    firstClass.delete_child(3);

    plane.show();

    return 0;
}
//
//
////добавить композитные классы пассажир, пилот, стюардесса и методы у каждого свои и сначала сажать пассажиров и удалить пассажира с места бизнес номер 2