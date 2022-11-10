#include"Product.h"
#include"Generate.h"
#include"process.h"
#include<iostream>
#include<time.h>

int main()
{
    srand(time(NULL));
    std::vector<Product> AllProducts = Process :: getProducts();

    bool success = Process :: save_to_File( AllProducts );
    if(success == 1)
        std::cout << "success to save\n";
    else  
        std::cout << "fail to save\n";

    Process :: read_File();
    return 0;
}