#ifndef _MultithreadTestSERVER_IMPL_H_
#define _MultithreadTestSERVER_IMPL_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "MultithreadTestRequestReplyUtils.h"

class MultithreadTestServerImpl
{
    public:

        /// \brief The default constructor.
        MultithreadTestServerImpl();

        /// \brief The default destructor.
        virtual ~MultithreadTestServerImpl();

         
        DDS_Long test(/*in*/ const Dato& dato1, /*out*/ Dato& dato2);
};

#endif // _MultithreadTestSERVER_IMPL_H_