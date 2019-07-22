/* 
 * This file is part of the Navi Singh's experiments 
 * (https://github.com/xxxx or http://xxx.github.io).
 *
 * Copyright (c) 2019 Navjot Singh.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Navjot Singh
 * Email: navisinghnz9@gmail.com
 *
 */

#ifndef __LOGGER_H__
#define __LOGGER_H__

#include <stdio.h>
#define logger(M, ...) printf("[INFO] (%s:%d) M \n", __FILE__, __LINE__, ##__VA_ARGS__)

#endif// __LOGGER_H__
