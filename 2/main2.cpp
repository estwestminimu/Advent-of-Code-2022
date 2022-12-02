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


            //przegrana
            if(in2=='X')
            {
                if(in1=='A')
                {
                    sum+=3;
                }

                if(in1=='B')
                {
                    sum+=1;

                }

                if(in1=='C')
                {
                    sum+=2;

                }
            }

            //remis
            if(in2=='Y')
            {
                sum+=3;

                if(in1=='A')
                {
                sum+=1;
                }

                if(in1=='B')
                {
                    sum+=2;

                }

                if(in1=='C')
                {
                    sum+=3;

                }

            }

            //wygrana
            if(in2=='Z')
            {
                sum+=6;

                if(in1=='A')
                {
                    sum+=2;
                }

                if(in1=='B')
                {
                    sum+=3;

                }

                if(in1=='C')
                {
                    sum+=1;

                }
            }






        }


    }
    std::cout<<sum;

    return 0;
}
