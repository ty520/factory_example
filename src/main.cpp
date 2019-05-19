/***************************************************************************
 * 
 * Copyright (c) 2019 Tang,zhuangzhuang, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
/**
* @file main.cpp
* @author tang
* @date 2019/05/13 21:27:35
* @brief 
* 
**/

#include "shape_factory.h"
#include "circle_shape.h"
#include "rect_shape.h"

#include <memory>

#define DELETE_SHAPE_OBJ(circle_shape_obj) \
    if (circle_shape_obj != nullptr) { \
        delete circle_shape_obj;    \
    } \

int main(int args, char* argv[]) {

    // 注册函数
    std::shared_ptr<shape::ShapeFactory> shape_factory(new shape::ShapeFactory());

    // 创建CircleShape对象
    shape::CircleShape* circle_shape_obj = static_cast<shape::CircleShape*>(shape_factory->create_object("CircleShape"));

    // draw
    circle_shape_obj->draw();

    //创建RectShape对象
    shape::RectShape* rect_shape_obj = static_cast<shape::RectShape*>(shape_factory->create_object("RectShape"));
    rect_shape_obj->draw();
    
    DELETE_SHAPE_OBJ(circle_shape_obj);
    DELETE_SHAPE_OBJ(rect_shape_obj);
}
