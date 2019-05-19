/***************************************************************************
 * 
 * Copyright (c) 2019 Tang,zhuangzhuang, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
/**
* @file shape_factory.h
* @author yetang
* @date 2019/05/13 21:27:35
* @brief 
* 
**/
#include <string.h>
#include <memory>
#include <map>
#include <string.h>

#pragma once

namespace shape {

using ShapeCreateFunc = std::function<void*()>;
typedef std::map<std::string, ShapeCreateFunc> shape_func_map;

class ShapeFactory {

public:
    /**
     * @brief 构函数
     *
     * @see
     * @author tang
     * @date 2019/05/13 12:45:04
    **/
    ShapeFactory();

    /**
     * @brief 析构函数
     *
     * @see
     * @author tang
     * @date 2019/05/13 12:45:04
    **/
    ~ShapeFactory();
    
 
    /**
     * @brief 创建对象
     * param [in] 
     * param1: const std::string& : 待创建的shape的名称
     * @return void
     * @see
     * @author tang
     * @date 2019/05/13 12:45:04
    **/
    void* create_object(const std::string& name);

private:
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
    void register_func(const std::string& shape_type, ShapeCreateFunc);

private:
    shape_func_map _shape_func_map;

};

} //shape
