                                                  C++

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


==> Conditions and loops

#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks (0);
    cin>> marks;

    if(marks>90 && marks<=100){
        cout<< "excellent" <<endl;
    }
    else if (marks>80 && marks<=90){
        cout<< "very good" <<endl;
    }
    else if(marks>70 && marks<=80){
        cout<< "good" <<endl;
    }
    else if (marks>60 && marks<=70){
        cout<< "meets exceptation" <<endl;
    }
    else {
        cout<< "bad do study" <<endl;
    }
return 0;
}


#include <iostream>
using namespace std;

int main() {
    for (int i {1}; i <= 100; i++){
        cout<< i ;
        if (i % 10 == 0 ){
            cout<< ""<<endl;

        }
        else {
            cout<<" ";
        }
        cout<< ((i%20 == 0 )? "\n":" ") ;
        }
}





#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a []={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    cin>> n;
    cout<< ((n>9)?a[0]:a[n]);
    
    return 0;
}





#include <iostream>
using namespace std;
int main(){
    char grade {};
    cout<< " Enter the grade you can expect on exam :  "<< endl;
    cin>> grade ;

    switch(grade){
    case 'a':
    case 'A':
        cout<< "great! study hard" << endl;
    break;
    case 'b':
    case 'B':
        cout<< " good ! study hard "<< endl;
    break;
    case 'c':
    case 'C':
        cout<< " you can achive more just study"<< endl;
    break;
    case 'd':
    case 'D':
        cout<< " you should achive more just study hard "<< endl;
    break;
    case 'f':
    case 'F' :
        {
            string confirm ;
            cout<< "really !  yess or no "<< endl;
            cin>> confirm ;
            if (confirm == "yess" ){
                cout<< " hmm ! you still have a chance just go and study hard "<< endl;}
            else if (confirm == "no" ){
                    cout<< " good no joking just study its exam time "<< endl;}
            else {
                cout<< " chutiya ho kya shai sai likho "<< endl;
            }}}}

#include <iostream>1
using namespace std;
int main(){
    int number ;
    cout << " pzz enter a integer : "<< endl;
    cin >> number ;
    if (number %2 == 0 ){
        cout<< " its a even number "<< endl;
        }
    else {
        cout<< " its a odd number "<< endl;
    }}



#include <iostream>
using namespace std;

int main()
{
    char input {};
    cin >>input ;
     switch(input){
    case 'A':
    case'a':
        cout<<"hello"<<endl;
        break;
    case 'B':
    case 'b':
        cout<<"nameste"<<endl;
        break;
    case 'C':
    case 'c':
        cout<<"hola"<<endl;
         break;
    case 'D':
    case'd':
        cout<<"salut"<<endl;
         break;
    case 'E' :
    case'e':
        cout<< "ciao"<<endl;
}}



(CONDITIONAL EXPRE ) ? EXPR1 : EXPR2 // great way fo doing /

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num ;;
    cin>> num ;

    cout<< num << " is " << ((num%2==0)? "even":"odd") <<endl;

return 0;
}





====> range based for loop 
for( vari.tp var name : sequence ){
statement ; }


#include <iostream>
using namespace std;

int main() {
    int scores []{ 29,45,67,89,10};
    for (auto score: scores){
        cout<< score<< endl;
    }
}


#include <iostream>

using namespace std;

int main()
{bool done {false};
int number {0};
while(!done){
    cout<<"enter a integer between 1 to 10 " <<endl;
    cin>>number ;
    if(number <= 1 || number>=10){
        cout<<"out of range! try again"<<endl;
    }
    else{
        cout<<"thanks !"<<endl;
        done=true;
    }
}}



#include <iostream>

using namespace std;

int main()
{
 int n{};
 cin >> n;

 int sum (0);

 for(int i {1}; i<=n;i++){
    sum = sum +i;
 }
  cout<<sum<<endl;
}



#include <iostream>

using namespace std;

int main()
{
int n{};
cout<<"enter any number"<<endl;
cin>> n;
while(n>0){
    cout<< n<<endl;
    cout<<"enter any number"<<endl;



    cin>>n;
}
cout<<"thanks for entering number" <<endl;
}



#include <iostream>

using namespace std;

int main()
{
    int n{};
    cin>>n;
    cout<<n<<endl;
    do{
        cout<<"pzz enter any number "<<endl;
        cin>>n;
    }while(n>0);
}


#include <iostream>

using namespace std;

int main()
{
      int PoketMoney = 3000;
      for (int n{1}; n<=30;n++){
            if(n%2== 0){
                continue;
            }
            PoketMoney=PoketMoney-300;
            if(PoketMoney==0){
                break;
            }
            cout<<n<<"go outside today"<<endl;

}}





====>>>PATTERNS

#include <iostream>
using namespace std;

int main(){
    int n(0);
    cin>> n;
    for(int i(0);i<=n;i++){
        for(int j(0);j<=n;j++){
            cout<< "*";
        }
        cout<< endl;
    }
return 0;
}



#include <iostream>

using namespace std;

int main()
{
    int row ;
    int col ;
    cin >> row >>col;

    for(int i {1};i<=row;i++){
        for(int j{1};j<=col;j++){
            cout<<"*";
               }
                cout<<endl;
    }

}


#include <iostream>

using namespace std;

int main(){
    int n,f;
    cin>> n>>f;
    for(int c =1;c<=f;c++){


    for (int i =n;i>=1;i--){
       for (int j=1;j<=i ;j++){
        cout<<"*";
       }
       cout<<endl;
    }}

}


#include <iostream>

using namespace std;

int main(){
    int row ,col ;
    cin>>row >>col;

    for (int i=1 ; i<=row;i++){
        for(int j=1; j<=col;j++){
            if(i==1 || i ==row ||j==1||j==col){
                cout<<"*" ;
            }
            else{
                cout<<" " ;
            }
    }
        cout<<endl;
    }
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n (0);
    cin>> n;

    for (int row (0); row< n ; row++){
        for(int col (n); col> 0; col-- ){
            cout<<col;
            }

    cout<<endl;
    }
}



#include <bits/stdc++.h>

using namespace std;
int main(){
    int n (0);
    cin>> n;
    for(int i(n);i>=0;i--){
        for(int j(0);j<=i;j++){
            cout<< "*";
        }
        cout<< endl;
    }

}



#include <bits/stdc++.h>

using namespace std;
int main(){
    int n(0);
    cin>> n;
    for(int i(0);i<=n;i++){
        for(int j(0);j<=n;j++){
            if(j<=n-i){
                cout<< " ";
            }else{
            cout<< "*";
            }
        }
        cout<< endl;
    }
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n(0);
    cin>> n;
    int number (1);
    for(int i(0);i<=n;i++){
        for(int j(0);j<=i;j++){
            cout<<number<< " ";
            number ++;
        }
        cout<<endl;
    }
}


#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int star(1);
    int spaces (n-1);
    for(int i(1);i<=n;i++){
        for(int j(1);j<=spaces;j++){
            cout<<"\t";
        }
        for(int j(1);j<=star;j++){
            cout<< "*\t";
        }
        spaces--;
        star++;
        cout<<endl;
    }
}




#include<bits/stdc++.h>
using namespace std;
int change(int d,int b){
   int pow = 1;
   int ans(0);
   while(d>0){
    int rem = d%b;
    d=d/b;
    ans +=rem *pow;
    pow=pow*10;
   }

   return ans;
}
int main (){
  int d,b;
  cin>> d>>b;
  cout<<change(d,b);


  return 0;
}



#include<bits/stdc++.h>
using namespace std;
int change(int d,int b){
  int ans(0);
  int pow(1);
   while(d>0){
    int rem = d%10;
    d = d/10;
    ans += rem *pow;
    pow=pow*b;
   }
   return ans;
}
int main (){
  int d,b;
  cin>> d>>b;
  cout<<change(d,b);
  return 0;
}





===>Strings

#include<bits/stdc++.h>
using namespace std ;

int main() {
  int t;
  cin>> t;
  cin.ignore();
  while(t--){
    string s;
    getline(cin,s);
    cout<< s<<endl;
  }
return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
  string str ;
  cin>> str;
  string str_rev;
  for(int i(str.size() -1);i>=0;i--){
    str_rev.push_back(str[i]);
  }
  cout<< str_rev ;
  return 0;
}






==> Arrays and vector


#include <iostream>
using namespace std;

int main(){
    char vovels [5] {'a','e','i','o','u'};
    cout <<" The first vovel is "<< vovels[0]<< endl;

    cout<<" The last vovel is " << vovels[4] << endl;

}


#include <iostream>

using namespace std;

int main(){
    double HiTemp []  {90.1 , 89.123,72.45,89.67};
    cout<<"The high temperature is "<<HiTemp[0]<<endl;

    HiTemp [0] = 100.987  ;

    cout<<"The high temperature is " <<HiTemp[0]<<endl;

}

#include <iostream>
using namespace std;
int main(){
    int TestScore [6];
    for(int i(0);i<6;i++){
        cin>> TestScore[i];
    }
    for(int i(0);i<6;i++){
        cout<< TestScore[i]<< " ";
    }
}

#include <bits/stdc++.h>

using namespace std;
int linear_search (int arr[],int n,int key){
for(int j(0);j<n;j++){
    if(key==arr[j]){
        return j;
    }
}
return -1;
}

int main (){
    int n;
    cin>> n;
    int arr[n];
    for(int i(0);i<n;i++){
        cin>> arr[i];
    }
    int key;
    cin>> key ;
    cout<< linear_search(arr,n,key)<<endl;

return 0;
}



#include<bits/stdc++.h>

using namespace std;
int binarySearch (int arr[],int n,int key){
int s(0);
int e(n);
while(s<=e){
        int mid= (s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        e= mid-1;
    }
    else if(arr[mid]<key){
        s= mid+1;
    }

}
return -1;

}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i(0);i<=n-1;i++){
        cin>> arr[i];
    }
    int key ;
    cin>> key;
    cout<< binarySearch(arr,n,key) <<endl;

return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        long long n;
        cin>> n;
        int ar[]={0,20,36,51,60};
        if(n==0){
            cout<<ar[0]<<endl;
        }
        else if(n==1){
            cout<<ar[1]<<endl;
        }
        else if(n==2){
            cout<<ar[2]<<endl;
        }
        else if(n==3){
            cout<<ar[3]<<endl;
        }
        else if(n==4){
            cout<<ar[4]<<endl;
        }
         else{
            int r =n%4;
            int h=60*(n/4)+4*(n-4);
            if(r==1){
                h=h+ar[1];
            }
            if(r==2){
                h=h+ar[2];
            }
            if(r==3){
                h=h+ar[3];
            }
            cout<<h<<endl;
        }
    }
}



//selection sort
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>> n;
    int arr[n];
    for(int i(0);i<=(n-1);i++){
        cin>> arr[i];
    }

    for(int i(0);i<(n-1);i++){
        for(int j(i+1);j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]= arr[i];
                arr[i]= temp;
                }
        }
    }
    for(int i(0);i<n;i++){
        cout<< arr[i]<< " ";
    }



return 0;
}


//bubble sort
#include <bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>> n;
     int arr[n];
     for(int i(0);i<n;i++){
        cin>> arr[i];
     }
     int counter (1);
     while(counter<n){
        for(int i(0);i<(n-counter);i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]= temp;
            }
        }
        counter++;
     }
for(int i(0);i<n;i++){
    cout<< arr[i]<< " ";
}
return 0;
}


#include<bits/stdc++.h>
using namespace std;
//2d arrays
int main(){
    int n,m;
    cin>> n>>m;
    //delecration
    int arr[n][m];
    //input
    for(int i(0);i<n;i++){
        for(int j(0);j<m;j++){
            cin>>arr[i][j];
        }
    }
    //output
    for(int i(0);i<n;i++){
        for(int j(0);j<m;j++){
            cout<< arr[i][j]<< " ";
        }
        cout<< endl;
    }
return 0;
}

#include<bits/stdc++.h>
using namespace std;
//2d arrays
int main(){
    int n,m;
    cin>> n>>m;
    //delecration
    int arr[n][m];
    //input
    for(int i(0);i<n;i++){
        for(int j(0);j<m;j++){
            cin>>arr[i][j];
        }
    }
    // searching a number in matrix
    int x;
    cin>> x;
    for(int i(0);i<n;i++){
        for(int j(0);j<m;j++){
            if(arr[i][j]==x){
                cout<< i<< " "<<j;
            }
            else{
                cout<< "-1";
            }
        }
        cout<< endl;
    }
return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,m ;
    cin>>n>>m;
    int arr[n][m];
    for(int i(0);i<n;i++){
        for(int j(0);j<m;j++)
            cin>> arr[i][j];
    }
    int row_start(0),row_end(n-1),column_start(0),column_end(m-1);
     while(row_start<=row_end && column_start<=column_end){
        for(int col(column_start);col<=column_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        for(int ro(row_start);ro<=row_end;ro++){
            cout<<arr[ro][column_end] <<" ";
        }
        column_end--;
        for(int col(column_end);col>=column_start;col--){
            cout<<arr[row_end][col]<< " ";
        }
        row_end--;
        for(int ro(row_end);ro>=row_start;ro--){
            cout<<arr[ro][column_start]<< " ";
        }
        column_start++;
     }

return 0;
}


//matrix multiplication
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,n3;
    cin>> n1>>n2>>n3;

    int arr1[n1][n2];
    int arr2[n2][n3];

    for(int i(0);i<n1;i++){
        for(int j(0);j<n2;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i(0);i<n2;i++){
        for(int j(0);j<n3;j++){
            cin>>arr2[i][j];
        }
    }
    int ans[n1][n3];
    for(int i(0);i<n1;i++){
        for(int j(0);j<n3;j++){
            ans[i][j]=0;
        }
    }
    for(int i(0);i<n1;i++){
        for(int j(0);j<n3;j++){
                for(int k(0);k<n2;k++){
                ans[i][j] += arr1[i][k]*arr2[k][j];
        }
        }
    }
    for(int i(0);i<n2;i++){
        for(int j(0);j<n3;j++){
            cout<< ans[i][j]<< " ";
        }cout<<endl;
    }
return 0;
}



===>VECTOR 


#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> TestScore {30,50,70,90,80};
    vector <char> vowels {'a','e','i','o','u'};
    vector <double> temp {15.789 , 78.98,25.79,28.7890};
}

#include <iostream>
#include <vector>

using namespace std;
int main(){

   vector <int> TestScore {100,90,80,70};


   cout<<"\n Here we are using array syntax :" << endl;
   cout <<TestScore[0]<< endl;
   cout<< TestScore[1]<< endl;
   cout<< TestScore[2]<< endl;
   cout<<TestScore [3]<< endl;


   cout<<"\nHere we are using vector Syntax : " << endl;
   cout<<TestScore.at(0)<< endl;
   cout<< TestScore.at(1)<< endl;
   cout<< TestScore.at(2)<< endl;
   cout<<TestScore.at(3)<< endl;

   cout<<"\n There the " <<TestScore.size()<<"score store in vector" <<endl;
}




#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector <int> TestScore {100,90,80,70};

    cout<<"pzz enter the updated test score "<< endl;
    cin>> TestScore[0] ;
    cin>> TestScore[1];
    cin>> TestScore[2];
    cin>> TestScore[3];


    cout<<" the values are updated "<< endl;

    cout<<TestScore.at(0) <<endl;
    cout<<TestScore.at(1)<< endl;
     cout<<TestScore.at(2)<<endl;
     cout<<TestScore.at(3)<<endl;
// this is just for fun it will give you error about out of range
     cout<<TestScore.at(10)<<endl;

}




#include<bits/stdc++.h>
using namespace std;
//vector details study
int main(){
    vector<int> v;
    cout<< "capacity : "<< v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<< "capacity : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<< "capacity : "<<v.capacity()<<endl;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout<< "capacity : "<<v.capacity()<<endl;
    cout<< "size : "<<v.size()<<endl;

    cout<< "Element at 2nd place : "<< v.at(2)<<endl;

    cout<< "Front (means 1st element) : "<<v.front()<<endl;

    cout<< "back (Means element at last postion) : "<<v.back()<<endl;

    cout<< " Before pop"<<endl;
    for(int i:v){
        cout<<i<< " ";
    }cout<< endl;

    v.pop_back();
    cout<< " After pop "<<endl;
    for(int i:v){
        cout<< i<< " ";
    }cout<<endl;

    v.clear();
    for(int i:v){
        cout<< i<< " ";
    }
return 0;
}




#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector <int> vector1 {};
    vector<int> vector2 {};



    vector1 .push_back(10);
    vector1 .push_back(20);

    cout<<vector1.at(0)<< endl;
    cout<<vector1.at(1)<< endl;

    cout<<"Size of vector1 is  " << vector1.size() << endl;
    


    vector2 .push_back (100);
    vector2 .push_back (200);

    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;

    cout<<"size of vector2 is  " << vector2.size()<< endl;


    vector<vector<int>> vector2d {};

    vector2d .push_back (vector1);
    vector2d .push_back (vector2);
    cout<<vector2d.at(0).at(0)<< " " << vector2d.at(0).at(1) <<endl;
    cout<< vector2d.at(1).at(0)<< " "<< vector2d.at(1).at(1)<<endl;

    vector1.at(0)=1000;
    cout<<vector2d.at(0).at(0)<< " " << vector2d.at(0).at(1) <<endl;
    cout<< vector2d.at(1).at(0)<< " "<< vector2d.at(1).at(1)<<endl;
}

#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> number{};
    for(int i = 0;i<4;i++){
    int x;
    cin>>x;
    number.push_back(x);}

    cout<<" thanks for input values" << endl;
    for(int i{0}; i<=3;i++){

        cout<<number.at(i)<<endl;
    }
}

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<double> temps{89.98,678.876,45.54,23.32,45.54};
    double average_temp {};
    double running_sum {};
     for(auto temp : temps){
        running_sum +=temp;
     }
     average_temp = running_sum/temps.size();
     cout<<average_temp <<endl;
      }


#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<double> values{22,78,98,-34,-1,90,4,3,21,9};

for(auto value :values){
    if(value ==-1){
        break;
    }
    else if (value ==-34){
        continue;
    }
    else{
        cout<< value <<endl;
    }
}}






===> Function
main is a function which excutes .
one can call a function as many times as he wants.
all function must be call from main function.

#include<bits/stdc++.h>
using namespace std;

const double pi{3.1456};

double radius(){
    cout<< "pzz enter radius "<<endl;
    cin >> radius;
return radius;
}

double area_circle(){
return pi * radius() * radius();
}
double area_cylinder(){
    double height;
    cout<< "pzz Enter height"<<endl;
    cin>> height ;
return pi*radius() * radius() * height;
}

int main(){
    area_circle();
    area-cylinder();
return 0;
}



#include <bits/stdc++.h>

using namespace std;

int sum(int num1,int num2){
int sum = num1+num2;
return sum;

}

int main(){
    int a =3;
    int b=4;
    cout<< sum(a,b)<<endl;
    
}


#include <bits/stdc++.h>

using namespace std;

void print(int num){
cout<< num <<endl;
return ;
}

int sum(int num1,int num2){
    print (num1);
    print(num2);
int sum = num1+num2;
return sum;

}

int main(){
    int a =3;
    int b=4;
    cout<< sum(a,b)<<endl;
return 0;
}




====>>>String 

It is  a data type.
which store string of charater.
ex:- string str = "Himansh";


#include <bits/stdc++.h>

using namespace std;
int main(){
    string str = "abcd";
    cout<< str <<endl;
    str.clear();

    if(str.empty()){
        cout<< "string is empty "<<endl;
    }
    else {
        cout<< " string is not empty"<< endl;
    }
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    string str ="abcdFUCKefgh";
    cout<< str<<endl;
    str.erase(4,4);
    cout<< str<<endl;

}


#include <bits/stdc++.h>

using namespace std;
int main(){
    string str= "HimanshMishra";
    cout<< str.find("mishra")<< endl;
    cout<<  str.find("Mishra") <<endl;
return 0;
}


// USE OF ASSCAII TABLE 

#include <bits/stdc++.h>

using namespace std;
int main(){
    string str = "assddgfhjfkldhlsjkskjkkdjla";
    for(int i(0);i<=str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -=32;
        }
    }
    cout<< str ;
    cout<< endl;
    for(int i(0);i<=str.size();i++){
        if(str[i]>='A' &&str[i]<='Z')
            str[i] +=32;
    }
    cout<< str;
}





#include <bits/stdc++.h>

using namespace std;
int main(){
    string s = "himansh mishra";

    transform(s.begin(), s.end(), s.begin() ,::toupper);

    cout<< "CAPITAL:- "<< s<<endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout<< "lower case:- "<< s <<endl;
}



#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
            //method 1
  /* string s ;
    cin>> s;
    int n =s.size();

    for(int i(0);i<=(n-1);i++){
        for(int j(i+1);j<=n;j++){
            if(s[i]<s[j]){
b                 int temp = s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    cout<< s <<endl; */

//method 2

    string s;
    cin>> s;

    sort(s.begin(), s.end(), greater<int>());

    cout<< s<<endl;


}
}



#include <bits/stdc++.h>

using namespace std;
int main(){
    string s = "himanshmishra";

    int ferq[26];
    for(int i(0);i<26;i++){
        ferq[i]=0;
    }

    for(int i(0);i<s.size();i++){
        ferq[s[i]-'a']++;
    }
    char ans ='a';
    int max_ferq = 0;
    for(int i(0);i<26;i++){
            if(ferq[i]> max_ferq){
                max_ferq = ferq[i];
                ans = i +'a';
            }
    }
    cout<< ans << " "<< max_ferq<<endl;
}


#include <bits/stdc++.h>
using namespace std;

int main(){
	    int k ,n,count(0),maxcount(0);
	    string s;
	    cin>> k>>n>>s;
	    for(int i(0);i<k;i++){
	        if(s[i]=='*'){
	            count++;
	            if(count>=maxcount){
	                maxcount = count;
	            }
	        }else{
	            count =0;
	        }
	    }
	    if(maxcount >=n){
	        cout<< "YES"<<endl;
	    }
	    else{
	        cout<< "NO"<<endl;
	    }

return 0;
}

==>Pointers

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x= 5;
    int *p_x =&x;
    cout<< "address of x: "<< &x<< endl;
    cout<< "value of x: "<< *p_x<< endl;
    cout<< "whats inside a pointer: "<< p_x<<endl;
    cout<< "add by 1: " << p_x+1<<endl;

return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
int *p1{nullptr};
double *p2{nullptr};
long long *p3{nullptr};
vector <string> *p4{nullptr};
char *p5{nullptr};


cout<< "The size of p1 :-" <<sizeof p1<<endl;
cout<< "The size of p2 :- "<< sizeof p2<<endl;
cout<< "the size of p3 :-"<< sizeof p3<<endl;
cout<< "the size of p4 :- "<< sizeof p4 <<endl;
cout<< "the size of p5 :-"<< sizeof p5 << endl;

cout<< "the value of p1:- "<< p1<<endl;
cout<< "the value of p2:- "<< p2<<endl;
cout<< "the value of p3:- "<< p3<<endl;
cout<< "the value of p4:- "<< p4<<endl;
cout<< "the value of p5:- "<< p5<<endl;

return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main(){
    int a= 10;
    int *prt =&a;
    cout<<prt<<endl;
    prt++;
    cout<<prt<<endl;
}


#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch ='a';
    char *pt =&ch;
    cout<< pt<<endl;
    pt++;
    cout<<pt<<endl;
}



#include<bits/stdc++.h>
using namespace std;
void sawp (int*a,int*b){
    int temp= *a;
    *a= *b;
    *b=temp;
}
int main(){
    int a=2;
    int b=4;
    sawp(&a,&b);
    cout<< a<< " "<< b<< endl;
}


#include<bits/stdc++.h>
using namespace std;
int add(int *a,int *b){
    int c= *a+ *b;
return c;
}
int sub(int *a,int *b){
    int c = *a- *b;

return abs(c);
}
int main(){
    int a(0),b(0);
    cin >> a>>b;
    cout<< add(&a,&b)<<endl;
    cout<< sub(&a,&b)<< endl;
return 0;
}


#include<bits/stdc++.h>
using namespace std;

void double_value(int *int_ptr){
 *int_ptr *= 2;
}
int main(){
    int value =10;
    int *int_pont ={nullptr};
    cout<< "value : " << value<<endl;


    double_value(&value);
    cout<< "value : "<<value<<endl;

    cout<< "-----------------------"<<endl;
    int_pont = (&value);
    double_value(int_pont);
    cout<< "Value : "<<value<<endl;


return 0;
}

   

====>>Bit masking 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x= 1, y=2;
    if(x&y)
        cout<< "Result of x&y is 1 "<<endl;
    if(x&&y)
        cout<< "Result if x&&y is 1 "<<endl;

return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
// finding even /odd number by bit operators
    int t ; cin>> t;
    while(t--){
        int n; cin>> n;
    if(n&1)
        cout<< "n is odd"<< endl;
    else
        cout<< "n is even"<< endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int getbit(int n,int pos){
    return ((n&(1<<pos))!=0);
}

int setbit(int n,int pos){
    return (n|(1<<pos));
}

int clearbit(int n,int pos){
    int mask = ~(1<<pos);
    return(n&mask);
}
int updatebit(int n,int pos,int value){
    int mask = ~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}

int main(){
    cout<<getbit(5,1)<<endl;
    cout<<setbit(5,1)<<endl;
    cout<< clearbit(5,2)<<endl;
    cout<<updatebit(5,1,1)<<endl;
   return 0;
 
} 









===>Algorithm{sileve}


#include <bits/stdc++.h>
using namespace std;

void prime_selive(int n){
    int prime[100]={0};
    for(int i(2);i<=n;i++){
        if(prime[i]==0){
            for(int j(i*i);j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i(2);i<=n;i++){
        if(prime[i]==0){
            cout<< i<< " ";
        }
    }cout<<endl;
}
int main(){
    int n ;
    cin>> n;
    prime_selive(n);
return 0;
}




#include <bits/stdc++.h>
using namespace std;

void prime_factors(int n){
    int spf[100] ={0};
    for(int i(2);i<=n;i++){
        spf[i]=i;
    }
    for(int i(2);i<=n;i++){
        if (spf [i]==i){
            for(int j(i*i);j<=n;j+=i){
                if (spf [j]== j){
                    spf [j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<< spf[n]<< " ";
        n= n/spf[n];
    }
}
int main(){
    int n;
    cin>> n;
    prime_factors(n);

return 0;
}



===>Inclusion - Exclustion Principle


#include<bits/stdc++.h>
using namespace std;
int divisible(int n,int a,int b){
    int c1 = n/a;
    int c2= n/b;
    int c3 =n/(a*b);

return c1+c2-c3;
}
int main(){
    int n,a,b;
      cin>> n >> a>>b;
    cout<< divisible(n,a,b);
return 0;
}


=====>>>Recursion


#include<bits/stdc++.h>
using namespace std;
void func(int n){
if(n==0){
    return ;
    }
cout<< n<<endl;
func(n-1);
}
int main(){
    func(5);
return 0;
}



#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=sum(n-1);
    return n+prevsum;
}
int main(){
    int n;
    cin>>n;
    cout<< sum(n)<<endl;
return 0;
}




#include<bits/stdc++.h>
using namespace std;
int expo(int n,int p){
    if(p==0){
        return 1;
    }
    int prepower =expo(n,p-1);
    return n*prepower;

}
int main(){
    int n,p;
    cin>>n>>p;
    cout<< expo(n,p)<<endl;
return 0;
}


 

#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int prefactorial= factorial(n-1);
    return n*prefactorial;

}

int main(){
    int n;
    cin>>n;
    cout<< factorial(n)<<endl;

return 0;
}



#include<bits/stdc++.h>
using namespace std;
long long fabo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fabo(n-1)+fabo(n-2);

}
int main(){
    int n(0);
    cin>> n;
    cout<< fabo(n)<<endl;
}


#include<bits/stdc++.h>

using namespace std;
vector <int>v(6);
int fibo(int n){
    if(n==1|| n==2) return v[n]=n-1;

    int ans = fibo(n-1)+fibo(n-2);
    v[n]= ans;
    return ans;
}

int main(){
    fibo(6);
    for(int i(1);i<=6;i++){
        cout<<v[i]<< " ";
    }
return 0;
}



#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
if(n==1){
    return true;
}
  bool restarr = sorted(arr+1,n-1);
  return (arr[0]<arr[1] && restarr);
}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    cout<<sorted(arr,9)<<endl;
}



#include<bits/stdc++.h>
using namespace std;

int dec(int n){
if(n==1){
    cout<<"1"<<endl;
    return 891;
}
cout<<n<<endl;
dec(n-1);
}

int inc(int n){
if(n==1){
    cout<<"1"<<endl;
    return 891 ;
}
    inc(n-1);
    cout<< n<<endl;
}

int main(){
    int n;
    cin>> n;
dec(n);
inc(n);

return 0;
}


#include<bits/stdc++.h>
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];

}
int main(){
    reverse("himansh");


return 0;
}

#include<bits/stdc++.h>
using namespace std;
void replacepi(string s){
    if(s.length()==0){
        return ;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}
int main(){
    replacepi("pippppiiiiipi");
return 0;
}



#include<iostream>
using namespace std;

void toh(int n, int t1id, int t2id, int t3id){
    if(n==0){
        return;
    }
    // write your code here

    toh(n-1,t1id,t3id,t2id);
    cout<<n<<"["<<t1id<<"->"<<t2id<<"]"<<endl;
    toh(n-1,t3id,t2id,t1id);

  }
int  main() {

    int n;cin>>n;
    int n1,n2,n3;cin>>n1>>n2>>n3;
    toh(n, n1, n2, n3);
  }


#include<bits/stdc++.h>
using namespace std;
int foc(int arr[],int n,int i,int key){
if(i==n){
    return -1;
}
if(arr[i]==key){
    return i;
}
return foc(arr,n,i+1,key);
}
int main(){
int arr[]={1,9,3,4,5,6,7,8,2};
cout<< foc(arr,9,0,2)<<endl;

return 0;
}



#include<bits/stdc++.h>
using namespace std;
void permutation(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    for(int i(0);i<s.length();i++){
        char ch =s[i];
        string ros = s.substr(0,i) + s.substr(i+1);
        permutation (ros , ans+ch);
    }

}
int main(){
    permutation("ABC","");  
}



#include<bits/stdc++.h>
using namespace std;
int sum (int n,int a[]){
if(n<0) {
return 0;
}
return sum(n-1,a) +a[n];
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i(0);i<n;i++){
        cin>>a[i];
    }

    cout<< sum(n-1,a);

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int digitsum(int n){
    if(n==0) return 0;
    return digitsum(n/10) +(n%10);
}

int main(){
    int n;
    cin>>n;
    cout<< digitsum(n)<<endl;
    return 0;
}



#include <iostream>
using namespace std;

void display(int arr[], int idx, int n){
    // write your code here
    if(idx==n){
        return;
    }
    display(arr,idx+1,n);
    cout<<arr[idx]<<endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);
}


#include <iostream>
using namespace std;
int max(int arr[], int idx,int n){
    if(idx== n-1){
        return arr[idx];
    }
    int misa = max(arr,idx+1,n);
    if(misa >arr[idx]){
        return misa;
    }
    else{
        return arr[idx];
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0,n);
    cout << p << endl;
}



#include<iostream>
using namespace std;

int firstIndex(int arr[], int idx, int x, int n){
    // write your code here
    if(idx== n-1){
        return -1;
    }
    if (arr[idx]==x){
        return idx;
    }
    else{
        int fosa= firstIndex(arr,idx+1,x,n);
        return fosa;
    }
    
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = firstIndex(arr, 0, d, n);
    cout << p << endl;
}


#include <iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n){
    if(idx==n-1){
        return -1;
    }
    int losa = lastIndex(arr,idx+1,x,n);
    if(losa==-1){
        if(arr[idx]==x){
            return idx;
        }
        else{
            return -1;
        }
    }
    else{
        return losa;
    }
}
int main(){
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = lastIndex(arr, 0, d, n);
    cout << p << endl;
}





#include<bits/stdc++.h>
using namespace std ;
bool checkSorted(int arr[], int index,int n){
    if (index >= n){
        return true ;
    }
    if(arr[index]<arr[index-1]){
        return false ;
    }
    return checkSorted(arr , index+1,n);
}
int main (){
    cout<< "Enter the size of array" <<endl;
    int n ;
    cin>>n;
    int arr[n];
    cout<< "Enter elements "<<endl;
    for(int i (0);i<n;i++){
        cin>>arr[i];
    }
    bool answer =checkSorted(arr ,0,n);

    if(answer){
        cout<< "Arr is sorted"<<endl;
    }
    else{
        cout<< "Array is not sorted"<<endl;
    }
return 0;
}





 





======>>>>> OOPs (object orented programming)



#include <bits/stdc++.h>
using namespace std;
class employee{
public:
    string name ;
    string work;
    int age;
    void intreduce_yourself(){
        cout<< "Name :- "<< name<<endl;
        cout<< "work :- "<< work<<endl;
        cout<< "age:- "<< age<<endl;
    }
};
int main() {
    employee employee1;
    employee1.name="Himansh mishra";
    employee1.work = "Student ";
       employee1.age =21;
    employee1.intreduce_yourself();

    employee employee2;
    employee2.name = "Himansh mishra the Great";
    employee2.work = "Scientist at his own lab";
    employee2.age = 21;
    employee2.intreduce_yourself();

return 0;
}


#include<bits/stdc++.h>
using namespace std;
class employee{
private:
    string Name ;
    string Company;
    int Age;
public:
    void setName(string name){//setter
    Name= name;
    }
    string getName(){//getter
    return Name;
    }
    void setCompany(string company){
    Company= company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
    Age= age;
    }
    int getAge(){
    return Age;
    }
    employee(string name,string company,int age){
    Name = name;
    Company= company;
    Age =age;
    }
    void introduce_yourshelf(){
        cout<< "Name : "<<Name<<endl;
        cout<< "company : "<<Company<<endl;
        cout<< "Age : "<<Age<<endl;
    cout<< "Name : "<<Name<<endl;
    cout<< "Company : "<<Company<<endl;
    cout<< "Age : "<<Age<<endl;
    }

};
int main(){
    employee employee1 = employee("Himansh mishra","Koi nahi",21);
    employee1.introduce_yourshelf();
    employee employee2 = employee("Abhay Gupta", "Google",21);
    employee2.introduce_yourshelf();
    employee employee3 = employee("Harsh ", "Facebook",20);
    employee3.introduce_yourshelf();
    employee employee4 = employee("Shantanu", "Delhi police",21);
    employee4.introduce_yourshelf();
    employee1.setAge(22);
    employee2.setAge(22);
    employee3.setAge(21);
    employee4.setAge(22);
    cout<<employee1.getName()<< " is "<<employee1.getAge() << " years old"<<endl;
    cout<<employee2.getName()<< " is "<<employee2.getAge()<< " years old "<<endl;
    cout<<employee3.getName()<< " is "<<employee3.getAge()<< " years old "<<endl;
    cout<<employee4.getName()<< " is "<<employee4.getAge()<< " years old "<<endl;
}


#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};
class employee{
private:
    string Name ;
    string Company;
    int Age;
public:
    void setName(string name){//setter
    Name= name;
    }
    string getName(){//getter
    return Name;
    }
    void setCompany(string company){
    Company= company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
    Age= age;
    }
    int getAge(){
    return Age;
    }
    employee(string name,string company,int age){
    Name = name;
    Company= company;
    Age =age;
    }
    void introduce_yourshelf(){
        cout<< "Name : "<<Name<<endl;
        cout<< "company : "<<Company<<endl;
        cout<< "Age : "<<Age<<endl;
    cout<< "Name : "<<Name<<endl;
    cout<< "Company : "<<Company<<endl;
    cout<< "Age : "<<Age<<endl;
    }
    void AskForPromotion(){
    if(Age>=20)
        cout<< Name<< " congrats you Got promoted"<<endl;
    else
        cout<< Name<< " Sorry No promotion for you"<<endl;

    }

};
int main(){
    employee employee1 = employee("Himansh mishra","louda lahsun",21);
    employee1.introduce_yourshelf();
    employee employee2 = employee("Abhay Gupta", "louda lahsun",21);
    employee2.introduce_yourshelf();
    employee employee3 = employee("Harsh ", "louda lahsun",20);
    employee3.introduce_yourshelf();
    employee employee4 = employee("Shantanu", "sarkari lauda lahsun",21);
    employee4.introduce_yourshelf();
    employee1.setAge(22);
    employee2.setAge(22);
    employee3.setAge(21);
    employee4.setAge(22);
    cout<<employee1.getName()<< " is "<<employee1.getAge() << " years old "<<endl;
    cout<<employee2.getName()<< " is "<<employee2.getAge()<< " years old "<<endl;
    cout<<employee3.getName()<< " is "<<employee3.getAge()<< " years old "<<endl;
    cout<<employee4.getName()<< " is "<<employee4.getAge()<< " years old "<<endl;
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    employee3.AskForPromotion();
    employee4.AskForPromotion();
}

















































































============STL 
============STL
============STL



===>>DEQUE 
#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    d.push_front(2);
    d.push_front(1);
    for(int i:d){
        cout<< i<< " ";
    }cout<<endl;
    d.pop_back();
    d.pop_front();
    for(int i:d){
        cout<< i<< " ";
    }cout<<endl;
    
    cout<< "Element at zeroth position : "<< d.at(0)<<endl;
    cout<< "Element at the front : "<< d.front()<<endl;
    cout<< "Element at the back : "<< d.back()<<endl;
    cout<< "IS it empty : "<< d.empty()<<endl;

    cout<< "Size before erasing : "<< d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<< "Size after erasing : "<<d.size()<<endl;


return 0;
}


====>> List 


#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    list<int>n (5,100);

    for(int i:n){
        cout<< i<< " ";
    }cout<<endl;

    l.push_back(2);
    l.push_back(3);
    l.push_front(1);
    for(int i:l){
        cout<< i<< " ";
    }cout<<endl;

    cout<< "before erase : "<<endl;
    for(int i:l){
        cout<<i<< " ";   }cout<< endl;
    l.erase(l.begin());
    cout<< "after erase : "<<endl;
    for(int i:l){
        cout<< i<< " ";
    }cout<< endl;
return 0;
}



===>> Stack

#include<bits/stdc++.h>
using namespace std;
void bataRaiBaba (stack<string>s){
    if(s.empty()){
        return;
    }
    cout<< s.top()<<endl;
    s.pop();
    bataRaiBaba(s);
}
int main(){
    stack<string> s;

    s.push("himansh");
    s.push("Abhay");
    s.push("Shantanu");
    s.push("mohit");
    s.push("Harsh");
    s.push("Himanshu");
    while(!s.empty()){
        cout<<"Element at the top is : "<<s.top()<<endl;
        s.pop();
    }
    s.push("himansh");
    s.push("Abhay");
    s.push("Shantanu");
    s.push("mohit");
    s.push("Harsh");
    s.push("Himanshu");


    bataRaiBaba(s);

return 0;
}



===>> Queue

#include<bits/stdc++.h>
using namespace std;

void bataRaiBaba (queue<string>s){
    if(s.empty()){
        return;
    }
    cout<< "Element jo aa sakta hai : "<< s.front()<<endl;
    s.pop();
    bataRaiBaba(s);
}
int main(){
    queue<string> s;
    s.push("Himansh");
    s.push("Mishra");
    s.push("The");
    s.push("Great");
    s.push("kya hai?");
    bataRaiBaba(s);
    cout<< s.size()<< " is the size of queue"<<endl;
return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main(){
    //max_priority_queue
    priority_queue<int> maxi;
    //mini_prioroty_queue
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(10);
    maxi.push(50);
    maxi.push(100);
    maxi.push(1);
    maxi.push(33);

    mini.push(10);
    mini.push(50);
    mini.push(100);
    mini.push(1);
    mini.push(33);

    int n= maxi.size();
    for(int i(0);i<n;i++){
        cout<< "Element is : "<<maxi.top()<< endl;
        maxi.pop();
    }
    cout<<endl;
cout<< "---------------"<<endl;
cout<<endl;
    int n1= mini.size();
    for(int i(0);i<n1;i++){
        cout<< "Element is : "<<mini.top()<<endl;
        mini.pop();
    }
return 0;
}



====>>Set 

#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(8);
    s.insert(10);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(3);
    s.insert(5);

    for(auto i:s){
        cout<< i<<endl;
    }

cout<<endl;
cout<< "-------"<<endl;
cout<<endl;

    set<int>:: iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }
return 0;
}

===>>pair



====>>Nexting in STL
====>> Nexting in STL

==>vector of pair
#include<bits/stdc++.h>
using namespace std;

void printvec (vector<pair<int,int> >&v){
cout<< "Size :  "<< v.size()<<endl;

for(int i(0);i<v.size();i++){
    cout<<v[i].first << " "<<v[i].second <<endl;
}
}
int main(){
    vector<pair<int,int>> v;
    printvec(v);

    int n ;
    cin>>n;
    for(int i(0);i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        //v.push_back(make_pair(x,y))
    }
    printvec(v);
return 0;
}


==>Array of vectors
#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int>&v){
cout<< "Size : "<< v.size()<<endl;
for(int i(0);i<v.size();i++){
    cout<<v[i]<< " ";
}cout<<endl;
}
int main(){
    int N;
    cin>> N;
    vector<int>v[N];
    for(int i(0);i<N;i++){
    int n;
    cin>>n;
    for(int j(0);j<n;j++){
        int x;
        cin>>x;
        v[i].push_back(x);
    }
}
for(int i(0);i<N;i++){
    printvec(v[i]);
}
}

===>>>Vectors of Vectors

#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>&v){
cout<< "Size : "<< v.size()<<endl;
for(int i(0);i<v.size();i++){
    cout<<v[i]<< " ";
}cout<<endl;
}
int main(){
    int N;
    cin>> N;
    vector<vector<int>>v;
    for(int i(0);i<N;i++){
    int n;
    cin>>n;
    vector<int>temp;
    for(int j(0);j<n;j++){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
}
for(int i(0);i<N;i++){
    printvec(v[i]);
}
}

====>> iterators 

#include<bits/stdc++.h>
using namespace std ;

int  main(){

vector<int>v= {2,3,4,5,67};
for(int i(0);i<v.size();i++){
    cout<< v[i]<< " ";
}cout<<endl;

vector<int> ::iterator hm;
for(hm =v.begin();hm !=v.end();hm++){
    cout<< (*hm)<<endl;
}
return 0;
}



#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v= {2,3,4,5,6,7,89};
    for(int i(0);i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<< "______---"<<endl;

    for(int value :v){
        cout<< value << " ";
    }
    cout<<endl;

    for(auto  value :v){
        cout<< value << " ";
    }cout<<endl;

return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<pair<char,char>> vp={{'H','i'},{'m','a'},{'n','s'}};
    for( auto &value:vp){
        cout<< value.first <<" "<<value.second<<endl;
    }
return 0;
}


====>>> Maps 



#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[1]= "Him";
    m[5]="ans";
    m[10]= "sMi";
    m[9]= "sh";
    m.insert({2,"ra"});

    map<int,string> ::iterator it ;
    for( it=m.begin();it!=m.end();it++){
        cout<< (it->first)  <<" "<< (it->second)<<endl;
    }
cout<< "-------"<<endl;
    for(auto it= m.begin();it!=m.end();it++){
        cout<<(it->first)<< " "<<  (it->second)<<endl;
    }
cout<< "-------"<<endl;;;
for(auto &pr:m){
    cout<< pr.first << " "<<pr.second<<endl;
}
}
//map shoud have unique key
//time comprexity O(nlogn)


#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    int  n;
    cin>>n;
    for(int i(0);i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }

    for(auto pr: m){
        cout<<pr.first<<"  "<< pr.second<<endl;
    }


return 0;
}




 #include<bits/stdc++.h>
using namespace std;

int main() {
	int q, type,mark; cin >> q;
    map<string,int> clas; string name;
	while(q--){
		cin >> type >> name;
		if (type == 1){
			cin >> mark;
			clas[name] += mark;
		}
		else if (type == 2)
			clas.erase(name);
		else
			cout << clas[name] << "\n";
	}
	return 0;
}



==>Unorderd Maps


 #include<bits/stdc++.h>
using namespace std;

int main() {
	unordered_map<int,string>um;
	um[1]="abc";
	um[3]= "cdc";
	um[6]="him";
	um[9] ="cde";

	auto it = um.find(7);
	 if(it!=um.end()){
        um.erase(it);
	 }


	return 0;
}



===>>Heaps 


#include <iostream>
using namespace std;
void max_heap(int *a, int m, int n) {
   int j, t;
   t = a[m];
   j = 2 * m;
   while (j <= n) {
      if (j < n && a[j+1] > a[j])
         j = j + 1;
      if (t > a[j])
         break;
      else if (t <= a[j]) {
         a[j / 2] = a[j];
         j = 2 * j;
      }
   }
   a[j/2] = t;
   return;
}
void build_maxheap(int *a,int n) {
   int k;
   for(k = n/2; k >= 1; k--) {
      max_heap(a,k,n);
   }
}
int main() {
   int n, i;
   cout<<"enter no of elements of array\n";
   cin>>n;
   int a[30];
   for (i = 1; i <= n; i++) {
      cout<<"enter elements"<<" "<<(i)<<endl;
      cin>>a[i];
   }
   build_maxheap(a,n);
   cout<<"Max Heap\n";
   for (i = 1; i <= n; i++) {
      cout<<a[i]<<endl;
   }
}