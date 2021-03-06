/*
 Copyright (C) 2007 <SWGEmu>. All rights reserved.
 Distribution of this file for usage outside of Core3 is prohibited.
 */

#ifndef ALLOCATOR_H_
#define ALLOCATOR_H_

#include "system/platform.h"

namespace sys {
  namespace mm {

	class Allocator {
	public:
		virtual ~Allocator() { }

		virtual void* allocate(size_t size) = 0;

		virtual void* reallocate(void* mem, size_t newsize) = 0;

		virtual void free(void* mem) = 0;

		virtual size_t sizeOf(void* mem) {
			return 0;
		}
};

  } // namespace mm
} // namespace sys

using namespace sys::mm;

#endif /* ALLOCATION_H_ */
