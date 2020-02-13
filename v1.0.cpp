#include <iostream>

int main()
{
    std::string eilpr, eilt, eilv, vardas;
    int plotis,ilgis,vardo, eiltarpai;
    bool tinka = false;
    std::cout<<"Vardas"<<std::endl;
    std::cin>>vardas;
    std::cout<<"eiluciu plotis(nelyginis skaicius)"<<std::endl;
    std::cin>>plotis;
    while(!tinka)
    {
        if(plotis%2==0 || plotis==1)
        {
            tinka= false;
            std::cout<<"Per mazas kiekis arba lyginis skaicius"<<std::endl;
            std::cout<<"eiluciu plotis"<<std::endl;
            std::cin>>plotis;
        }
        else
            tinka=true;

    }
    eiltarpai = (plotis-3)/2;
    ilgis = vardas.length() + 14;
    vardo = vardas.length();
    char c;
    c = vardas[vardo-1];
    //pasiruosimas eiluciu
    if(c=='s')
    eilv = "* Sveikas, " + vardas +"! *";
    else
    {
        eilv = "* Sveika, " + vardas +"! *";
        ilgis--;
    }

    for(int i=0;i<ilgis;i++){
        eilpr +="*";
        if(i!=0 && i!= ilgis-1){
            eilt +=" ";
        }
        else{
            eilt+= "*";
        }
    }
    std::cout<<eilpr<<std::endl;
   for(int i=0;i<eiltarpai;i++)
    std::cout<<eilt<<std::endl;
    std::cout<<eilv<<std::endl;
    for(int i=0;i<eiltarpai;i++)
    std::cout<<eilt<<std::endl;
    std::cout<<eilpr<<std::endl;



return 0;
}
