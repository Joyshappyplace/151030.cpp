#include <iostream>
#include <chrono>
#include <thread>

int main() {
    while(true){
        std::cout<<"Traffic Light Simulation\n";
    //Enter Red light
    std::cout<<"Red light\n";
    std::this_thread::sleep_for(std::chrono::seconds(8));//Red light
    //Enter Yellow light
    std::cout<<"Yellow light\n";
    std::this_thread::sleep_for(std::chrono::seconds(4));//Yellow Light
    //Enter Green light
    std::cout<<"Green light\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));//Green light
    }
    return 0;
}