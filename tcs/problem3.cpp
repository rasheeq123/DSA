/*Given a maximum of four digits to the base 17(10 -> A, 11 -> B, 12 -> C, 16 -> G) as input, output its decimal value.*/


#include<iostream>
#include<math.h>
using namespace std;
int hexadecimal(string num)
{
    int power = 0;
    int digitvalue,  decimal_value=0;
    for(int i=num.length()-1; i>=0; --i)
    {
        if(num[i]>='A' && num[i]<='G')
        digitvalue= num[i]-'A'+10;
        else if(num[i]>='0' && num[i]<='9')
        digitvalue=num[i]-'0';
        else
        return -1;

        decimal_value+= digitvalue *pow(17, power);
        power++;

    
    }
   return decimal_value;

}
int main()
{
    string num;
    cin>>num;

    cout<<hexadecimal(num);
    
    
    return 0;
}




//////////////////////////////            Without function     /////////////////////////////////////
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     string num;
//     cin>>num;
//     int power = 0;
//     int digitvalue,  decimal_value=0;
//     for(int i=num.length()-1; i>=0; --i)
//     {
//         if(num[i]>='A' && num[i]<='G')
//         digitvalue= num[i]-'A'+10;
//         else if(num[i]>='0' && num[i]<='9')
//         digitvalue=num[i]-'0';
//         else
//         return -1;

//         decimal_value+= digitvalue *pow(17, power);
//         power++;

    
//     }
//    cout<<decimal_value;
//    return 0;

// }
    
