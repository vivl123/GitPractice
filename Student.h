
#pragma once
#include <string>

class Student
{
private:
    std::string name;
    int age;
    int course;

public:
    Student(const std::string& name, int age, int course);

    void PrintInfo() const;

    int GetAge() const;
};