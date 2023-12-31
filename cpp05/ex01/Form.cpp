/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:13:50 by hoigag            #+#    #+#             */
/*   Updated: 2023/11/21 16:04:09 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iomanip>
Form::Form() : name(""), signGrade(1), executeGrade(1)
{
    this->isSigned = false;
}

Form::Form(const std::string name, const int signGrade, const int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade)
{
    if (this->signGrade < HIGH || this->executeGrade < HIGH)
        throw Form::GradeTooHighException();
    if (this->signGrade > LOW || this->executeGrade > LOW)
        throw Form::GradeTooLowException();
    this->isSigned = false;
}

Form::~Form()
{

}

Form::Form(const Form& other) : name(other.name), signGrade(other.signGrade), executeGrade(other.executeGrade)
{
    this->isSigned = other.isSigned;
}

Form& Form::operator=(const Form& other)
{
    this->isSigned = other.isSigned;
    return *this;
}

const std::string Form::getName() const
{
    return this->name;
}

bool Form::isFormSigned() const
{
    return this->isSigned;    
}

int Form::getSignGrade() const
{
    return this->signGrade;
}

int Form::getExecuteGrade() const
{
    return this->executeGrade;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

void Form::beSigned(const Bureaucrat& worker)
{
    if (worker.getGrade() > this->signGrade)
        throw Form::GradeTooLowException();
    this->isSigned = true;
}

std::ostream& operator<<(std::ostream& stream, const Form& form)
{
    int columnSize = 20;
    int columns = 4;
    std::string isFormSigned = form.isFormSigned() ? "signed" : "not signed";
    std::string border = " ";
    for (int i = 0; i < (columns * columnSize) + 11; i++)
        border += "-";
    stream <<  border << std::endl;
    stream << "| " << std::left << std::setw(columnSize) << "Form Name" << " | "
           << std::setw(columnSize) << "Sign Grade" << " | "
           << std::setw(columnSize) << "Execute Grade" << " | "
           << std::setw(columnSize) << "Status" << " | " << std::endl;
    stream << border << std::endl;
    stream << "| " << std::setw(columnSize) << form.getName() << " | "
           << std::setw(columnSize) << form.getSignGrade() << " | "
           << std::setw(columnSize) << form.getExecuteGrade() << " | "
           << std::setw(columnSize) << isFormSigned << " | " << std::endl;
    stream << border << std::endl;
    return stream;
}



