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
