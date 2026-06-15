cmake_minimum_required(VERSION 4.2)
project(OOP_PR6_Question)

set(CMAKE_CXX_STANDARD 14)

include_directories(includes)

add_executable(OOP_PR6_Question
        includes/Exam.h
        includes/Question.h
        src/Exam.cpp
        src/Question.cpp
        main.cpp
        includes/SingleChoiceQuestion.h
        includes/MultipleChoiceQuestion.h
        src/SingleChoiceQuestion.cpp
        src/MultipleChoiceQuestion.cpp)
