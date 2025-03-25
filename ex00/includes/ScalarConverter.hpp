/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 06:03:50 by urabex            #+#    #+#             */
/*   Updated: 2025/03/26 06:22:53 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream>
#include <string>
#include <limits>
#include <sstream>

#define ERROR 0
#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4

// まず整数に変換 → チェック
class ScalarConverter {
    public:
        static void convert(const std::string &input);

    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);
        ~ScalarConverter();
};

#endif
