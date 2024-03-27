// Generated by gencpp from file mvp_msgs/PwmSignal.msg
// DO NOT EDIT!


#ifndef MVP_MSGS_MESSAGE_PWMSIGNAL_H
#define MVP_MSGS_MESSAGE_PWMSIGNAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Float32.h>
#include <std_msgs/Int16.h>

namespace mvp_msgs
{
template <class ContainerAllocator>
struct PwmSignal_
{
  typedef PwmSignal_<ContainerAllocator> Type;

  PwmSignal_()
    : signal()
    , channel()  {
    }
  PwmSignal_(const ContainerAllocator& _alloc)
    : signal(_alloc)
    , channel(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Float32_<ContainerAllocator>  _signal_type;
  _signal_type signal;

   typedef  ::std_msgs::Int16_<ContainerAllocator>  _channel_type;
  _channel_type channel;





  typedef boost::shared_ptr< ::mvp_msgs::PwmSignal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mvp_msgs::PwmSignal_<ContainerAllocator> const> ConstPtr;

}; // struct PwmSignal_

typedef ::mvp_msgs::PwmSignal_<std::allocator<void> > PwmSignal;

typedef boost::shared_ptr< ::mvp_msgs::PwmSignal > PwmSignalPtr;
typedef boost::shared_ptr< ::mvp_msgs::PwmSignal const> PwmSignalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mvp_msgs::PwmSignal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mvp_msgs::PwmSignal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mvp_msgs::PwmSignal_<ContainerAllocator1> & lhs, const ::mvp_msgs::PwmSignal_<ContainerAllocator2> & rhs)
{
  return lhs.signal == rhs.signal &&
    lhs.channel == rhs.channel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mvp_msgs::PwmSignal_<ContainerAllocator1> & lhs, const ::mvp_msgs::PwmSignal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mvp_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mvp_msgs::PwmSignal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mvp_msgs::PwmSignal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mvp_msgs::PwmSignal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mvp_msgs::PwmSignal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_msgs::PwmSignal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_msgs::PwmSignal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mvp_msgs::PwmSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "991ddd8c160299aa4b755054be922e8d";
  }

  static const char* value(const ::mvp_msgs::PwmSignal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x991ddd8c160299aaULL;
  static const uint64_t static_value2 = 0x4b755054be922e8dULL;
};

template<class ContainerAllocator>
struct DataType< ::mvp_msgs::PwmSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mvp_msgs/PwmSignal";
  }

  static const char* value(const ::mvp_msgs::PwmSignal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mvp_msgs::PwmSignal_<ContainerAllocator> >
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
"std_msgs/Float32 signal\n"
"std_msgs/Int16 channel\n"
"================================================================================\n"
"MSG: std_msgs/Float32\n"
"float32 data\n"
"================================================================================\n"
"MSG: std_msgs/Int16\n"
"int16 data\n"
;
  }

  static const char* value(const ::mvp_msgs::PwmSignal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mvp_msgs::PwmSignal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.signal);
      stream.next(m.channel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PwmSignal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mvp_msgs::PwmSignal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mvp_msgs::PwmSignal_<ContainerAllocator>& v)
  {
    s << indent << "signal: ";
    s << std::endl;
    Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "  ", v.signal);
    s << indent << "channel: ";
    s << std::endl;
    Printer< ::std_msgs::Int16_<ContainerAllocator> >::stream(s, indent + "  ", v.channel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MVP_MSGS_MESSAGE_PWMSIGNAL_H
