#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

extern "C" void say_bye(){
    cout<<"bye"<<endl;
} 

void say_hi(){
    cout<<"hi"<<endl;
}

string nadia(){
    return "My girlfriend is very cool";
}

float pi(){
    return M_PI;
}

extern "C" float euler(){
    return M_E;
}

int main(int argc, char* argv[]){

    // say_bye();
    // say_hi();
    // cout<<nadia()<<endl;
    // cout<<pi()<<endl;
    // cout<<euler()<<endl;
    // const char* bye = "say_bye";

    for (int i = 0; i < argc; i++) {
        if(strcmp(argv[i], "say_bye") == 0) say_bye();
        if(strcmp(argv[i], "say_hi")  == 0) say_hi();
        if(strcmp(argv[i], "pi")      == 0) cout<<pi()<<endl;
        if(strcmp(argv[i], "euler")   == 0) cout<<euler()<<endl;
        if(strcmp(argv[i], "nadia")  == 0) cout<<nadia()<<endl;

        //cout << "Argument " << i << ": " << argv[i] <<endl;
    }

    return 0;
}