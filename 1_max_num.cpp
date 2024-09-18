#include <algorithm>
#include <iostream>

int arr[3];

void in(std::string name,int index){

std::cout << "Enter The "<< name <<" Number :" << std::endl;
std::cin >> arr[index] ;

}

int main(){

in("First ",0);
in("second",1);
in("Third ",2);


std:: cout << "The Maximum Number is : " <<*std::max_element(std::begin(arr),std::end(arr)) << std::endl;


    return 0;
}