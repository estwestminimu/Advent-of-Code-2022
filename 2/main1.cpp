#include <iostream>

int main() {
    int sum=0;
    char in1, in2;
    bool check= true;
    while(check)
    {
        std::cin>>in1;
        std::cin>>in2;

        if(in1=='G' && in2=='G')
        {
                check=false;
        }
        else
        {

            if(in2=='X')
            {
                sum+=1;
            }


            if(in2=='Y')
            {
                sum+=2;
            }


            if(in2=='Z')
            {
                sum+=3;
            }




            //remis
            if((in1=='A' && in2=='X')||(in1=='B' && in2=='Y') || (in1=='C' && in2=='Z'))
            {
                sum+=3;

            }


            //Wygrana

            //kamien
            if(in2=='X' && in1=='C')
            {
                sum+=6;
            }


            //papier
            if(in2=='Y' && in1=='A')
            {
                sum+=6;
            }

            //nozyce
            if(in2=='Z' && in1=='B')
            {
                sum+=6;
            }


        }


    }
    std::cout<<sum;

    return 0;
}