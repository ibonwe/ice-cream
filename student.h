#ifndef IBONWE_ICE_CREAM_STUDENT_H
#define IBONWE_ICE_CREAM_STUDENT_H

#include <cstring>
#include <iostream>

using namespace std;

namespace ibonwe {
namespace icecream {

/**
 * This is a student class definition
 */
class Student {

    int id, studentNumber;
    double averageMark, results[5];
    string name, surname, diploma, modules[5];

public:
    /**
     * The default student constructor
     */
    Student();

    /**
     * The parameterized student constructor
     *
     * @param int    aId            A student ID
     * @param int    aStudentNumber A student number
     * @param string aName          A student name
     * @param string aSurname       A student surname
     * @param string aDiploma       A student diploma name
     */
    Student(int aId, int aStudentNumber, string aName, string aSurname, string aDiploma);

    /**
     * The student destructor
     */
    ~Student();

    /**
     * The purpose of this method is to get a student ID
     *
     * @return int A student ID
     */
    int getId();

    /**
     * The purpose of this method is to set a student ID
     *
     * @param int aId A student ID
     */
    void setId(int aId);

    /**
     * The purpose of this method is to get a student number
     *
     * @return int A student number
     */
    int getStudentNumber();

    /**
     * The purpose of this method is to set a student number
     *
     * @param int aStudentNumber A student number
     */
    void setStudentNumber(int aStudentNumber);

    /**
     * The purpose of this method is to get a student name
     *
     * @return string A student name
     */
    string getName();

    /**
     * The purpose of this method is to set a student name
     *
     * @param string aName A student name
     */
    void setName(string aName);

    /**
     * The purpose of this method is to get a student surname
     *
     * @return string A student surname
     */
    string getSurname();

    /**
     * The purpose of this method is to set a student surname
     *
     * @param int aSurname A student surname
     */
    void setSurname(string aSurname);

    /**
     * The purpose of this method is to get a student diploma name
     *
     * @return string A student diploma name
     */
    string getDiploma();

    /**
     * The purpose of this method is to set a student diploma name
     *
     * @param int aDiploma A student diploma name
     */
    void setDiploma(string aDiploma);

    /**
     * The purpose of this method is to get a student average mark
     *
     * @return double A student average mark
     */
    double getAverageMark();

    /**
     * The purpose of this method is to set a student average mark
     *
     * @param double aAverageMark A student average mark
     */
    void setAverageMark(double aAverageMark);

    /**
     * The purpose of this method is to calculate the student average mark
     *
     * @return double A student average mark
     */
    double calcAverage();

    /**
     * The purpose of this method is to determine whether a student has passed the diploma
     *
     * @return a bool A student passed or failed
     */
    bool pass();

    /**
     * The purpose of this method is to display a student results after the exams
     */
    void displayResults();

    /**
     * The purpose of this method is to get a module name at a position in the modules array
     *
     * @param  int index An index in modules
     * @return string A module name at a given index
     */
    string getModuleName(int index);

    /**
     * The purpose of this method is to set an exam result at a position in the results array
     *
     * @param int    index   An index in results
     * @param double aResult An exam result
     */
    void setResult(int index, double aResult);

    /**
     * The purpose of this method is to overload the stream insertion
     *
     * @param ostream out      A output stream
     * @param Student aStudent A unique student object
     */
    friend ostream& operator << (ostream& out, const Student& aStudent);

};

} // namespace icecream
} // namespace ibonwe

#endif
