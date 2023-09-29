// Generated by gencpp from file stonefish_mvp/SonarSettingsResponse.msg
// DO NOT EDIT!


#ifndef STONEFISH_MVP_MESSAGE_SONARSETTINGSRESPONSE_H
#define STONEFISH_MVP_MESSAGE_SONARSETTINGSRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace stonefish_mvp
{
template <class ContainerAllocator>
struct SonarSettingsResponse_
{
  typedef SonarSettingsResponse_<ContainerAllocator> Type;

  SonarSettingsResponse_()
    : success(false)
    , message()  {
    }
  SonarSettingsResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SonarSettingsResponse_

typedef ::stonefish_mvp::SonarSettingsResponse_<std::allocator<void> > SonarSettingsResponse;

typedef boost::shared_ptr< ::stonefish_mvp::SonarSettingsResponse > SonarSettingsResponsePtr;
typedef boost::shared_ptr< ::stonefish_mvp::SonarSettingsResponse const> SonarSettingsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator1> & lhs, const ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator1> & lhs, const ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace stonefish_mvp

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stonefish_mvp/SonarSettingsResponse";
  }

  static const char* value(const ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string message\n"
;
  }

  static const char* value(const ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SonarSettingsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stonefish_mvp::SonarSettingsResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STONEFISH_MVP_MESSAGE_SONARSETTINGSRESPONSE_H
