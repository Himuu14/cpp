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
