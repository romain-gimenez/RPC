#ifndef _UnionTestSERVER_IMPL_H_
#define _UnionTestSERVER_IMPL_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "UnionTestRequestReplyUtils.h"

class UnionTestServerImpl
{
    public:

        /// \brief The default constructor.
        UnionTestServerImpl();

        /// \brief The default destructor.
        virtual ~UnionTestServerImpl();

         
        Empleado getEmpleado(/*in*/ const Empleado& em1, /*inout*/ Empleado& em2, /*out*/ Empleado& em3);
};

#endif // _UnionTestSERVER_IMPL_H_