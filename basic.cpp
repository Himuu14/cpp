==> Basics 
{input ,output,data types,some mathmatical opreations}

#include <iostream>

using namespace std;
int main(){
    int num1{89};
    int num2 {20};

    cout<<num1<< endl;
    cout<< num2 << endl;
}


#include <iostream>

using namespace std;
int main(){
    int num1{89};
    int num2 {20};

    num1 = num2 = 100;

    cout<<num1<< endl;
    cout<< num2 << endl;
}


#include <iostream>

using namespace std;
int main(){
    int num1{100};
    int num2{200};
    //arthmatic opreation

    cout<< num1 << " + " <<num2 << " = " << num1+num2 << endl;
    cout<< num1<< " - " <<num2 << " = "<< num1-num2 <<endl;
    cout<< num1 << " * "<< num2 << " = "<< num1*num2 <<endl;
    cout<< num1 << " / " << num2 <<" = " << num1/num2 << endl;
}



#include <iostream>

using namespace std;
int main(){
    int num1{100};
    int num2{200};
    num1++;
    num2++;
    cout<< num1<< endl;
    cout<< num2 << endl;
    num1-- ;
    num2-- ;
    cout<< num1 << endl;
    cout<< num2<< endl;
    num1 +=  8 ;
    cout<< num1<< endl;
}



#include <bits/stdc++.h>

using namespace std;
int main(){
     int i =5 ;
     cout<< i++<<endl;
     cout<<++++i<< endl;

     cout<< i-- <<endl;
     cout<< ----i<<endl;
}




#include <iostream>

using namespace std;
int main(){
    cout<< "Enter 3 integers seprated by spaces "<< endl;
    int num1{}, num2{}, num3{};
    cin>> num1  >> num2>> num3 ;
    const int count = 3;

    int sum {};
    sum = num1+ num2 + num3 ;
    double avarage = {0.0};
    avarage = static_cast<double>(sum) / count ;

    cout<<" your 3 integers are :  " << num1<<" , " <<num2 <<" , " << num3 << endl;
    cout<< " the sum of all 3  integers are : "<< sum << endl;
    cout<< " the avarage is : " << avarage << endl;
}



#include <iostream>

using namespace std;
int main(){
    const int Dallor_amount = 100 ;
    const int quater_amount = 25 ;
    const int dime_amount = 10 ;
    const int nickel_amount = 5;
    const int penny_amount = 1 ;
    int ChangeAmount {};
    cin>> ChangeAmount ;

    int balance{} , dallor{}, quater{},dime{}, nickel{} ,penny{} ;

    dallor = ChangeAmount/Dallor_amount ;
    balance = ChangeAmount - (dallor * Dallor_amount);

    quater = balance / quater_amount;
    balance -= quater * quater_amount ;

    dime = balance / dime_amount;
    balance -= dime* dime_amount ;

    nickel =  balance / nickel_amount;
    balance -= nickel* nickel_amount;

    penny = balance ;

    cout<<"Dallor  = " << dallor << endl;
    cout<< "Quater  = "<< quater << endl;
    cout<< "dime   = "<< dime << endl;
    cout<< "Nickel  = "<< nickel << endl;
    cout<< "Penny  = "<< penny << endl;
    }



#include <iostream>

using namespace std;

int main(){
 int RoomLength {0};
 int RoomBreath {0};

 cout<<"pzz enter room length ";
 cin >>RoomLength;

 cout<< "pzz enter room breath ";
 cin >>RoomBreath;


 cout<< "Area of the Room is "<< RoomLength * RoomBreath << " squarefeet" <<endl;

}

 

#include <iostream>

using namespace std;

int main(){
 int PriceOfSmallRoom = 25 ;
 int PriceOfLargeRoom = 35 ;
 int tax = 6 ;
 int NumberOfSmallRooms ;
 int NumberOfBigRooms ;

 cout<< "pzz enter the number of small rooms :-  "<<endl;
 cin>>NumberOfSmallRooms ;

 cout<< "pzz enter the number of big rooms :-   " <<endl;
 cin>>NumberOfBigRooms  ;

 int cost = NumberOfBigRooms * 35 + NumberOfSmallRooms *25 ;

 cout<< cost << endl;

 cout<< "Tax is 6.6 %"<< endl;

 float Totalestimate = cost + cost * 6/100 ;
 cout<< "Total Estimate is " <<Totalestimate << endl;
}



#include <iostream>
using namespace std;
int main(){
    const int Dallor_amount = 100 ;
    const int quater_amount = 25 ;
    const int dime_amount = 10 ;
    const int nickel_amount = 5;
    const int penny_amount = 1 ;

    int ChangeAmount {};
    cin>> ChangeAmount ;

    int balance{} , dallor{}, quater{},dime{}, nickel{} ,penny{} ;

    dallor = ChangeAmount/Dallor_amount ;
    balance = ChangeAmount - (dallor * Dallor_amount);

    quater = balance / quater_amount;
    balance -= quater * quater_amount ;

    dime = balance / dime_amount;
    balance -= dime* dime_amount;

    nickel =  balance / nickel_amount;
    balance -= nickel* nickel_amount;

    penny = balance ;

    cout<<"Dallor  = " << dallor << endl;
    cout<< "Quater  = "<< quater << endl;
    cout<< "dime   = "<< dime << endl;
    cout<< "Nickel  = "<< nickel << endl;
    cout<< "Penny  = "<< penny << endl;

    ChangeAmount=balance = dallor =quater = dime = nickel = penny = 0 ;
    // reset everything to 0
    // method 2  moduls opperatious
    cin>> ChangeAmount ;
    dallor = ChangeAmount / Dallor_amount ;
    balance = ChangeAmount% Dallor_amount ;

    quater = balance / quater_amount ;
    balance %= quater_amount  ;

    dime = balance / dime_amount;
    balance %= dime_amount;

    nickel = balance / nickel_amount;
    balance %= nickel_amount;

    penny = balance ;
    cout<<"Dallor  = " << dallor << endl;
    cout<< "Quater  = "<< quater << endl;
    cout<< "dime   = "<< dime << endl;
    cout<< "Nickel  = "<< nickel << endl;
    cout<< "Penny  = "<< penny << endl;
}




#include <iostream>

using namespace std;

int main()
{
    int a =5;
    int b = 6;
    bool c = a==b;
    cout<< c << endl;
}
