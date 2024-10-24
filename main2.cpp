#include <iostream>

class Logger {
private:
  inline static int counter = 0;
  const int id;
public:
  Logger():id(++counter) {
    std::cout<<"Logger():"<<id<<"\n";
  }
    Logger(const Logger& other): id(++counter){
      std::cout<<"Logger(copy):"<<id<<"\n";
    }
    Logger& operator= (const Logger& other){
      std::cout<<"Logger=:"<<id<<"\n";
    }
    ~Logger(){
      --counter;
      std::cout<<"~Logger()"<<id<<"\n";
    }
  };