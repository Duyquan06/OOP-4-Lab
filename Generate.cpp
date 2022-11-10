#include"Generate.h"
#include<iostream>

std::vector<std::string> Brand = {"Macbook", "Dell", "Lenovo", "Ascer"};

int Generate :: randomNum (int min, int max)
{
    int num;
    do 
    {
        num = rand();
    } while(num < min || num > max);

    return num;
}

std::string Generate :: generate_ID ( std::string id )
{
    int tmp;
    if( id == "")
        tmp = 0;
    else 
        tmp = std::stoi(id);
    return std::to_string ( tmp += 1 );
}

std::string Generate :: generate_name ()
{
    int in_brand = rand() % 4;

    std::string code = "";
    std::string Up_case = "";
    Up_case += randomNum(65, 90);

    std::string Low_case = "";
    Low_case += randomNum(97, 122);

    code += Up_case + Low_case;
        
    int num;
    num = randomNum(1, 100);

    code += " " + std::to_string ( num );
  

    return Brand[in_brand] + " " + code;
}

Product Generate :: generate_Pro ( std::string id )
{
     int price = rand() % 100000000 + 10000000;
    Product tmp( generate_ID ( id),generate_name(), price);
    return tmp;
}
