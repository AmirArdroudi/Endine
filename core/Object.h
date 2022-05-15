//
// Created by Amirahmad Ardroudi on 5/13/22.
//

#pragma once
#include <string>
#include "Core.h"
using namespace Core;

namespace Core
{
    class Object {
    private:
        int m_Id;
    public:
        Vector2 Position;

    public:
        Object()
                : m_Id(0), Position(0, 0)
        {}


//        void Move(const Vector2& toPoint);
        //    void Move(const Vector2& point);

        Vector2 GetPosition() const { return Position; }

        int GetId() const { return m_Id; }

        std::string GetName(); // pure virtual function
    };
}