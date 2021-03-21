#include <iostream>
#include "GraduateStudent.h"

int main()
{
    GraduateStudent A("Test thesis topic", "Pedro", 3, 45132165);

    cout << "\nStudent A" << endl;
    cout << A;

    cout << "\nStudent A" << endl;
    A.SetThesisTopic("Second thesis topic");
    cout << A;

    cout << "\nStudent A" << endl;
    A.SetIDnumber(11111111);
    cout << A;

    return 0;
}