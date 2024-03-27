// Generated by gencpp from file mvp_msgs/Float64StampedWithVariance.msg
// DO NOT EDIT!


#ifndef MVP_MSGS_MESSAGE_FLOAT64STAMPEDWITHVARIANCE_H
#define MVP_MSGS_MESSAGE_FLOAT64STAMPEDWITHVARIANCE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mvp_msgs
{
template <class ContainerAllocator>
struct Float64StampedWithVariance_
{
  typedef Float64StampedWithVariance_<ContainerAllocator> Type;

  Float64StampedWithVariance_()
    : header()
    , data(0.0)
    , variance(0.0)  {
    }
  Float64StampedWithVariance_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(0.0)
    , variance(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _data_type;
  _data_type data;

   typedef double _variance_type;
  _variance_type variance;





  typedef boost::shared_ptr< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> const> ConstPtr;

}; // struct Float64StampedWithVariance_

typedef ::mvp_msgs::Float64StampedWithVariance_<std::allocator<void> > Float64StampedWithVariance;

typedef boost::shared_ptr< ::mvp_msgs::Float64StampedWithVariance > Float64StampedWithVariancePtr;
typedef boost::shared_ptr< ::mvp_msgs::Float64StampedWithVariance const> Float64StampedWithVarianceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator1> & lhs, const ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data &&
    lhs.variance == rhs.variance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator1> & lhs, const ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mvp_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a324558af0ebd182ef2dd7198a541273";
  }

  static const char* value(const ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa324558af0ebd182ULL;
  static const uint64_t static_value2 = 0xef2dd7198a541273ULL;
};

template<class ContainerAllocator>
struct DataType< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mvp_msgs/Float64StampedWithVariance";
  }

  static const char* value(const ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"#   This file is part of MVP-Mission program.\n"
"#\n"
"#   MVP-Mission is free software: you can redistribute it and/or modify\n"
"#   it under the terms of the GNU General Public License as published by\n"
"#   the Free Software Foundation, either version 3 of the License, or\n"
"#   (at your option) any later version.\n"
"#\n"
"#   MVP-Mission is distributed in the hope that it will be useful,\n"
"#   but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"#   GNU General Public License for more details.\n"
"#\n"
"#   You should have received a copy of the GNU General Public License\n"
"#   along with MVP-Mission.  If not, see <https://www.gnu.org/licenses/>.\n"
"#\n"
"#   Author: Emir Cem Gezer\n"
"#   Email: emircem@uri.edu;emircem.gezer@gmail.com\n"
"#   Year: 2022\n"
"#\n"
"#   Copyright (C) 2022 Smart Ocean Systems Laboratory\n"
"#\n"
"\n"
"Header header\n"
"float64 data\n"
"float64 variance\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
      stream.next(m.variance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Float64StampedWithVariance_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mvp_msgs::Float64StampedWithVariance_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data: ";
    Printer<double>::stream(s, indent + "  ", v.data);
    s << indent << "variance: ";
    Printer<double>::stream(s, indent + "  ", v.variance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MVP_MSGS_MESSAGE_FLOAT64STAMPEDWITHVARIANCE_H
