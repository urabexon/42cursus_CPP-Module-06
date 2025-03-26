/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 12:52:24 by urabex            #+#    #+#             */
/*   Updated: 2025/03/26 13:20:28 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <fstream>
#include <stdint.h>
#include "Data.hpp"

class Serializer {
    public:
        static uintptr_t    serialize(Data* ptr);
        static Data*        deserialize(uintptr_t raw);

    private:
        Serializer();
        Serializer(const Serializer &copy);
        Serializer& operator=(const Serializer &copy);
        ~Serializer();
};

#endif
