#include <iostream>

void foo(int i,int s){
    if(i >= s)
    return;
    std::cout << "*";
    ++i;
    foo(i,s);
}


int main()
{
    int s;
    std::cout<<"S=";
    std::cin>>s;
    std::cout<<std::endl;
    std::cout<<std::endl<<std::endl;
    for(int i=0;i<s;i++)
    {
        foo(i,s);
        for (int j=0; j<=i*2;j++)
            std::cout<<" ";
        foo(i,s);
        std::cout<<std::endl;
    }
    for(int i=s;i>=0;i--){
        foo(i,s);
        for (int j=0;j<=i*2;j++){
            std::cout<<" ";
        }
        foo(i,s);
        std::cout<<std::endl;
    }
    return 0;
}
