#include"process.h"
#include<iostream>
#include<fstream>
#include<direct.h>

std::vector<Product> Process :: getProducts ()
{
    
    int size = Generate :: randomNum(5, 10);
    std::vector<Product> get;
    for(int i = 0; i < size; i++)
    {
        Product new_pro = Generate :: generate_Pro(std::to_string(i) );
        get.push_back( new_pro );
    }

    return get;
}

bool Process ::save_to_File( std::vector<Product> arr)
{
    
    //create folder
    std::string path = "Product/";
    if( mkdir( "Product/" ) == -1)
    {
        std::cout << "can not create folder\n";
        return false;
    }

    for( int i = 0; i < arr.size(); i++)
    {
        std::ofstream out;
        std::string file = std::to_string( i + 1 ) + ".txt";
        path += file;
        out.open(path);

        if(!out)
        {
            std::cout << "can not open file " << path << "\n";
            return false;
        }

        out << "ID=" << arr[i].getId() << ", ";
        out << "Name=" << arr[i].getName() << ", ";
        out << "Price=" << arr[i].getPrice() << "\n";

        path = "Product/";
        out.close();
    }
    
    return true;
}

std::string Process :: getInfo( std:: string data, int &next ) 
{
    int char_equal = data.find('=');
    int char_common = data.find(',');
    next = char_common + 2;
    return data.substr(char_equal+1, char_common - char_equal - 1);
}

void Process :: read_File()
{
     std::string folder = "Product/"; 
    int index = 1;
    while(1)
    {
      std::ifstream in_file(folder + std::to_string ( index ) + ".txt");
      if(!in_file)
      {
        return;
      }
       
        Product pro;

        std::string data = "";
        std::getline(in_file, data);

        int next = 0;
        pro.setID( getInfo(data, next) );
        pro.setName( getInfo(data.substr(next), next) );
        pro.setPrice ( std::stoi ( getInfo( data.substr(next), next ) ) );

        pro.print_Product();
        in_file.close();
        index += 1;
    }

}