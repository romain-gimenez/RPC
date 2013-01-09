/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file UnionTestServerImpl.cxx
 * This source file contains the definition of the skeleton for interface UnionTest. This definitions have to be implemented.
 *
 * This file was generated by the tool rpcddsgen.
 */
 
#include "UnionTestServerImpl.h"

 
Empleado UnionTestServerImpl::getEmpleado(/*in*/ const Empleado& em1, /*inout*/ Empleado& em2, /*out*/ Empleado& em3) 
{
    Empleado getEmpleado_ret;

	em3._d(em2._d());
    if(em3._d() == 1)
	    em3.id(em2.id());
    else
	    em3.name(strdup(em2.name()));
    getEmpleado_ret._d(em1._d());
    if(getEmpleado_ret._d() == 1)
	    getEmpleado_ret.id(em1.id());
    else
	    getEmpleado_ret.name(strdup(em1.name()));
    em2._d(em1._d());
    if(em2._d() == 1)
	    em2.id(em1.id());
    else
	    em2.name(strdup(em1.name()));
   
    return getEmpleado_ret;
} 
