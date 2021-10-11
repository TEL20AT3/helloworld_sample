#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[])
{

   std::cout << "Hello World!" << std::endl;
   std::vector<std::string> vec = {"1", "2", "3"};

   for (auto el: vec) {
      std::cout << el << std::endl;
   }

   return EXIT_SUCCESS;
}