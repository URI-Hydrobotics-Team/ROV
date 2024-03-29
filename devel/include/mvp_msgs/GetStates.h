// Generated by gencpp from file mvp_msgs/GetStates.msg
// DO NOT EDIT!


#ifndef MVP_MSGS_MESSAGE_GETSTATES_H
#define MVP_MSGS_MESSAGE_GETSTATES_H

#include <ros/service_traits.h>


#include <mvp_msgs/GetStatesRequest.h>
#include <mvp_msgs/GetStatesResponse.h>


namespace mvp_msgs
{

struct GetStates
{

typedef GetStatesRequest Request;
typedef GetStatesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetStates
} // namespace mvp_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mvp_msgs::GetStates > {
  static const char* value()
  {
    return "7fb91daf3e8086897a6eccc9f862d3a8";
  }

  static const char* value(const ::mvp_msgs::GetStates&) { return value(); }
};

template<>
struct DataType< ::mvp_msgs::GetStates > {
  static const char* value()
  {
    return "mvp_msgs/GetStates";
  }

  static const char* value(const ::mvp_msgs::GetStates&) { return value(); }
};


// service_traits::MD5Sum< ::mvp_msgs::GetStatesRequest> should match
// service_traits::MD5Sum< ::mvp_msgs::GetStates >
template<>
struct MD5Sum< ::mvp_msgs::GetStatesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mvp_msgs::GetStates >::value();
  }
  static const char* value(const ::mvp_msgs::GetStatesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mvp_msgs::GetStatesRequest> should match
// service_traits::DataType< ::mvp_msgs::GetStates >
template<>
struct DataType< ::mvp_msgs::GetStatesRequest>
{
  static const char* value()
  {
    return DataType< ::mvp_msgs::GetStates >::value();
  }
  static const char* value(const ::mvp_msgs::GetStatesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mvp_msgs::GetStatesResponse> should match
// service_traits::MD5Sum< ::mvp_msgs::GetStates >
template<>
struct MD5Sum< ::mvp_msgs::GetStatesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mvp_msgs::GetStates >::value();
  }
  static const char* value(const ::mvp_msgs::GetStatesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mvp_msgs::GetStatesResponse> should match
// service_traits::DataType< ::mvp_msgs::GetStates >
template<>
struct DataType< ::mvp_msgs::GetStatesResponse>
{
  static const char* value()
  {
    return DataType< ::mvp_msgs::GetStates >::value();
  }
  static const char* value(const ::mvp_msgs::GetStatesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MVP_MSGS_MESSAGE_GETSTATES_H
