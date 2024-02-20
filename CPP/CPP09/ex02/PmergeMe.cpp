/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:39:15 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/20 11:49:23 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


void printit(std::deque<int> &cont)
{
    std::deque<int>::iterator it;
    std::deque<int>::iterator ite  = cont.end();
    for (it = cont.begin(); it < ite; it++)
    {
        std::cout << *it << " ";
    }
}


void printitv(std::vector<int> &cont)
{
    std::vector<int>::iterator it;
    std::vector<int>::iterator ite  = cont.end();
    for (it = cont.begin(); it < ite; it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int ItsInt(std::string str)
{
	for (size_t a = 0; a < str.size(); a++)
			if (str[a] < '0' || str[a] > '9')
				throw NotInt();
	return (0);
}


void splitting(char **list, int argc, std::deque<int> &cont)
{
    std::clock_t start;
    std::clock_t end;
    int a = 1;
    
    start = clock();
    while (list[a] && list[a + 1])
    {
        (ItsInt(list[a]), ItsInt(list[a + 1]));
        if (std::atoi(list[a]) < 0 || std::atoi(list[a + 1]) < 0)
            throw NegNumber();
        else if (std::atol(list[a]) > INT_MAX || std::atol(list[a + 1]) > INT_MAX)
            throw IntTooBig();
        else
        {
            if (std::atoi(list[a]) < std::atoi(list[a + 1]))
            {
                
                cont.push_back(std::atoi(list[a]));
                cont.push_back(std::atoi(list[a + 1]));
            }
            else
            {
                cont.push_back(std::atoi(list[a + 1]));
                cont.push_back(std::atoi(list[a]));
            }
        }
        a += 2;
    }
    if (list[a])
    {
        ItsInt(list[a]);
        if (std::atoi(list[a]) < 0)
            throw NegNumber();
        else if (std::atol(list[a]) > INT_MAX)
            throw IntTooBig();
        cont.push_back(std::atoi(list[a]));
    }
    recursiondeque(cont);
    std::cout << "Before: " << std::endl << "[ ";
    for (int b = 1; list[b]; b++)
        std::cout << list[b] << " ";
    std::cout << "]" << std::endl << "After: " << std::endl << "[ ";
    printit(cont);
    std::cout << "]" << std::endl;
    end = clock();
    std::cout << "Time to process a range of "<< argc - 1 << " elements with std::deque: " << static_cast<double>(((end - start) * CLOCKS_PER_SEC) / 1000000) << " us" << std::endl;
}

void recursiondeque(std::deque<int> &cont)
{
    std::deque<int> res;
    
    if (cont.size() <= 1)
        return ;
    for (unsigned int a = 1; a - 1 < cont.size(); a += 2)
    {
        if (cont[a] < cont[a - 1])
            std::swap(cont[a], cont[a - 1]);
        res.push_back(cont[a]);
    }
    recursiondeque(res);
    for (unsigned int a = 0; a < cont.size(); a += 2)
        binarysearch(res, cont[a]);
    cont = res;
}

void binarysearch(std::deque<int> &cont, int insert)
{
    size_t begin = 0;
    size_t end = cont.size();
    size_t mid = 0;
    std::deque<int>::iterator it = cont.begin();

    while (1)
    {
        mid = (begin + (end - begin) / 2);
        if (cont[mid] <= insert)
            begin = mid + 1;
        if (cont[mid] > insert)
            end = mid;
        if (mid == begin && mid == end)
        {
            cont.insert((it + (mid)), insert);
            break;
        }
    }
}


void splittingvector(char **list, int argc, std::vector<int> &cont)
{
    std::clock_t start;
    std::clock_t end;
    int a = 1;
    
    start = clock();
    while (list[a] && list[a + 1])
    {
        (ItsInt(list[a]), ItsInt(list[a + 1]));
        if (std::atoi(list[a]) < 0 || std::atoi(list[a + 1]) < 0)
            throw NegNumber();
        else if (std::atol(list[a]) > INT_MAX || std::atol(list[a + 1]) > INT_MAX)
            throw IntTooBig();
        else
        {
            if (std::atoi(list[a]) < std::atoi(list[a + 1]))
            {
                
                cont.push_back(std::atoi(list[a]));
                cont.push_back(std::atoi(list[a + 1]));
            }
            else
            {
                cont.push_back(std::atoi(list[a + 1]));
                cont.push_back(std::atoi(list[a]));
            }
        }
        a += 2;
    }
    if (list[a])
    {
        ItsInt(list[a]);
        if (std::atoi(list[a]) < 0)
            throw NegNumber();
        else if (std::atol(list[a]) > INT_MAX)
            throw IntTooBig();
        cont.push_back(std::atoi(list[a]));
    }
    recursionvector(cont);
    end = clock();
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector: " << static_cast<double>(((end - start) * CLOCKS_PER_SEC) / 1000000) << " us" << std::endl;
}

void recursionvector(std::vector<int> &cont)
{
    std::vector<int> res;
    
    if (cont.size() <= 1)
        return ;
    for (unsigned int a = 1; a - 1 < cont.size(); a += 2)
    {
        if (cont[a] < cont[a - 1])
            std::swap(cont[a], cont[a - 1]);
        res.push_back(cont[a]);
    }
    recursionvector(res);
    for (unsigned int a = 0; a < cont.size(); a += 2)
        binarysearchvector(res, cont[a]);
    cont = res;
}

void binarysearchvector(std::vector<int> &cont, int insert)
{
    size_t begin = 0;
    size_t end = cont.size();
    size_t mid = 0;
    std::vector<int>::iterator it = cont.begin();

    while (1)
    {
        if (cont[cont.size() - 1] < insert)
        {
            cont.insert(cont.end(), insert);
            break;
        }
        if (cont[0] > insert)
        {
            cont.insert(cont.begin(), insert);
            break;
        }
        mid = (begin + (end - begin) / 2);
        if (cont[mid] <= insert)
            begin = mid + 1;
        if (cont[mid] > insert)
            end = mid;
        if (mid == begin && mid == end)
        {
            cont.insert(it + mid, insert);
            break;
        }
    }
}