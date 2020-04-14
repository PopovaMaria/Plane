cmake_minimum_required(VERSION 3.15)
project(plane)

set(CMAKE_CXX_STANDARD 20)

add_executable(plane main.cpp i_store_luggage.cpp i_store_luggage.h Passenger.cpp Passenger.h Pilot.cpp Pilot.h Stewardess.cpp Stewardess.h BaseComposite.cpp BaseComposite.h FirstClass.cpp FirstClass.h BusinessClass.cpp BusinessClass.h EconomyClass.cpp EconomyClass.h Plane.cpp Plane.h)