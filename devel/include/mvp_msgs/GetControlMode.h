// Generated by gencpp from file mvp_msgs/GetControlMode.msg
// DO NOT EDIT!


#ifndef MVP_MSGS_MESSAGE_GETCONTROLMODE_H
#define MVP_MSGS_MESSAGE_GETCONTROLMODE_H

#include <ros/service_traits.h>


#include <mvp_msgs/GetControlModeRequest.h>
#include <mvp_msgs/GetControlModeResponse.h>


namespace mvp_msgs
{

struct GetControlMode
{

typedef GetControlModeRequest Request;
typedef GetControlModeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetControlMode
} // namespace mvp_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mvp_msgs::GetControlMode > {
  static const char* value()
  {
    return "fb5640b19687f4d5df9afe0ad9c910ef";
  }

  static const char* value(const ::mvp_msgs::GetControlMode&) { return value(); }
};

template<>
struct DataType< ::mvp_msgs::GetControlMode > {
  static const char* value()
  {
    return "mvp_msgs/GetControlMode";
  }

  static const char* value(const ::mvp_msgs::GetControlMode&) { return value(); }
};


// service_traits::MD5Sum< ::mvp_msgs::GetControlModeRequest> should match
// service_traits::MD5Sum< ::mvp_msgs::GetControlMode >
template<>
struct MD5Sum< ::mvp_msgs::GetControlModeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mvp_msgs::GetControlMode >::value();
  }
  static const char* value(const ::mvp_msgs::GetControlModeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mvp_msgs::GetControlModeRequest> should match
// service_traits::DataType< ::mvp_msgs::GetControlMode >
template<>
struct DataType< ::mvp_msgs::GetControlModeRequest>
{
  static const char* value()
  {
    return DataType< ::mvp_msgs::GetControlMode >::value();
  }
  static const char* value(const ::mvp_msgs::GetControlModeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mvp_msgs::GetControlModeResponse> should match
// service_traits::MD5Sum< ::mvp_msgs::GetControlMode >
template<>
struct MD5Sum< ::mvp_msgs::GetControlModeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mvp_msgs::GetControlMode >::value();
  }
  static const char* value(const ::mvp_msgs::GetControlModeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mvp_msgs::GetControlModeResponse> should match
// service_traits::DataType< ::mvp_msgs::GetControlMode >
template<>
struct DataType< ::mvp_msgs::GetControlModeResponse>
{
  static const char* value()
  {
    return DataType< ::mvp_msgs::GetControlMode >::value();
  }
  static const char* value(const ::mvp_msgs::GetControlModeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MVP_MSGS_MESSAGE_GETCONTROLMODE_H
