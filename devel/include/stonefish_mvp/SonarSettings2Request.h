// Generated by gencpp from file stonefish_mvp/SonarSettings2Request.msg
// DO NOT EDIT!


#ifndef STONEFISH_MVP_MESSAGE_SONARSETTINGS2REQUEST_H
#define STONEFISH_MVP_MESSAGE_SONARSETTINGS2REQUEST_H


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
struct SonarSettings2Request_
{
  typedef SonarSettings2Request_<ContainerAllocator> Type;

  SonarSettings2Request_()
    : range_min(0.0)
    , range_max(0.0)
    , rotation_min(0.0)
    , rotation_max(0.0)
    , gain(0.0)  {
    }
  SonarSettings2Request_(const ContainerAllocator& _alloc)
    : range_min(0.0)
    , range_max(0.0)
    , rotation_min(0.0)
    , rotation_max(0.0)
    , gain(0.0)  {
  (void)_alloc;
    }



   typedef double _range_min_type;
  _range_min_type range_min;

   typedef double _range_max_type;
  _range_max_type range_max;

   typedef double _rotation_min_type;
  _rotation_min_type rotation_min;

   typedef double _rotation_max_type;
  _rotation_max_type rotation_max;

   typedef double _gain_type;
  _gain_type gain;





  typedef boost::shared_ptr< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> const> ConstPtr;

}; // struct SonarSettings2Request_

typedef ::stonefish_mvp::SonarSettings2Request_<std::allocator<void> > SonarSettings2Request;

typedef boost::shared_ptr< ::stonefish_mvp::SonarSettings2Request > SonarSettings2RequestPtr;
typedef boost::shared_ptr< ::stonefish_mvp::SonarSettings2Request const> SonarSettings2RequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator1> & lhs, const ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator2> & rhs)
{
  return lhs.range_min == rhs.range_min &&
    lhs.range_max == rhs.range_max &&
    lhs.rotation_min == rhs.rotation_min &&
    lhs.rotation_max == rhs.rotation_max &&
    lhs.gain == rhs.gain;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator1> & lhs, const ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace stonefish_mvp

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cfed8c2983058c6e85a18dcfe3512881";
  }

  static const char* value(const ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcfed8c2983058c6eULL;
  static const uint64_t static_value2 = 0x85a18dcfe3512881ULL;
};

template<class ContainerAllocator>
struct DataType< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stonefish_mvp/SonarSettings2Request";
  }

  static const char* value(const ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 range_min\n"
"float64 range_max\n"
"float64 rotation_min\n"
"float64 rotation_max\n"
"float64 gain\n"
;
  }

  static const char* value(const ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.range_min);
      stream.next(m.range_max);
      stream.next(m.rotation_min);
      stream.next(m.rotation_max);
      stream.next(m.gain);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SonarSettings2Request_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stonefish_mvp::SonarSettings2Request_<ContainerAllocator>& v)
  {
    s << indent << "range_min: ";
    Printer<double>::stream(s, indent + "  ", v.range_min);
    s << indent << "range_max: ";
    Printer<double>::stream(s, indent + "  ", v.range_max);
    s << indent << "rotation_min: ";
    Printer<double>::stream(s, indent + "  ", v.rotation_min);
    s << indent << "rotation_max: ";
    Printer<double>::stream(s, indent + "  ", v.rotation_max);
    s << indent << "gain: ";
    Printer<double>::stream(s, indent + "  ", v.gain);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STONEFISH_MVP_MESSAGE_SONARSETTINGS2REQUEST_H
