#include <iostream>
#include <string>

int main()
{
  // exercise 1
 int x = 25;
 int y = 3;
 std::cout << "x + y = " << x+y << std::endl;
 std::cout << "x - y = " << x-y << std::endl;
 std::cout << "x * y = " << x*y << std::endl;
 std::cout << "x / y = " << x/y << std::endl;
 std::cout << "x % y = " << x%y << std::endl;
 int z = 10;
 std::cout << (x>z) << std::endl;
 std::cout << (y<x) << std::endl << std::endl;

//exercise 2
bool isSunny = true;
bool hasUmbrella = false;
std::cout << (isSunny && hasUmbrella) << std::endl;
std::cout << (isSunny || hasUmbrella) << std::endl;
std::cout << (!isSunny) << std::endl;
std::cout << (!isSunny && !hasUmbrella) << std::endl << std::endl;

//exercise 3
int n = 7;
double m = 4.0;
bool hasLicense = false;
std::cout << (n > m) << std::endl;
std::cout << (m==4.0) << std::endl;
std::cout << (hasLicense && m<=n) << std::endl;
std::cout << (n>5 && !hasLicense) << std::endl << std::endl;

//exercise 4
std::string firstName = "John";
std::string lastName = "Doe";
double score = 85.75;
std::cout << lastName << ", " << firstName << std::endl;
std::cout << "Your score is: " << score << std::endl << std::endl;

//exercise 6?
int age = 18;
double height = 5.9;
bool isStudent = true;
std::string city = "New York";
std::cout << "You were born in the year " << 2024 - age << std::endl;
std::cout << (age >= 18) << std::endl;
std::cout << (height > 6) << std::endl;

  return 0;
}
