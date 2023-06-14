#include<iostream>
using namespace std ;

class Semester{
    virtual void Semester1()=0;
};
class CS:Semester
{
    private:
    string Name;
    int No;
    float Grade;

    public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setNo(int no)
    {
        No = no;
    }
    int getNo()
    {
        return No;
    }
    void setGrade(float grade)
    {
        Grade = grade;
    }
    float getGrade()
    {
        return Grade;
    }

    void report()
    {
        cout << "Name : " << Name <<endl;
        cout << "No : " << No <<endl;
        cout << "Grade : " << Grade <<endl;
    }
    void Semester1()
    {
        if(Grade>=3.5)
        {
            cout << "Pass" <<endl;
        }
        else{cout << "Get out!!!" << endl;}
    }

    CS(string name,int no,float grade)
    {
        Name = name;
        No = no;
        Grade = grade;
    }


};
int main()
{
   CS ra = CS("Four",24,4.00);
//    ra.Name = "Four";
//    ra.No = 24;
//    ra.Grade =4.00;
   
//    ra.report();

//    ra.setNo(22);
//    cout<<ra.getName()<<" is number "<<ra.getNo()<<endl;
    ra.Semester1();

}
