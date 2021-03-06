/**
 * @file missing_policy.hpp
 * @author Keon Kim
 *
 */
#ifndef MLPACK_CORE_DATA_MAP_POLICIES_DATATYPE_HPP
#define MLPACK_CORE_DATA_MAP_POLICIES_DATATYPE_HPP

#include <mlpack/core.hpp>

namespace mlpack {
namespace data {
/**
 * The Datatype enum specifies the types of data mlpack algorithms can use.
 * The vast majority of mlpack algorithms can only use numeric data (i.e.
 * float/double/etc.), but some algorithms can use categorical data, specified
 * via this Datatype enum and the DatasetMapper class.
 */
enum Datatype : bool /* [> bool is all the precision we need for two types <] */
{
  numeric = 0,
  categorical = 1
};

} // namespace data
} // namespace mlpack

#endif
