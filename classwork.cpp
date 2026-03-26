#include<iostream>
using namespace std;
class Academic
{
    protected:
    int marks;
    Academic(int marks)
    {
        this->marks=marks;
    }
};
class Sports
{
    protected:
    int score;
    Sports(int score)
    {
        this->score=score;
    }
};
class Result:public Academic,public Sports{
    public:
    Result(int marks,int score):Academic(marks),Sports(score)
    {
    }
    void printscore()
    {
        cout<<"marks is "<<marks<<endl;
        cout<<"score is "<<score<<endl;
    }
};
int main()
{
    Result r1(16,16);
    r1.printscore();
    return 0;
}