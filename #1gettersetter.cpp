//Write a getter and setter program in C++
#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    void setSalary(int s) {
    salary = s; }
    int getSalary(){
        return(salary);
    }
};
int main(){
    Employee obj;
    obj.setSalary(50000);
    cout<<obj.getSalary()<<endl;
    return 0;
}
