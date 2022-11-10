#pragma once
#include<string>
#include<vector>
class Product
{
    private:
        std::string _id;
	    std::string _name;
	    int _price;
    
    public:
        Product();
        Product( std::string, std::string, int );
        
        std::string getId();
        std::string getName();
        int getPrice();

        void setID( std::string );
        void setName( std:: string );
        void setPrice( int );
       


        void print_Product();
        

};