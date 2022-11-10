#pragma once
#include<vector>
#include"Product.h"
#include"Generate.h"


class Process
{
    public:
        static std::vector<Product> getProducts();
        static bool save_to_File( std:: vector<Product> );
        static std::string getInfo( std:: string, int & );
        static void read_File ();
};
