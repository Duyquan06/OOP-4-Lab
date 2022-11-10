#pragma once
#include"Product.h"
#include<vector>


class Generate
{
    public:
        static int randomNum( int, int );
        static std::string generate_ID( std::string );
        static std::string generate_name();
        static Product generate_Pro( std::string );
};