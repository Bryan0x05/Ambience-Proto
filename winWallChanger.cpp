//c++ windows wallpaper changer
#include <windows.h>
#include <iostream>
#include <string>

int main(int argc, char** argv){
    //not sufficent arguments
    if(argc != 2){
        std::cerr << "insufficent arguments for wallpaper change -winWallChanger.cpp" << std::endl;
        return -1;
    }
    //get file path from commandline argument. Using pointer due win API fun sig.
    char *ptr = argv[1];
    //Changes windows wallpaper to image file stored at filed path pointed to by ptr.
    bool result = SystemParametersInfoA(20, 0, ptr, 0);

    //if api call failed.
    if(result == false){
        std::cerr << "Windows api call failed -winWallChanger.cpp" << std::endl;
        return -1;
    }
    //else result true
    return 0;
}
