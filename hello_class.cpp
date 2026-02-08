#include<iostream>
#include <string>
class Robot {
private:
    std::string name;
public:
    void setName(std::string newName)
{
    name=newName;
}
    std::string getName(){
        return name;
    }
    void say_hello(){
        std::cout << "Hello, I am "<<name<<"，Iam ready for battle!"<<std::endl;
    }
};
int main(){
    Robot  myRobot;
    myRobot.setName("Hotpot_Starter");
    myRobot.say_hello();
    return 0;
}