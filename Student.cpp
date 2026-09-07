#include "Student.h"
#include <iostream>

Student::Student(const std::string& name, int age,int course)
    : name(name), age(age), course(course)
{}

void Student::PrintInfo() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Course" << course << std::endl;
}