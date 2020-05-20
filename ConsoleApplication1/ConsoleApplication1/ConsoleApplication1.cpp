#include <iostream>
#include <fstream>
#include "Student.h"

using namespace std;

int main()
{
    setlocale(0, "");

    Student students[5];
    ifstream input;
    
    try //Ловим исключение при работе с файлом ввода
    {
        cout << "Открытие файла на ввод ... \n";
        input.open("input.txt");
        cout << "Файл на ввод успешно открыт\n";

        //Считываем данные для объектов
        string buffSN, buffFN, buffDate, buffAdd, buffNum, buffFuc, buffCourse;

        input >> buffSN >> buffFN >> buffDate >> buffAdd >> buffNum >> buffFuc >> buffCourse;
        students[0] = Student(buffSN, buffFN, buffDate, buffAdd, buffNum, buffFuc, buffCourse);
        input >> buffSN >> buffFN >> buffDate >> buffAdd >> buffNum >> buffFuc >> buffCourse;
        students[1] = Student(buffSN, buffFN, buffDate, buffAdd, buffNum, buffFuc, buffCourse);
        input >> buffSN >> buffFN >> buffDate >> buffAdd >> buffNum >> buffFuc >> buffCourse;
        students[2] = Student(buffSN, buffFN, buffDate, buffAdd, buffNum, buffFuc, buffCourse);
        input >> buffSN >> buffFN >> buffDate >> buffAdd >> buffNum >> buffFuc >> buffCourse;
        students[3] = Student(buffSN, buffFN, buffDate, buffAdd, buffNum, buffFuc, buffCourse);
        input >> buffSN >> buffFN >> buffDate >> buffAdd >> buffNum >> buffFuc >> buffCourse;
        students[4] = Student(buffSN, buffFN, buffDate, buffAdd, buffNum, buffFuc, buffCourse);

        input.close();
        cout << "Программа успешно выполнила считывание и закрыла файл \n";
    }
    catch (const exception& ex)
    {
        cout << "Ошибка при работе с файлом ввода " << ex.what() << endl;
    }


    ofstream output;

    try //Исключение если что то случится с выводом
    {
        cout << "Открытие файла на вывод...\n";
        output.open("output.txt");
        cout << "Файл на вывод успешно открыт\n";

        output << "Output IU5-KF studenst\n" << endl;
        for (int i = 0; i < sizeof(students) / sizeof(Student); i++)
        {
            if (students[i].GetFaculty() == "IU5-KF")
            {
                output << students[i].show();
            }
        }

        output << "\nOutput facultets\n\n";
        for (int fucNum = 1; fucNum < 6; fucNum++)
        {
            output << "Studens of " << fucNum << " faculty: " << endl;
            for (int i = 0; i < sizeof(students) / sizeof(Student); i++)
            {
                if (students[i].GetFaculty()[2] == (char)fucNum + '0')
                {
                    output << students[i].show();
                }
            }
        }

        output << "\nOutput course\n\n";
        for (int courseNum = 0; courseNum <= 8; courseNum++)
        {
            output << "Studens of " << courseNum << " course: " << endl;
            for (int i = 0; i < sizeof(students) / sizeof(Student); i++)
            {
                if (students[i].GetCourse()[0] == (char)courseNum + '0')
                {
                    output << students[i].show();
                }
            }
        }
        output << endl;

        int year;
        cout << "\nВведите год: ";
        cin >> year;
        output << "Studens after " << year << endl << endl;
        for (int i = 0; i < sizeof(students) / sizeof(Student); i++)
        {
            if (students[i].GetDateOfBirth()[9] > (char)(year % 10) + '0')
            {
                output << students[i].show();
            }
        }
        output << endl;

        cout << "Программа успешно выполнила запись в файл\n";
    }
    catch (const exception& ex)
    {
        cout << "Ошибка при работе с файлом вывода " << ex.what() << endl;
    }


    return 0;
}

