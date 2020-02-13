#include <iostream>

int main()
{
    std::string eilpr, eilant, eiltrec, eilket, eilpen, vardas;
    std::cin>>vardas;
    int ilgis;
    ilgis = vardas.length() + 14;
    //pasiruosimas eiluciu
    eiltrec = "* Sveikas, " + vardas +"! *";
    for(int i=0;i<ilgis;i++){
        eilpr +="*";
        if(i!=0 && i!= ilgis-1){
            eilant +=" ";
        }
        else{
            eilant+= "*";
        }
    }
    eilket = eilant; eilpen = eilpr;
    std::cout<<eilpr<<std::endl;
    std::cout<<eilant<<std::endl;
    std::cout<<eiltrec<<std::endl;
    std::cout<<eilket<<std::endl;
    std::cout<<eilpen<<std::endl;


return 0;
}
