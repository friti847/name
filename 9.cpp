#include<iostream>
int main(){
int num;
int guess;
int tries;
tries = 0;
srand(time(NULL));
num = (rand() % 100) + 1;
std::cout << "*******************************Number guess game*****************************\n";
do
{
    std:: cout << "Enter the guess between (1 - 100): ";
    std::cin >> guess;
    tries++;
    if(guess < num){
        std::cout << "Too low!\n"; 
    }
    else if (guess > num)
    {
        std::cout << "Too high!\n";
    }
    else{
        std::cout << "U GOT IT!!" << "Number of attempts: " << tries << '\n';
    }
} while (guess != num);
std::cout << "**********************************************************************************";
return 0;
}