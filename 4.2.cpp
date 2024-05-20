#include <iostream>
#include<fstream>
#include<string>

class addres {
private:
    std::string city;
    std::string street;
    int numHome;
    int numApart;
public:
    addres(std::string city, std::string street, int numHome,
        int numApart) {
        this->city = city;
        this->street = street;
        this->numHome = numHome;
        this->numApart = numApart;


    }

    void get_output_addres(int x,std::string city, std::string street, int numHome,
        int numApart) {


        std::ofstream out("out.txt", std::ios::app);

        out << city << "," << street << "," << numHome << "," << numApart << std::endl;

    }



};



int main()
{
    setlocale(LC_ALL, "Russian");
    std::string city;
    std::string street;
    int numHome = 0;
    int numApart = 0;

    std::string num;

    std::ifstream file("in.txt");
    file.is_open();
    file >> num;
     int x = std::stoi(num);
     


    addres* liveCity[5];
    for (int i = 0;i < x;i++) {
        liveCity[i] = new addres(city, street, numHome, numApart);
    }

   
    std::ofstream out("out.txt");
   
    out << x << std::endl;
    for (int i = 0;i < x;i++) {

        file >> city;
        file >> street;
        file >> numHome;
        file >> numApart;
        liveCity[i]->get_output_addres(x,city, street, numHome, numApart);

    }
    for (int i = 0;i < x;i++) {
       delete liveCity[i] ;
    }
    


    return 0;
}
