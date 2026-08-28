#include <iostream> 
#include <string>

int main() 
{
    
    const int CURRENT_YEAR = 2026;


    std::string name = "Bao";
    int age = 19;
    double height = 1.70; // in meters
    char gender = 'M';
    int score = 80;

    int birthYear = CURRENT_YEAR - age;
    int nextAge = age + 1;

    // Header section with separators
    std::cout << "========================\n";
    std::cout << "         PROFILE        \n";
    std::cout << "------------------------\n";

    // Blank line for clean spacing
    std::cout << std::endl;

    std::cout << "Name        : " << name << std::endl;
    std::cout << "Age         : " << age << std::endl;
    std::cout << "Height      : " << height << std::endl;
    std::cout << "Gender      : " << gender << std::endl;
    std::cout << std::endl;

    std::cout << "Birth Year  : " << birthYear << std::endl;
    std::cout << "Next Age    : " << nextAge << std::endl;
    std::cout << std::endl;

    std::cout << "Initial Score : " << score << std::endl;

    
    score = score + 10; // Value changed from 80 to 90

    std::cout << "Updated Score : " << score << std::endl;
    std::cout << std::endl;
    
    // Content section
    std::cout << "  [Name]         : Bao" << std::endl;
    std::cout << "  [Major]        : Automotive Technology and Engineering" << std::endl;
    std::cout << "  [Favorite Car] : Mercedes-Benz AMG CLS63s" << std::endl;
    std::cout << "  [Setup]        : AMD Ryzen 7 4800H | GTX 1650" << std::endl;


    std::cout << std::endl;

    // Footer section
    std::cout << "----------------------------------------------------------" << std::endl;
    std::cout << "    IF THIS SHOWS UP ON GITHUB THEN I DID IT CORRECTLY    " << std::endl;
    std::cout << "==========================================================" << std::endl;

    return 0;
}