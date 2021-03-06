///////////////////////////////////////////////////////////////////////////////
// Copyright (c) Electronic Arts Inc. All rights reserved.
///////////////////////////////////////////////////////////////////////////////

#ifndef EASTL_UNORDERED_MAP_H
#define EASTL_UNORDERED_MAP_H

#include <eastl/internal/config.h>
#include <eastl/hash_map.h>

EA_ONCE()

namespace eastl
{
	/// unordered_map 
	///
	/// The original TR1 (technical report 1) used "hashMap" to name a hash
	/// table backed associative container of unique key-value pairs.  When the
	/// container was added to the C++11 standard the committee chose the name
	/// "unordered_map" to clarify that internally the elements are NOT sorted in
	/// any particular order.  We provide a template alias here to ensure feature
	/// parity with the original eastl::hashMap.
	///
	#if !defined(EA_COMPILER_NO_TEMPLATE_ALIASES)
		template <typename Key,
				  typename T,
				  typename Hash = eastl::hash<Key>,
				  typename Predicate = eastl::equal_to<Key>,
				  typename Allocator = EASTLAllocatorType,
				  bool bCacheHashCode = false>
		using unordered_map = hashMap<Key, T, Hash, Predicate, Allocator, bCacheHashCode>;
    #endif

    /// unordered_multimap
	///
	/// Similar template alias as "unordered_map" except the contained elements
	/// need not be unique. See "hashMultimap" for more details.
	///
	#if !defined(EA_COMPILER_NO_TEMPLATE_ALIASES)
		template <typename Key,
				  typename T,
				  typename Hash = eastl::hash<Key>,
				  typename Predicate = eastl::equal_to<Key>,
				  typename Allocator = EASTLAllocatorType,
				  bool bCacheHashCode = false>
		using unordered_multimap = hashMultimap<Key, T, Hash, Predicate, Allocator, bCacheHashCode>;
    #endif

} // namespace eastl

#endif // Header include guard

