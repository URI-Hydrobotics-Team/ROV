// Generated by gencpp from file mvp_msgs/GetControlModesResponse.msg
// DO NOT EDIT!


#ifndef MVP_MSGS_MESSAGE_GETCONTROLMODESRESPONSE_H
#define MVP_MSGS_MESSAGE_GETCONTROLMODESRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mvp_msgs/ControlMode.h>

namespace mvp_msgs
{
template <class ContainerAllocator>
struct GetControlModesResponse_
{
  typedef GetControlModesResponse_<ContainerAllocator> Type;

  GetControlModesResponse_()
    : modes()  {
    }
  GetControlModesResponse_(const ContainerAllocator& _alloc)
    : modes(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::mvp_msgs::ControlMode_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::mvp_msgs::ControlMode_<ContainerAllocator> >> _modes_type;
  _modes_type modes;





  typedef boost::shared_ptr< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetControlModesResponse_

typedef ::mvp_msgs::GetControlModesResponse_<std::allocator<void> > GetControlModesResponse;

typedef boost::shared_ptr< ::mvp_msgs::GetControlModesResponse > GetControlModesResponsePtr;
typedef boost::shared_ptr< ::mvp_msgs::GetControlModesResponse const> GetControlModesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mvp_msgs::GetControlModesResponse_<ContainerAllocator1> & lhs, const ::mvp_msgs::GetControlModesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.modes == rhs.modes;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mvp_msgs::GetControlModesResponse_<ContainerAllocator1> & lhs, const ::mvp_msgs::GetControlModesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mvp_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "603519323f79819b7761d3e2017e75dd";
  }

  static const char* value(const ::mvp_msgs::GetControlModesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x603519323f79819bULL;
  static const uint64_t static_value2 = 0x7761d3e2017e75ddULL;
};

template<class ContainerAllocator>
struct DataType< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mvp_msgs/GetControlModesResponse";
  }

  static const char* value(const ::mvp_msgs::GetControlModesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mvp_msgs/ControlMode[] modes\n"
"\n"
"================================================================================\n"
"MSG: mvp_msgs/ControlMode\n"
"#\n"
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
"int32 DOF_X          = 0\n"
"int32 DOF_Y          = 1\n"
"int32 DOF_Z          = 2\n"
"int32 DOF_ROLL       = 3\n"
"int32 DOF_PITCH      = 4\n"
"int32 DOF_YAW        = 5\n"
"int32 DOF_SURGE      = 6\n"
"int32 DOF_SWAY       = 7\n"
"int32 DOF_HEAVE      = 8\n"
"int32 DOF_ROLL_RATE  = 9\n"
"int32 DOF_PITCH_RATE = 10\n"
"int32 DOF_YAW_RATE   = 11\n"
"\n"
"string name\n"
"int32[] dofs\n"
"\n"
"mvp_msgs/PIDgains pid_x\n"
"mvp_msgs/PIDgains pid_y\n"
"mvp_msgs/PIDgains pid_z\n"
"\n"
"mvp_msgs/PIDgains pid_roll\n"
"mvp_msgs/PIDgains pid_pitch\n"
"mvp_msgs/PIDgains pid_yaw\n"
"\n"
"mvp_msgs/PIDgains pid_surge\n"
"mvp_msgs/PIDgains pid_sway\n"
"mvp_msgs/PIDgains pid_heave\n"
"\n"
"mvp_msgs/PIDgains pid_roll_rate\n"
"mvp_msgs/PIDgains pid_pitch_rate\n"
"mvp_msgs/PIDgains pid_yaw_rate\n"
"================================================================================\n"
"MSG: mvp_msgs/PIDgains\n"
"#\n"
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
"float64 kp\n"
"float64 ki\n"
"float64 kd\n"
"float64 k_i_max\n"
"float64 k_i_min\n"
;
  }

  static const char* value(const ::mvp_msgs::GetControlModesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.modes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetControlModesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mvp_msgs::GetControlModesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mvp_msgs::GetControlModesResponse_<ContainerAllocator>& v)
  {
    s << indent << "modes[]" << std::endl;
    for (size_t i = 0; i < v.modes.size(); ++i)
    {
      s << indent << "  modes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::mvp_msgs::ControlMode_<ContainerAllocator> >::stream(s, indent + "    ", v.modes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MVP_MSGS_MESSAGE_GETCONTROLMODESRESPONSE_H
