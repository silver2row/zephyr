 # SPDX-FileCopyrightText: Copyright (c) 2025 Jilay Sandeep Pandya
 # SPDX-License-Identifier: Apache-2.0

# Extra additions and subtractions done by Seth 8/2025

cmake_minimum_required(VERSION 3.28.0)

#find_package(Zephyr) # REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(main LANGUAGES C)

#FILE(GLOB app_sources src/main.c)
#target_sources(main main.c)
add_executable(main main.c)
target_link_libraries(main C)
