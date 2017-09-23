#include <iostream>
#include <cstring>
using namesapce std;

/**
 * The default student constructor
 */
ibonwe::icecream::Student::Student()
{
    id = studentNumber = 0;
    averageMark = 0.0;
    name = surname = diploma = " ";
}

/**
 * The student destructor
 */
ibonwe::icecream::Student::~Student()
{
    cout << "Bye!" << endl;
}

/**
 * The purpose of this method is to get a student ID
 *
 * @return int A student ID
 */
int ibonwe::icecream::Student::getId()
{
    return id;
}

/**
 * The purpose of this method is to set a student ID
 *
 * @param int aId A student ID
 */
void ibonwe::icecream::Student::setId(int aId)
{
    id = aId;
}

/**
 * The purpose of this method is to get a student number
 *
 * @return int A student number
 */
int ibonwe::icecream::Student::getStudentNumber()
{
    return studentNumber;
}

/**
 * The purpose of this method is to set a student number
 *
 * @param int aStudentNumber A student number
 */
void ibonwe::icecream::Student::setStudentNumber(int aStudentNumber)
{
    studentNumber = aStudentNumber;
}

/**
 * The purpose of this method is to get a student name
 *
 * @return string A student name
 */
string ibonwe::icecream::Student::getName()
{
    return name;
}

/**
 * The purpose of this method is to set a student name
 *
 * @param string aName A student name
 */
void ibonwe::icecream::Student::setName(string aName)
{
    name = aName;
}

/**
 * The purpose of this method is to get a student surname
 *
 * @return string A student surname
 */
string ibonwe::icecream::Student::getSurname()
{
    return surname;
}

/**
 * The purpose of this method is to set a student surname
 *
 * @param int aSurname A student surname
 */
void ibonwe::icecream::Student::setSurname(string aSurname)
{
    surname = aSurname;
}

/**
 * The purpose of this method is to get a student diploma name
 *
 * @return string A student diploma name
 */
string ibonwe::icecream::Student::getDiploma()
{
    return diploma;
}

/**
 * The purpose of this method is to set a student diploma name
 *
 * @param int aDiploma A student diploma name
 */
void ibonwe::icecream::Student::setDiploma(string aDiploma)
{
    diploma = aDiploma;
}

/**
 * The purpose of this method is to get a student average mark
 *
 * @return double A student average mark
 */
double ibonwe::icecream::Student::getAverageMark()
{
    return averageMark;
}

/**
 * The purpose of this method is to set a student average mark
 *
 * @param double aAverageMark A student average mark
 */
void ibonwe::icecream::Student::setAverageMark(double aAverageMark)
{
    averageMark = aAverageMark;
}

/**
 * The purpose of this method is to calculate the student average mark
 *
 * @return double A student average mark
 */
double ibonwe::icecream::Student::calcAverage()
{
    double sum;

    for (int i = 0; i <= sizeof(results); i++)
    {
        sum += results[i];
    }

    return sum / sizeof(results);
}

/**
 * The purpose of this method is to determine whether a student has passed the diploma
 *
 * @return a bool A student passed or failed
 */
bool ibonwe::icecream::Student::pass()
{
    if (getAverageMark == 50 || getAverageMark > 50)
    {
        return pass;
    }

    return fail;
}

/**
 * The purpose of this method is to display a student results after the exams
 */
void ibonwe::icecream::Student::displayResults()
{
    cout << "***** Student Report Card *****" << endl;
    cout << "-------------------------------" << endl;

    cout << "Student Number: " << getStudentNumber() << endl;
    cout << "Student Name: " << getName() << " " << getSurname() << endl;
    cout << "Diploma:" << getDiploma() << endl;

    cout << "-------------------------------" << endl;

    for (int i = 0; i < sizeof(modules); i++)
    {
        cout << "Grade (" << modules[i] << ") : " << results[i] << endl;
    }

    cout << "-------------------------------" << endl;

    cout << "Average Mark: " << calcAverage() << endl;
    cout << "Grade Status: " << pass() << endl;
}

/**
 * The purpose of this method is to get a module name at a position in the modules array
 *
 * @param  int index An index in modules
 * @return string A module name at a given index
 */
string ibonwe::icecream::Student::getModuleName(int index)
{
    if (index < sizeof(modules) && index > -1)
    {
        return modules[index];
    }

    return "";
}

/**
 * The purpose of this method is to set an exam result at a position in the results array
 *
 * @param int    index   An index in results
 * @param double aResult An exam result
 */
void ibonwe::icecream::Student::setResult(int index, double aResult)
{
    if (index < sizeof(modules) && index > -1)
    {
        cout << module[index] = aResult[index] << endl;
    }

    return 0;
}

/**
 * The purpose of this method is to overload the stream insertion
 *
 * @param ostream outs     A output stream
 * @param Student aStudent A unique student object
 */
ibonwe::icecream::Student::ostream &operator<<(ostream &outs, const Student &aStudent)
{
    outs << "***** Student Details *****" << endl;
    outs << "---------------------------" << endl;

    outs << "Student Number: " << getStudentNumber() << endl;
    outs << "Student Name: " << getName() << " " << getSurname() << endl;
    outs << "Diploma:" << getDiploma() << endl;

    outs << "---------------------------" << endl;
}
