/* Auto-generated by genmsg_cpp for file /home/armuser/ros/pose_msgs/srv/GetPoses.srv */
#ifndef POSE_MSGS_SERVICE_GETPOSES_H
#define POSE_MSGS_SERVICE_GETPOSES_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"



#include "pose_msgs/Transforms.h"

namespace pose_msgs
{
template <class ContainerAllocator>
struct GetPosesRequest_ {
  typedef GetPosesRequest_<ContainerAllocator> Type;

  GetPosesRequest_()
  {
  }

  GetPosesRequest_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "pose_msgs/GetPosesRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "61741a788bceb5729711c080d587cc52"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr< ::pose_msgs::GetPosesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pose_msgs::GetPosesRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetPosesRequest
typedef  ::pose_msgs::GetPosesRequest_<std::allocator<void> > GetPosesRequest;

typedef boost::shared_ptr< ::pose_msgs::GetPosesRequest> GetPosesRequestPtr;
typedef boost::shared_ptr< ::pose_msgs::GetPosesRequest const> GetPosesRequestConstPtr;


template <class ContainerAllocator>
struct GetPosesResponse_ {
  typedef GetPosesResponse_<ContainerAllocator> Type;

  GetPosesResponse_()
  : transforms()
  {
  }

  GetPosesResponse_(const ContainerAllocator& _alloc)
  : transforms(_alloc)
  {
  }

  typedef  ::pose_msgs::Transforms_<ContainerAllocator>  _transforms_type;
   ::pose_msgs::Transforms_<ContainerAllocator>  transforms;


private:
  static const char* __s_getDataType_() { return "pose_msgs/GetPosesResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "61741a788bceb5729711c080d587cc52"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "61741a788bceb5729711c080d587cc52"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "pose_msgs/Transforms transforms\n\
\n\
================================================================================\n\
MSG: pose_msgs/Transforms\n\
# This represents a transormation message\n\
Header header\n\
pose_msgs/Transform[] transforms\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: pose_msgs/Transform\n\
# This represents a transormation message\n\
\n\
time time\n\
string frameSrc\n\
string frameDes\n\
geometry_msgs/Vector3 translation\n\
geometry_msgs/Vector3 rotation\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, transforms);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, transforms);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(transforms);
    return size;
  }

  typedef boost::shared_ptr< ::pose_msgs::GetPosesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pose_msgs::GetPosesResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetPosesResponse
typedef  ::pose_msgs::GetPosesResponse_<std::allocator<void> > GetPosesResponse;

typedef boost::shared_ptr< ::pose_msgs::GetPosesResponse> GetPosesResponsePtr;
typedef boost::shared_ptr< ::pose_msgs::GetPosesResponse const> GetPosesResponseConstPtr;

struct GetPoses
{

typedef GetPosesRequest Request;
typedef GetPosesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct GetPoses
} // namespace pose_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pose_msgs::GetPosesRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pose_msgs::GetPosesRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pose_msgs::GetPosesRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::pose_msgs::GetPosesRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pose_msgs::GetPosesRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pose_msgs/GetPosesRequest";
  }

  static const char* value(const  ::pose_msgs::GetPosesRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pose_msgs::GetPosesRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::pose_msgs::GetPosesRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::pose_msgs::GetPosesRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pose_msgs::GetPosesResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pose_msgs::GetPosesResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pose_msgs::GetPosesResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "61741a788bceb5729711c080d587cc52";
  }

  static const char* value(const  ::pose_msgs::GetPosesResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x61741a788bceb572ULL;
  static const uint64_t static_value2 = 0x9711c080d587cc52ULL;
};

template<class ContainerAllocator>
struct DataType< ::pose_msgs::GetPosesResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pose_msgs/GetPosesResponse";
  }

  static const char* value(const  ::pose_msgs::GetPosesResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pose_msgs::GetPosesResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pose_msgs/Transforms transforms\n\
\n\
================================================================================\n\
MSG: pose_msgs/Transforms\n\
# This represents a transormation message\n\
Header header\n\
pose_msgs/Transform[] transforms\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: pose_msgs/Transform\n\
# This represents a transormation message\n\
\n\
time time\n\
string frameSrc\n\
string frameDes\n\
geometry_msgs/Vector3 translation\n\
geometry_msgs/Vector3 rotation\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::pose_msgs::GetPosesResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pose_msgs::GetPosesRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetPosesRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pose_msgs::GetPosesResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.transforms);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetPosesResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<pose_msgs::GetPoses> {
  static const char* value() 
  {
    return "61741a788bceb5729711c080d587cc52";
  }

  static const char* value(const pose_msgs::GetPoses&) { return value(); } 
};

template<>
struct DataType<pose_msgs::GetPoses> {
  static const char* value() 
  {
    return "pose_msgs/GetPoses";
  }

  static const char* value(const pose_msgs::GetPoses&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<pose_msgs::GetPosesRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "61741a788bceb5729711c080d587cc52";
  }

  static const char* value(const pose_msgs::GetPosesRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<pose_msgs::GetPosesRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pose_msgs/GetPoses";
  }

  static const char* value(const pose_msgs::GetPosesRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<pose_msgs::GetPosesResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "61741a788bceb5729711c080d587cc52";
  }

  static const char* value(const pose_msgs::GetPosesResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<pose_msgs::GetPosesResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pose_msgs/GetPoses";
  }

  static const char* value(const pose_msgs::GetPosesResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // POSE_MSGS_SERVICE_GETPOSES_H
