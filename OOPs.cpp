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
