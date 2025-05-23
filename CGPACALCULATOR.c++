#include<iostream> 
using namespace std; 
 
int main() { 
    int numSubjects; 
    float totalCredits = 0, totalGradePoints = 0; 
 
    cout << "Enter the number of subjects: "; 
    cin >> numSubjects; 
 
    for (int i = 1; i <= numSubjects; ++i) { 
        float grade, credits; 
        cout << "Enter the grade points for subject " << i << ": "; 
        cin >> grade; 
        cout << "Enter the credit hours for subject " << i << ": "; 
        cin >> credits; 
 
        // Calculate total grade points and credits 
        totalGradePoints += grade * credits; 
        totalCredits += credits; 
    } 
 
    // Calculate CGPA 
    float cgpa = totalGradePoints / totalCredits; 
 
    cout << "Your CGPA is: " << cgpa << endl; 
 
    return 0; 
}
