//
// Created by Amirahmad Ardroudi on 5/13/22.
//
#pragma once
#include "Object.h"
#include <string>

class Pawn : public Core::Object
{
private:
    std::string m_Name;

public:
    Pawn(const std::string& name) : m_Name(name)
    {}

    std::string GetName() {return m_Name;}
};