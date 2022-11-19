#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
#include <limits>
#include <cmath>
#include <math.h>

int hexdec(char x){
    int hexdec = tolower(x) - 'a';
    hexdec += 10;
    return hexdec;
}

int system5(){
 int x, y, z, j, k, l, p;
    std::cout << "Enter decimal: ";
    std::cin >> x;
    x % 5 == y;
    x / 5 == z;
    z % 5 == j;
    z / 5 == k;
    if (k == 1){
        std::cout << j << y;
    }
    k % 5 == l; 
    k / 5 == p;
    if (p == 1){
        std::cout << l << k << j << y;
    }
    return 0;
}


int system2(){
    int s,i;
    int x[4];
    s = 0;
    std::cout << "Enter the number from right to left: ";
    for(i=0;i<4;i++){
        std::cin >> x[i];
        while (x[i] != 0 && x[i] != 1){
            std::cout << "Enter 0 or 1: ";
            std::cin >> x[i];
        }
        s = s + x[i]*pow(2,i);
    }
    std::cout << "The number in decimal is: " << s;
    return 0;

}


int system16(){
    int i;
    int s = 0;
    char x[3];
    for (i=0; i<3; i++){
        std::cout << "enter the numbers from right to left: ";
        std::cin >> x[i];
        }
    for(i=0; i<3; i++){
        if(isalpha(x[i]) != 0){
            s += hexdec(x[i])*pow(16,i);
        }
        else{
           s += (x[i]- '0') * pow(16,i);
        }
    }

    std::cout << s << std::endl;

return 0;
}


int main(){
int x;
std::cout << "choose system" << std::endl;
std::cin >> x;
    
    if(x == 16){
        system16();
    }
    if(x == 2){
        system2();
    }
    if(x == 5){
        system5();
    }
    else{
        return 0;
    }
return 0;
}

//first






