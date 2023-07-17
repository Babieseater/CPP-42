/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:56:02 by smayrand          #+#    #+#             */
/*   Updated: 2023/07/17 13:55:54 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	std::stack<int> rpn;
	int res = 0;
	int tmp = 0;
	int i = 0;

	if(argc == 2 && isdigit(argv[1][0]) != 0)
	{
		while(argv[1][i] )
		{
			if (isdigit(argv[1][i]) != 0 && argv[1][i + 1] != ' ' || (strchr("+-*/", argv[1][i]) != 0 && argv[1][i + 1] != ' ' && argv[1][i + 1] != '\0') 
						|| (argv[1][i] == ' ' && argv[1][i + 1] == '\0') || (argv[1][i] == ' ' && argv[1][i + 1] == ' ') || isalpha(argv[1][i]) != 0
							|| (isdigit(argv[1][i - 2]) == 0 && isdigit(argv[1][i]) != 0 && strchr("+-*/",argv[1][i + 2]) != 0 && strchr("+-*/",argv[1][i + 4]) != 0 && i > 6)
								||  (isdigit(argv[1][i]) != 0 &&  isdigit(argv[1][i + 2]) != 0 && isdigit(argv[1][i + 4]) != 0)								
									|| (strchr("0", argv[1][i]) != 0 && strchr("/", argv[1][i + 2]) != 0))
				return (std::cout << "Error: Bad Format." << std::endl, 0);
			if(isdigit(argv[1][i]) != 0 && argv[1][i + 1] != '\0')
			{
				rpn.push(argv[1][i] - '0');
				if(!res && isdigit(argv[1][i + 2]) == 1 && tmp == 0)
					res = rpn.top() - 0;
				else if(res && isdigit(argv[1][i + 2]) == 1)
				{
					tmp = res - 0;
					res = rpn.top() - 0;
				}
			}
			else if(argv[1][i] == '+' || argv[1][i] == '-' || argv[1][i] == '*' || argv[1][i] == '/' )
			{
				if(argv[1][i] == '+')
				res = res + rpn.top();
				else if(argv[1][i] == '-')
				res = res - rpn.top();
				else if(argv[1][i] == '*')
				res = res * rpn.top();
				else if(argv[1][i] == '/')
				{
					if (rpn.top() == '0')
						return (std::cout << "Error: Bad Format." << std::endl, 0);
					res = res / rpn.top();
				}
				rpn.pop();
				rpn.push(res - '0');
			}
			if (strchr("+-*/", argv[1][i]) != 0 && strchr("+-*/", argv[1][i + 2]) != 0 && tmp)
			{
				if(argv[1][i + 2] == '+')
				res = res + tmp;
				else if(argv[1][i + 2] == '-')
				res = res - tmp;
				else if(argv[1][i + 2] == '*')
				res = res * tmp;
				else if(argv[1][i + 2] == '/')
				{
					if (tmp == '0')
						return (std::cout << "Error: Bad Format." << std::endl, 0);
					res = res / rpn.top();
				}
				rpn.pop();
				rpn.push(res - '0');
				tmp = 0;
				i += 2;
			}
			i++;
		}
		std::cout << res << std::endl;
	}
	else
		return (std::cout << "Error: Not enough or invalid arguments." << std::endl, 0);
	return(0);
}