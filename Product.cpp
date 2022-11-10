#include"Product.h"
#include<iostream>


Product :: Product ()
{
    _name = "";
    _id = "";
    _price = 0;
}

Product :: Product ( std::string id, std::string name, int price)
{
    _id = id;
    _name = name;
    _price = price;
}

std::string Product :: getId ()
{
    return _id;
}

std::string Product :: getName()
{
    return _name;
}

int Product :: getPrice()
{
    return _price;
}

void Product::setID ( std::string ID)
{
    _id = ID;
}

void Product :: setName ( std::string Name)
{
    _name = Name;
}

void Product :: setPrice ( int price)
{
    _price = price;
}

void Product :: print_Product()
{
    std::cout << "ID=" << getId() << ",  ";
    std::cout << "Name=" << getName() << ", ";
    std::cout << "Price=" << getPrice() << "\n\n";
}

