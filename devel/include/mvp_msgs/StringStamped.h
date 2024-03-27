// Generated by gencpp from file mvp_msgs/StringStamped.msg
// DO NOT EDIT!


#ifndef MVP_MSGS_MESSAGE_STRINGSTAMPED_H
#define MVP_MSGS_MESSAGE_STRINGSTAMPED_H


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
struct StringStamped_
{
  typedef StringStamped_<ContainerAllocator> Type;

  StringStamped_()
    : header()
    , data()  {
    }
  StringStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::mvp_msgs::StringStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mvp_msgs::StringStamped_<ContainerAllocator> const> ConstPtr;

}; // struct StringStamped_

typedef ::mvp_msgs::StringStamped_<std::allocator<void> > StringStamped;

typedef boost::shared_ptr< ::mvp_msgs::StringStamped > StringStampedPtr;
typedef boost::shared_ptr< ::mvp_msgs::StringStamped const> StringStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mvp_msgs::StringStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mvp_msgs::StringStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mvp_msgs::StringStamped_<ContainerAllocator1> & lhs, const ::mvp_msgs::StringStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mvp_msgs::StringStamped_<ContainerAllocator1> & lhs, const ::mvp_msgs::StringStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mvp_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mvp_msgs::StringStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mvp_msgs::StringStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mvp_msgs::StringStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mvp_msgs::StringStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_msgs::StringStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_msgs::StringStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mvp_msgs::StringStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c99a9440709e4d4a9716d55b8270d5e7";
  }

  static const char* value(const ::mvp_msgs::StringStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc99a9440709e4d4aULL;
  static const uint64_t static_value2 = 0x9716d55b8270d5e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::mvp_msgs::StringStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mvp_msgs/StringStamped";
  }

  static const char* value(const ::mvp_msgs::StringStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mvp_msgs::StringStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string data\n"
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

  static const char* value(const ::mvp_msgs::StringStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mvp_msgs::StringStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StringStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mvp_msgs::StringStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mvp_msgs::StringStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MVP_MSGS_MESSAGE_STRINGSTAMPED_H
