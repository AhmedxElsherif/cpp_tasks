#include <iostream>

void letter (char x){

std::cout << "------------------"<<std::endl; 

std::cout<<"|  "<<   x  <<"   |   "; 

std::cout<<int (x)<<"   | "<<std::endl; 

};

int main(){

std::cout<<" ASCII Code Table :"<<std::endl; 

std::cout<<"| Char   |  ASCII  |"<<std::endl; 

letter('a');
letter('b');
letter('c');
letter('d');
letter('e');
letter('f');
letter('g');
letter('h');
letter('i');
letter('k');
letter('l');
letter('m');
letter('n');
letter('o');
letter('p');
letter('q');
letter('r');
letter('s');
letter('t');
letter('u');
letter('v');
letter('w');
letter('x');
letter('y');
letter('z');
std::cout << "------------------"<<std::endl; 

   return 0;
}