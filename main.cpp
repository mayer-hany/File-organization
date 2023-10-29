#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string name;
    int id;
    char grade;
ofstream student;
student.open ("student.txt");
getline(cin,name);
cin>>id>>grade;
if(!student.is_open()){
    cout<<"Error , file not found";
}
else
{
    student<<"student name is "<< name <<"\n"<<"student id is "<<id <<"\n"<<"student grade is "<<grade;
}
student.close();

    return 0;
}
