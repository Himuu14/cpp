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


===>Multi sets


#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t[]) {cerr << t;}
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void printarr(ll arr[],ll n){
    for(ll i=0;i<n;i++){
        cerr<<arr[i]<<" ";
    }
    cerr<<"\n";
}
void printvec(vector<pair<int,int>>&vp){
    cout<< "Size "<< vp.size()<<"\n";
    for(int i(0);i<vp.size();i++){
        cout<< vp[i].first<<" "<< vp[i].second<<"\n";
    }
} 

void solve(){
    int n, k;
    cin>> n>> k;
    multiset<ll> bags;
    for(int i(0);i<n;i++){
        ll candy_ct (0);
        cin>> candy_ct;
        bags.insert(candy_ct);
    }
    ll total_candy(0);
    for(int i(0);i<k;i++){
        auto last_it = (--bags.end());
        ll candy_ct = (*last_it);
        total_candy +=candy_ct;
        bags.erase(last_it);
        bags.insert(candy_ct /2);
    }
    cout<< total_candy <<endl;
    
}

int main() {
    fastio();
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	freopen("Error.txt", "w", stderr);
#endif
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++){
        // cout<<"Case #"<<i<<": ";
        solve();
    }
 
}



void solve(){
    int n;
    cin>> n;
    set<string>st;
    while(n--){
        string temp;
        cin>>temp;
        st.insert(temp);
    }
    for(auto itr=st.begin(); itr!=st.end();itr++){
        cout<<(*itr) <<endl;
    }
}
int main() {
    fastio();
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("Error.txt", "w", stderr);
#endif
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++){
        // cout<<"Case #"<<i<<": ";
        solve();
    }
 
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



void solve(){
   map<int ,string> m;
   m.insert({4, "himansh"});
   m.insert({2,"Mishra"});
   m[3]= "the";
   m[10]= "Great";

   map<int, string> ::iterator it;
   for(it = m.begin();it!=m.end(); it++){
       cout<< (*it).first<<" "<< (*it).second<< "\n";
   }

}





void solve(){
    int n;
    cin>> n;
 map <string ,int> m;
 for(int i(0);i<n;i++){
     string s;
     cin>>s;
     m[s]++;
 }
 for(auto pr:m){
     cout<< pr.first<<" "<<pr.second<<endl;
 }
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



void solve(){
    int n;
    cin>> n;
    unordered_map<string, int> um;
    for(int i(0);i<n;i++){
        string s;
        cin>>s;
        um[s]++;
    }
    for(auto pr:um){
        cout<< pr.first<<" "<< pr.second<<endl;
   }
}


// multimap<string,int> mm;


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




===>> vs code compititive programing Help

#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t[]) {cerr << t;}
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void printarr(ll arr[],ll n){
    for(ll i=0;i<n;i++){
        cerr<<arr[i]<<" ";
    }
    cerr<<"\n";
}
void printvec(vector<pair<int,int>>&vp){
    cout<< "Size "<< vp.size()<<"\n";
    for(int i(0);i<vp.size();i++){
        cout<< vp[i].first<<" "<< vp[i].second<<"\n";
    }
} 

void solve(){
    
}

int main() {
    fastio();
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	freopen("Error.txt", "w", stderr);
#endif
    // ll t;
    // cin>>t;
    // for(int i=1;i<=t;i++){
    //     // cout<<"Case #"<<i<<": ";
    //     solve();
    // }
   solve();
 
}



===>>questions
void solve(){
    map<pair<string,string>, vector<int>>m;
    //INPUT
    string fn,ln;
    int n;
    cin>> fn>>ln>>n;
    for(int i(0);i<n;i++){
        int temp(0);
        cin>>temp;
        m[{fn,ln}].push_back(temp);
    }
    //OUTPUT
    for(auto &pr:m){
        cout<<pr.first.first<< " "<<pr.first.second<< " ";
        cout<<pr.second.size()<<endl;
        for(auto &elements:pr.second){
            cout<<elements << " ";
        }
        cout<<endl;
    }
}




void solve(){
    int n;
    cin>>n;
    map<int,vector<string>>m ;
    while(n--)
    {
    int marks;
    string s;
    cin>> s>> marks;
    m[marks].push_back(s);
    }

    for(auto it=m.rbegin();it!=m.rend();it++){
        sort(it->second.begin() , it->second.end());
        for(int j=0; j<it->second.size();j++){
             cout<<it->second[j]<< " "<<it->first <<endl;
        }
    }
    

}


====>>STACK 

void solve(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(19);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }    

}



===>Queue


void solve(){
    queue<string> Q;
    Q.push("Himansh");
    Q.push("Mishra");
    Q.push("The");
    Q.push("Great");
    while(!Q.empty()){
        cout<< Q.front()<< endl;
        Q.pop();
    }
}

