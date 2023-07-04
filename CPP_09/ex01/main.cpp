/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:56:02 by smayrand          #+#    #+#             */
/*   Updated: 2023/07/04 15:42:46 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	std::stack<int> rpn;
	int res = 0;
	int i = 0;

	if(argc == 2 && isdigit(argv[1][0]) != 0)
	{
		while(argv[1][i] != '\0')
		{
			if ((i > 5 && isdigit(argv[1][i]) != 0 && isdigit(argv[1][i + 2]) != 0) || isdigit(argv[1][i]) != 0 && argv[1][i + 1] != ' '
				|| (strchr("+-*/", argv[1][i]) != 0 && argv[1][i + 1] != ' ' && argv[1][i + 1] != '\0') || (argv[1][i] == ' ' && argv[1][i + 1] == '\0')
					|| (strchr("+-/*", argv[1][i]) != 0 && strchr("+-/*", argv[1][i + 2]) != 0))
				return (std::cout << "Error: Bad Format." << std::endl, 0);
			if(isdigit(argv[1][i]) != 0 && argv[1][i + 1] != '\0')
			{
				rpn.push(argv[1][i] - '0');
				if(isdigit(argv[1][i + 2]) == 1)
					res = rpn.top() - 0;
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
				res = res / rpn.top();
				rpn.pop();
				rpn.push(res - '0');
			}
			i++;
		}
		std::cout << res << std::endl;
	}
	else
		return (std::cout << "Error: Bad format." << std::endl, 0);
	return(0);
}