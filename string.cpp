#include<iostream>
int main(){
 std::string name;
 int n=9;
 std::cout<<"enter ";
std::cin>>n; //it will take space as enter
  std::cout<<"n is "<<name; 
// std::cin ignore();
 getline(std::cin,name);
 std::cout<<"name is "<<name;
 
    return 0;
}