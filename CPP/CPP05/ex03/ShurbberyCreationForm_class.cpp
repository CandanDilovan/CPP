/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShurbberyCreationForm_class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:25:52 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/17 14:25:00 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm_class.hpp"

ShurbberyCreationForm::ShurbberyCreationForm(void) : AForm("ShurbberyCreationForm", 145, 137), _target("default"){
}

ShurbberyCreationForm::ShurbberyCreationForm(std::string target) : AForm("ShurbberyCreationForm", 145, 137), _target(target){
}

ShurbberyCreationForm::ShurbberyCreationForm(const ShurbberyCreationForm & src)
{
	*this = src;
}

std::string ShurbberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

ShurbberyCreationForm::~ShurbberyCreationForm(void){
}

void ShurbberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == 1 && executor.getGrade() <= getEgrade())
	{
		std::ofstream ofs(getTarget() + "_shurubbery");
		ofs << "                     / / / " << std::endl;
		ofs << "              /        /  /     //    /" << std::endl;
		ofs << "            /                 /         /  /" << std::endl;
		ofs << "                            /" << std::endl;
		ofs << "                           /                //" << std::endl;
		ofs << "           /          /            /              /" << std::endl;
		ofs << "           /            '/,        /               /" << std::endl;
		ofs << "           /              'b      *" << std::endl;
		ofs << "            /              '$    //                //" << std::endl;
		ofs << "           /    /           $:   /:               /" << std::endl;
		ofs << "         //      /  //      */  @):        /   / /" << std::endl;
		ofs << "                     /     :@,@):   ,/**:'   /" << std::endl;
		ofs << "          /      /,         :@@*: //**'      /   /" << std::endl;
		ofs << "                   '/o/    /:(@'/@*'''  /" << std::endl;
		ofs << "           /  /       'bq,//:,@@*'   ,*      /  /" << std::endl;
		ofs << "                      ,p$q8,:@)'  /p*'      /" << std::endl;
		ofs << "               /     '  / '@@Pp@@*'    /  /" << std::endl;
		ofs << "                /  / //    Y7'.'     /  /" << std::endl;
		ofs << "                          :@):." << std::endl;
		ofs << "                         .:@:'." << std::endl;
		ofs << "                       .::(@:." << std::endl;
	}
}

ShurbberyCreationForm & ShurbberyCreationForm::operator=(ShurbberyCreationForm const & rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}
