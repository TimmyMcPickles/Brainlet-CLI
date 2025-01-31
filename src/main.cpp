#include <iostream>
#include <thread>
#include <cstdlib>
#ifdef _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif

int main(){
    int i = 0;

    system(CLEAR);
    while(true){
        system(CLEAR);
        std::cout << "Seconds spent without a brain: " << i << std::endl;
        i++;
        std::this_thread::sleep_for(std::chrono::seconds(1));

    }

    return 0;
}
