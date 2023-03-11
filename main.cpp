#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){
    while (true){
       srand(time(NULL));// <-- to gen every time it runs W

       int random = rand() % 10 + 1;

       int number;
       std::cout << "choose a random number from 1 to 10 >: ";
       std::cin >> number;
       if (number == random) {
       	   std::cout << "u got it right W";
       } else {
    	   std::cout << "DUMBASS!";
       }

       std::string yon;
       std::cout << "\nagain? (y/n) >: ";
       std::cin >> yon;
       if (yon == "y") {
          //pass fr
       } else if (yon == "n") {
      	   break;
       } else {
    	   break; //idk what to do if else lmao
      }
    }
}
