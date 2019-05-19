/***************************************************************************
 * 
 * Copyright (c) 2019 Tang,zhuangzhuang, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
/**
* @file base_shape.h
* @author yetang
* @date 2019/05/13 21:27:35
* @brief 
* 简单工厂模式
**/

#pragma once
#include <iostream>

namespace shape {

#define DECLARE_NEW_INSTANCE_FUNCTION(class_name) \
static void* new_instance() { \
    return static_cast<void*>(new class_name); \
}

class BaseShape {

public:
    /**
     * @brief 构函数
     *
     * @see
     * @author tang
     * @date 2019/05/13 12:45:04
    **/
    BaseShape() {
    };

    /**
     * @brief 虚析构函数
     *
     * @see
     * @author tang
     * @date 2019/05/13 12:45:04
    **/
    virtual ~BaseShape() {
    };
    
    /**
     * @brief 绘制形状
     * param [in] void
     * @return bool : true : 成功；false : 失败
     * @see
     * @author tang
     * @date 2019/05/13 12:45:04
    **/
    virtual bool draw() = 0;
};

} //shape
