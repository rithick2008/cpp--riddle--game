#include <iostream>
#include<string>
int main(){
 //initializizng point to zero
int points {0};
std::string ans1;
std::string ans2;
std::string ans3;
std::string ans4;
std::string ans5;
std::cout<<"hi welcome to the game pal "<<std::endl;
std::cout<<"this is a  astronomical riddle game "<<std::endl;
std::cout<<"--------------"<<std::endl;
 //question 1
std::cout <<"Q1: which is the largest planet in our solar system?"<<std::endl;
std::cin>> ans1;
if (ans1 == "jupiter" || ans1 == "Jupiter){
 points= points + 1;
std::cout<<"congrats it is the right answer "<<std::endl;
}
else{
   std::cout<<"it is wrong try again "<<std::endl;

}
 //question 2
std::cout <<"Q2: what is called as dwarf planet ?"<<std::endl;
std::cin>>ans2;
if (ans2 == "pluto" || ans2 = "Pluto"){
 ++points;
std::cout<<"congrats it is the right answer "<<std::endl;
}
else{
   std::cout<<"it is wrong try again "<<std::endl;

}
 //question 3
std::cout <<"Q3: which is the smallest planet in our solar system?"<<std::endl;
std::cin>> ans3;
if (ans3 == "mercury" || ans3 = "Mercury"){
 ++points;
std::cout<<"congrats it is the right answer "<<std::endl;
}
else{
   std::cout<<"it is wrong try again "<<std::endl;

}
//question4
std::cout <<"Q4: which is the planet with rings in our solar system?"<<std::endl;
std::cin>> ans4;
if (ans4 == "saturn" || ans4 = "Saturn"){
 ++points;
std::cout<<"congrats it is the right answer "<<std::endl;
}
else{
   std::cout<<"it is wrong try again "<<std::endl;

}
 //question5
std::cout <<"Q5: which is the hottest planet in our solar system?"<<std::endl;
std::cin>> ans5;
if (ans5 == "venus" || ans5 = "Venus"){
 ++points;
std::cout<<"congrats it is the right answer "<<std::endl;
}
else{
   std::cout<<"it is wrong try again "<<std::endl;

}
if(points== 0 ){
 std::cout<<"you have to improve your astronmical knowledge"<<std::endl;
}
 
std::cout<<"congrats on finishing this quiz "<<std::endl;
std::cout<<"your total point out of 5  is:  "<<points<<std::endl;


}
