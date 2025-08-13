#include <iostream>


int main(){

    std::string students[] = {"Maaz Haris", "Youshae bin Mansoor Jafri", "Abdullah Ahmed"};

    for (std::string student : students)
    {
        std::cout << student << "\n";
    }
    

    return 0;
}