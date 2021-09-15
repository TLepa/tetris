#include <iostream>
#include "printwall.h"

int main (int argc, char *argv[])
{
    Printwall printWall;
//    int arrayInt[argc-1];
//    for (int i=1;i<argc;++i)
//    {
//        std::cout<<"i=" <<i<<std::endl;
//        arrayInt[i]=atoi(argv[i]);
//    }
//    for (int i=1;i<=argc-1;++i)
//    {
//        std::cout<<"i="<<arrayInt[i]<<std::endl;
//    }
    if (argc !=3)
    {
        std::cout<<"Not enought parameteres "<<std::endl;
        std::cout<<"Will use base matches"<<std::endl;
        std::cout<<"will use this parametres "<<"X="<< printWall.getPlayFieldX() <<" "<< "Y="<< printWall.getPlayFieldY()<<std::endl;
    }
    else
    {
printWall.setPlayFieldX(atoi(argv[1]));
printWall.setPlayFieldY(atoi(argv[2]));
std::cout<<"X= "<<printWall.getPlayFieldX()<<std::endl;
std::cout<<"Y= "<<printWall.getPlayFieldY()<<std::endl;
    }

}


//zminna ne mae metodov a object maet;
//v classe funkcia - ce metod a zminna-eczempliar classa;
