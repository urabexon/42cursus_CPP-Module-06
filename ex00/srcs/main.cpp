/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 06:23:37 by urabex            #+#    #+#             */
/*   Updated: 2025/03/26 06:25:20 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc == 2)
        ScalarConverter::convert(std::string(argv[1]));
    else
        std::cout << "Provide ONE argument" << std::endl;
    return 0;
}
