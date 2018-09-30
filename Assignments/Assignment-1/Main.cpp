/*
// Name: Joel Turbi
// Creation: 09/21/2017 >>>> Extended time 9/28/2017
// Version: Assignment #1
// Description: This program calculates the grade
// point average(GPA) of a student in a class that
// assigns ten(10) homeworks, five(5) quizzes, a
// midterm and final.
*************************************************/

#include <iostream>
#include <iomanip>
//#include <string>
using namespace std;


// Name: GetHomeworks()
// Parameter(s): grds: float array
// Return: void
// Description: This functions prompts the user to enter each homework grade. Furthermore, ensure
// that all grades entered are between 0 and 100 inclusively. If user enters an invalid grade for
// a homework, have the user re-enter it until it is valid.

void GetHomeworks(float grds[17])
{
    // for loop that displays the user to enter grades of homeworks and retrieves such grade from user.
    for (int i=0; i < 10; i++)
    {
        cout << "Enter grade of homework " << 1+i << ": ";
        cin >> grds[i];

        // while loop will keep asking user to enter homework grade until condition is met.
        while(grds[i] < 0 || grds[i] > 100)
        {
            cout << "Enter grade of homework " << 1+i << ": ";
            cin >> grds[i];
        }
    }

}

// Name: GetQuizzes()
// Parameter(s): grds: float array
// Return: void
// Description: This functions prompts the user to enter each quiz grade. Furthermore, ensure
// that all grades entered are between 0 and 100 inclusively. If user enters an invalid grade
// for a quiz, have the user re-enter it until it is valid.

void GetQuizzes(float grds[17])
{
    // for loop that displays the user to enter grades of quizzes and retrieves such grade from user.
    for (int i = 0; i < 5; i++) {
        cout << "Enter grade of quiz " << 1 + i << ": ";
        cin >> grds[i];

        // while loop will keep asking user to enter quiz grade until condition is met.
        while (grds[i] < 0 || grds[i] > 100) {
            cout << "Enter grade of quiz " << 1 + i << ": ";
            cin >> grds[i];
        }
    }
}

// Name: GetMidterm()
// Parameter(s): grds: float array
// Return: void
// Description: This functions prompts the user to enter the midterm grade. Furthermore, ensure
// that all grades entered are between 0 and 100 inclusively. If user enters an invalid grade
// for the midterm, have the user re-enter it until it is valid.

void GetMidterm(float grds[17])
{
    // for loop that displays the user to enter grade of midterm and retrieves such grade from user.
    for (int i=0; i < 1; i++)
    {
        cout << "Enter grade of midterm " << ": ";
        cin >> grds[i];

        // while loop will keep asking user to enter midterm grade until condition is met.
        while(grds[i] < 0 || grds[i] > 100)
        {
            cout << "Enter grade of midterm " << ": ";
            cin >> grds[i];
        }
    }
}

// Name: GetFinal()
// Parameter(s): grds: float array
// Return: void
// Description: This functions prompts the user to enter the final grade. Furthermore, ensure
// that all grades entered are between 0 and 100 inclusively. If user enters an invalid grade
// for the final, have the user re-enter it until it is valid.

void GetFinal(float grds[17])
{
    // for loop that displays the user to enter grade of final and retrieves such grade from user.
    for (int i=0; i < 1; i++)
    {
        cout << "Enter grade of final " << ": ";
        cin >> grds[i];
        // while loop will keep asking user to enter final grade until condition is met.
        while(grds[i] < 0 || grds[i] > 100)
        {
            cout << "Enter grade of final " << ": ";
            cin >> grds[i];
        }
    }
}

// Name: CalculateGPA()
// Parameter(s): grds: float array
// Return: float
// Description: This function calls GetHomework(), GetQuizzes(), GetMidterm() and GetFinal
// to retrieve the student's grades from the user. Afterwards, calculate the student's
// homework and quiz averages. Last, calculate and return the student's gpa; using the
// given formula to calculate gpa. gpa = (0.1*H+0.2*Q+0.3*M+0.4*F);

float CalculateGPA(float grds[17])
{
    // Call functions GetHomework,GetQuizzes,GetMidterm,GetFinal
    GetHomeworks(grds);
    GetQuizzes(grds);
    GetMidterm(grds);
    GetFinal(grds);

    // Initialized  H,Q,M,F equal to 0(zero)
    float H=0,Q=0,M=0,F=0;

    // for loop to get the sum of homeworks
    for(int i=0; i < 10; i++)
    {
        H +=grds[i];
    }

    // for loop to get sum of quizzes
    for(int i=0; i < 5;i++)
    {
        Q +=grds[i];
    }

    // for loop to assign the value of midterm to M
    for(int i=0; i < 1;i++)
    {
        M +=grds[i];
    }

    // for loo[ to assign the value of final to F
    for(int i=0; i < 1;i++)
    {
        F +=grds[i];
    }

    // Calculate gpa, before doing calculations; first take average of H and Q
    float gpa = (0.1*(H/10)+0.2*(Q/5)+0.3*M+0.4*F);

    // return value of gpa to global scope
    return gpa;
}

// Name: LetterGrade()
// Parameter(s): gpa:float
// Return: string
// Description: This function returns the letter grade associated with gpa based on the grading scale given.

float LetterGrade(float gpa)
{
    // if value of gpa is between 97 and 100 display A+
    if (gpa >= 97 && gpa <= 100)
    {
        string aPlus = "Grading Scale(%): A+";
        cout <<  aPlus;
    }

    // if value of gpa is between 93 and 96.3 display A
    else if(gpa >= 93 && gpa <= 96.9)
    {
        string a = "Grading Scale(%): A";
        cout << a;
    }

    // if value of gpa is between 90 and 92.9 display A-
    else if(gpa >= 90 && gpa <= 92.9)
    {
        string aMinus = "Grading Scale(%): A-";
        cout << aMinus;
    }

    // if value of gpa is between 87 and 89.9 display B+
    else if(gpa >= 87 && gpa <= 89.9)
    {
        string bPlus = "Grading Scale(%): B+";
        cout << bPlus;
    }

    // if value of gpa is between 83 and 86.9 display B
    else if(gpa >= 83 && gpa <= 86.9)
    {
        string b ="Grading Scale(%): B";
        cout << b;
    }

    // if value of gpa is between 80 and 82.9 display B-
    else if(gpa >= 80 && gpa <= 82.9)
    {
        string bMinus = "Grading Scale(%): B-";
        cout << bMinus;
    }

    // if value of gpa is between 76 and 79.9 display C+
    else if(gpa >= 76 && gpa <= 79.9)
    {
        string cPlus = "Grading Scale(%): C+";
        cout << cPlus;
    }

    // if value of gpa is between 70 and 75.9 display C
    else if(gpa >= 70 && gpa <= 75.9)
    {
        string c = "Grading Scale(%): C";
        cout << c;
    }

    // if value of gpa is between 67 and 69.9 display D+
    else if(gpa >= 67 && gpa <= 69.9)
    {
        string dPlus = "Grading Scale(%): D+";
        cout << dPlus;
    }

    // if value of gpa is between 63 and 66.9 display D
    else if(gpa >= 63 && gpa <= 66.9)
    {
        string d = "Grading Scale(%): D";
        cout << d;
    }

    // if value of gpa is between 60 and 62.9 display D-
    else if (gpa >= 60 && gpa <=62.9)
    {
        string dMinus= "Grading Scale(%): D-";
        cout << dMinus;
    }

    // if value of gpa is less than 59 display F
    else
    {
        string F = "Grading Scale(%): F ";
        cout << F;
    }
}
// Name: Main()
// Parameter(s): none
// Return: int
// Description: This functions calls the function CalculateGPA(), and then displays the gpa with a message.
// it also calls LetterGrade(), then returns grading scale based on calculated GPA.
int main()
{
    //define array of data type float and of size 17
    float grds[17];
    // call the function CalculateGPA() by passing the
    // grades array and store the return GPA value in gpa float variable
    float gpa = CalculateGPA(grds);
    cout << setprecision(2) << fixed; // Sets the output to 2 decimal places
    cout << "GPA is " << gpa << endl; // Displays the gpa
    // Calls function LetterGrade()
    LetterGrade(gpa);
    // optional added to create new line when running it on terminal
    cout << endl;
    return 0;
}
