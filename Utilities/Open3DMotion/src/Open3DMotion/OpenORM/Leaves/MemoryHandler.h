/*--
  Open3DMotion 
  Copyright (c) 2004-2012.
  All rights reserved.
  See LICENSE.txt for more information.
--*/

#ifndef _OPEN3DMOTION_MEMORY_HANDLER_H_
#define _OPEN3DMOTION_MEMORY_HANDLER_H_

#include "Open3DMotion/OpenORM/Types.h"

namespace Open3DMotion
{
	class MemoryHandler
	{
	public:
		// DISALLOW_COPY_AND_ASSIGN(MemoryHandler);

	public:

		virtual ~MemoryHandler();

		virtual size_t SizeBytes() const = 0;

		virtual UInt8* Data() const = 0;

		virtual MemoryHandler* Clone() const = 0;

	};

}
#endif