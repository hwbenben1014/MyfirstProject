#include<iostream>
using namespace std;
#include<string>
class MYtest
{
public:
void myprint(int* age,char* name)
{
    age = &m_age;
    name = &m_name;
}

private:
int m_age;
char m_name;
};

int main()
{
    cout<<"Hello CPP\n"<<endl;
    return 0;
}