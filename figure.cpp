#include <iostream>
 
int main(){
    int vertex, width;
 
    std::cout << "Enter vertex: ";
    std::cin >> vertex;
    std::cout << "Enter width: ";
    std::cin >> width;
 
    for(int i = 0; i < vertex; ++i)
    {
        for(int j = 0; j < vertex - i ; ++j){
            std::cout << ' ';
		}
        for(int j = 0; j < width; ++j){
            std::cout<< '*';
		}
        std::cout<<std::endl;
    }
 
    return 0;
}
