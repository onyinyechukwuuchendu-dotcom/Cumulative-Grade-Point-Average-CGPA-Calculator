#include <iostream>
using namespace std;
int main()
{    
    string course;
    int i,no_of_courses;
    double score,totalscorepercourse,sum=0;
    int unit_load;
    double total_unit,GPA;
    int point;

    cout<<"Enter total possible units: ";
    cin>>total_unit;
    cout<<"Enter number of courses being offered: ";
    cin>>no_of_courses;

    for(i=0; i<no_of_courses; i++){
        cout<<"Enter name of course: ";
        cin>>course;
        cout<<"Enter score: ";
        cin>>score;
        if (score >= 70)
            {cout << "A"<<endl;
            point=5;}
        else if (score >= 60)
            {cout << "B"<<endl;
            point=4;}
        else if (score >= 50)
            {cout << "C"<<endl;
            point=3;}
        else if (score >= 45)
            {cout << "D"<<endl;
            point=2;}
        else if (score >= 40)
            {cout << "E"<<endl;
            point=1;}
        else
            {cout << "F"<<endl;
            point=0;};
        cout<<"Enter unitload: ";
        cin>>unit_load;
        totalscorepercourse=point*unit_load;
        sum+=totalscorepercourse;   
    }{
        GPA=sum/total_unit;
        cout<<GPA; 
    }
		
	return 0;
}
