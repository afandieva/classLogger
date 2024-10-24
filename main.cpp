/*#include <iostream>
#include <list>

class Logger {
private:
    int id=0;
public:
    Logger() {
        std::cout << "Logger():"<<id<<"\n";
    }
    Logger(int x) {
        id=x;
        std::cout<<"Logger(int):"<<id<<"\n";
    }
    Logger& operator= (const Logger& other) {
       id=other.id;
        return *this;
    }
    ~Logger() {
        std::cout << "Logger():"<<id<<"\n";
    }
    Logger(const Logger& other) { //konstructor copirovaniya
        id=other.id;
        std::cout<<"Logger(copy)"<<"\n";
    }
};

int main() {
    /*Logger x1(1);
    {
        Logger x2(2);
    }
    Logger x3(3);*/
   /* Logger* ptr1 = new Logger(1);
    Logger* ptr2 = new Logger(2);
    delete ptr1;
    delete ptr2;*/
    /*std::list<Logger> loggers(2);
    loggers.pop_front();
    loggers.pop_back();*/
 /*   Logger x1(1);
    Logger x2{x1};
    x2=x1;

    return 0;
}*/
#include <iostream>

class C{
public:
    int x=0;
    inline static int sx=0;
    static const int scx=100;
};
int main() {
    std::cout<<C::sx<<" "<<C::scx<<"\n";
    C::sx=1;
    std::cout<<C::sx<<" "<<C::scx<<"\n";
    C c1,c2;
    c1.x = 42;
    c2.x = 17;
    c2.sx = 13;

    std::cout<<c1.x<<" "<<c1.sx<<" "<<c1.scx<<"\n";
    std::cout<<c2.x<<" "<<c2.sx<<" "<<c2.scx<<"\n";

}