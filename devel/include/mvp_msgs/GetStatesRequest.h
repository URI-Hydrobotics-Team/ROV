// Generated by gencpp from file mvp_msgs/GetStatesRequest.msg
// DO NOT EDIT!


#ifndef MVP_MSGS_MESSAGE_GETSTATESREQUEST_H
#define MVP_MSGS_MESSAGE_GETSTATESREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mvp_msgs
{
template <class ContainerAllocator>
struct GetStatesRequest_
{
  typedef GetStatesRequest_<ContainerAllocator> Type;

  GetStatesRequest_()
    {
    }
  GetStatesRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetStatesRequest_

typedef ::mvp_msgs::GetStatesRequest_<std::allocator<void> > GetStatesRequest;

typedef boost::shared_ptr< ::mvp_msgs::GetStatesRequest > GetStatesRequestPtr;
typedef boost::shared_ptr< ::mvp_msgs::GetStatesRequest const> GetStatesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mvp_msgs::GetStatesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace mvp_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::mvp_msgs::GetStatesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mvp_msgs/GetStatesRequest";
  }

  static const char* value(const ::mvp_msgs::GetStatesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> >
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
;
  }

  static const char* value(const ::mvp_msgs::GetStatesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetStatesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mvp_msgs::GetStatesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::mvp_msgs::GetStatesRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // MVP_MSGS_MESSAGE_GETSTATESREQUEST_H
