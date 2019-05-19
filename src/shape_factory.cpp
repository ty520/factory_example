/***************************************************************************
 * 
 * Copyright (c) 2019 Tang,zhuangzhuang, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
/**
* @file shape_factory.cpp
* @author tang
* @date 2019/05/13 21:27:35
* @brief 
* 
**/

#include "shape_factory.h"
#include "circle_shape.h"
#include "rect_shape.h"

namespace shape {

ShapeFactory::ShapeFactory() {
    
    register_func("CircleShape", std::bind(&CircleShape::new_instance));
    register_func("RectShape", std::bind(&RectShape::new_instance));
}

ShapeFactory::~ShapeFactory() {
}
    /**
     * @brief 注册函数指针
     * param [in] 
     * param1: const std::string& : 注册函数的名称
     * param2: std::shared_ptr<create_func_t> : 注册函数指针
     * @return void
     * @see
     * @author tang
     * @date 2019/05/13 12:45:04
    **/
void ShapeFactory::register_func(const std::string& shape_type, 
                            ShapeCreateFunc shape_create_func) {

    _shape_func_map[shape_type] = shape_create_func;

}

    /**
     * @brief 创建对象
     * param [in] 
     * param1: const std::string& : 待创建的shape的名称
     * @return void
     * @see
     * @author tang
     * @date 2019/05/13 12:45:04
    **/
void* ShapeFactory::create_object(const std::string& name) {
    if (_shape_func_map.find(name) == _shape_func_map.end()) {
        return nullptr;
    }
    shape_func_map::iterator shape_iter = _shape_func_map.find(name);

    // 执行ShapeCreateFunc
    return shape_iter->second();
}

} //shape
