// Generated by gencpp from file tf/tfMessage.msg
// DO NOT EDIT!


#ifndef TF_MESSAGE_TFMESSAGE_H
#define TF_MESSAGE_TFMESSAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/TransformStamped.h>

namespace tf
{
template <class ContainerAllocator>
struct tfMessage_
{
  typedef tfMessage_<ContainerAllocator> Type;

  tfMessage_()
    : transforms()  {
    }
  tfMessage_(const ContainerAllocator& _alloc)
    : transforms(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::TransformStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::TransformStamped_<ContainerAllocator> >::other >  _transforms_type;
  _transforms_type transforms;





  typedef boost::shared_ptr< ::tf::tfMessage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf::tfMessage_<ContainerAllocator> const> ConstPtr;

}; // struct tfMessage_

typedef ::tf::tfMessage_<std::allocator<void> > tfMessage;

typedef boost::shared_ptr< ::tf::tfMessage > tfMessagePtr;
typedef boost::shared_ptr< ::tf::tfMessage const> tfMessageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tf::tfMessage_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tf::tfMessage_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tf

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': False, 'HasHeader': False}
// {'tf': ['/home/inano/ucar_ws/src/geometry/tf/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::tf::tfMessage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf::tfMessage_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf::tfMessage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf::tfMessage_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf::tfMessage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf::tfMessage_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tf::tfMessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "94810edda583a504dfda3829e70d7eec";
  }

  static const char* value(const ::tf::tfMessage_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x94810edda583a504ULL;
  static const uint64_t static_value2 = 0xdfda3829e70d7eecULL;
};

template<class ContainerAllocator>
struct DataType< ::tf::tfMessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tf/tfMessage";
  }

  static const char* value(const ::tf::tfMessage_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tf::tfMessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/TransformStamped[] transforms\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/TransformStamped\n"
"# This expresses a transform from coordinate frame header.frame_id\n"
"# to the coordinate frame child_frame_id\n"
"#\n"
"# This message is mostly used by the \n"
"# <a href=\"http://wiki.ros.org/tf\">tf</a> package. \n"
"# See its documentation for more information.\n"
"\n"
"Header header\n"
"string child_frame_id # the frame id of the child frame\n"
"Transform transform\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::tf::tfMessage_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tf::tfMessage_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.transforms);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct tfMessage_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf::tfMessage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tf::tfMessage_<ContainerAllocator>& v)
  {
    s << indent << "transforms[]" << std::endl;
    for (size_t i = 0; i < v.transforms.size(); ++i)
    {
      s << indent << "  transforms[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::TransformStamped_<ContainerAllocator> >::stream(s, indent + "    ", v.transforms[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TF_MESSAGE_TFMESSAGE_H
