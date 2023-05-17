#include <iostream>

using namespace std;

struct student
{
    string name;
    int age;
    double GPA;
    double programming_score;
    string School_name;
};

void print( string* word,  int* num,  double* num1,  double* num2, string* word1)
{
    cout<<word<<" "<<num<<" "<<num1<<" "<<word1<<endl;
}

int main()
{
    student ASTU[5];
    for(int i=0; i<5; i++)
    {
        cin>>ASTU[i].name>>ASTU[i].age>>ASTU[i].GPA>>ASTU[i].programming_score>>ASTU[i].School_name;
    }
    for (int i=0; i<5; i++)
    {
        print(&ASTU[i].name, &ASTU[i].age, &ASTU[i].GPA,&ASTU[i].programming_score, &ASTU[i].School_name);
    }

    return 0;
}