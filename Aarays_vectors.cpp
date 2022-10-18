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
