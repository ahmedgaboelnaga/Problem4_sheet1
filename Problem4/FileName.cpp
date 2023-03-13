#include<iostream>

using namespace std;

int main() 
{
    //Problem 4:Write  a C++to  read  a  student's  overall  degree  (out  of  100)  in  the  final  score  sheet. Calculate the percentage of success, then print his/her grade having:
    //“Excellent” for percentages >= 85%.
    //“Very Good” for percentages >= 75% and < 85%.
    //“Good” for percentages >= 65% and < 75%.
    //“Pass” for percentages >= 50% and < 65%.
    //“Fail” for percentages < 50%.

    double percentage;
    cout << "Enter student's overall degree (out of 100): ";
    cin >> percentage;


    if (percentage >= 85) 
    {
        cout << "Grade: Excellent" << endl;
    }
    else if (percentage >= 75 && percentage < 85) 
    {
        cout << "Grade: Very Good" << endl;
    }
    else if (percentage >= 65 && percentage < 75) 
    {
        cout << "Grade: Good" << endl;
    }
    else if (percentage >= 50 && percentage < 65) 
    {
        cout << "Grade: Pass" << endl;
    }
    else {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}