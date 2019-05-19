/***************************************************************************
 * 
 * Copyright (c) 2019 Tang,zhuangzhuang, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
/**
* @file circle_shape.h
* @author tang
* @date 2019/05/13 21:27:35
* @brief 
* 
**/

#pragma once

#include "base_shape.h"
#include <stdio.h>

namespace shape {

class CircleShape : public BaseShape {

public:
    DECLARE_NEW_INSTANCE_FUNCTION(CircleShape);

    /**
     * @brief 构函数
     *
     * @see
     * @author tang
     * @date 2019/05/13 12:45:04
    **/
    CircleShape() {
    };

    /**
     * @brief 虚析构函数
     *
     * @see
     * @author tang
     * @date 2019/05/13 12:45:04
    **/
    virtual ~CircleShape() {
    };
    
    /**
     * @brief 绘制形状
     * param [in] void
     * @return bool : true : 成功；false : 失败
     * @see
     * @author tang
     * @date 2019/05/13 12:45:04
    **/
    bool draw() {
        printf("It is CircleShape\n");
    }
};

} //shape
