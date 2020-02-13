#include <iostream>

int main()
{
    std::string eilpr, eilant, eiltrec, eilket, eilpen, vardas;
    std::cin>>vardas;
    int ilgis,vardo;
    ilgis = vardas.length() + 14;
    vardo = vardas.length();
    char c;
    c = vardas[vardo-1];
    //pasiruosimas eiluciu
    if(c=='s')
    eiltrec = "* Sveikas, " + vardas +"! *";
    else
    {
        eiltrec = "* Sveika, " + vardas +"! *";
        ilgis--;
    }

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
