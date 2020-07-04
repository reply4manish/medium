#include <string>
#include <iostream>

/*Declaring an abstract class*/
class AbstractClass{
    public:
        AbstractClass(std::string msg): message(msg){}
        virtual void method_first() = 0; // a pure virtual method
        virtual void method_second(){   // implemented virtual method
            std::cout << message << std::endl;
        }

    private:
        std::string message;    
}; 