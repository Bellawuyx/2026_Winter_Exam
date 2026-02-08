#include<iostream>
#include<string>
void say_hello(std::string name);
void say_hello(std::string name){
    std::cout<<"Hello, I am "<<name<<", I am ready for baattle!"<<std::endl;
}
int main()
{
    std::string name = "Hotpot_Starter";
    say_hello(name);
    return 0;
}