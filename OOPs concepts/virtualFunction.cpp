//main code starts from line 8 to 54 where virtual function implementation is done
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    public:
    string name;
    int age;
    virtual void putdata(){
        cout<<name<<" "<<age<<" ";
    }
    virtual void getdata() = 0;
};
class Professor : public Person{
    static int cur_id;
    int publications;
    int id;
    public:
        void getdata(){
            cur_id++;
            cin>>this->name>>this->age>>this->publications;
            this->id=cur_id;
        }
        void putdata(){
            Person::putdata();
            cout<<this->publications<<" "<<this->id<<endl;
        }
};
int Professor::cur_id=0;
class Student : public Person{
    static int cur_id;
    int marks[6];
    int id;
    public: 
        void getdata(){
            cur_id++;
            cin>>this->name>>this->age;
            for(int i=0; i<6; i++){
                cin>>this->marks[i];
            }
            this->id=cur_id; 
        }
        void putdata(){
            Person::putdata();
            int s=0;
            for(auto u:marks){
                s+=u;
            }
            cout<<s<<" "<<this->id<<endl;
        }    
};
int Student::cur_id=0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

