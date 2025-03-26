/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:01:15 by urabex            #+#    #+#             */
/*   Updated: 2025/03/26 13:17:59 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>
#include <cstdlib>

int main(void) {
    Data data;
    
    std::cout << "Data address: " << &data << std::endl;
    uintptr_t dataUint = Serializer::serialize(&data);
    std::cout << "Data serialized: " << dataUint << std::endl;
    Data* dataPtr = Serializer::deserialize(dataUint);
    std::cout << "Data deserialized: " << dataPtr << std::endl;
    
    return 0;
}
