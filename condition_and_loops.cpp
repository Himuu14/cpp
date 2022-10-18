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
