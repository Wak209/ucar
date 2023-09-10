// Generated by gencpp from file xf_mic_asr_offline/Set_Major_Mic_srvResponse.msg
// DO NOT EDIT!


#ifndef XF_MIC_ASR_OFFLINE_MESSAGE_SET_MAJOR_MIC_SRVRESPONSE_H
#define XF_MIC_ASR_OFFLINE_MESSAGE_SET_MAJOR_MIC_SRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace xf_mic_asr_offline
{
template <class ContainerAllocator>
struct Set_Major_Mic_srvResponse_
{
  typedef Set_Major_Mic_srvResponse_<ContainerAllocator> Type;

  Set_Major_Mic_srvResponse_()
    : result()
    , fail_reason()  {
    }
  Set_Major_Mic_srvResponse_(const ContainerAllocator& _alloc)
    : result(_alloc)
    , fail_reason(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _result_type;
  _result_type result;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _fail_reason_type;
  _fail_reason_type fail_reason;





  typedef boost::shared_ptr< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct Set_Major_Mic_srvResponse_

typedef ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<std::allocator<void> > Set_Major_Mic_srvResponse;

typedef boost::shared_ptr< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse > Set_Major_Mic_srvResponsePtr;
typedef boost::shared_ptr< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse const> Set_Major_Mic_srvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace xf_mic_asr_offline

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': False, 'HasHeader': False}
// {'xf_mic_asr_offline': ['/home/inano/ucar_ws/src/xf_mic_asr_offline/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c69ca9071ec7e43db13595b361d43ae5";
  }

  static const char* value(const ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc69ca9071ec7e43dULL;
  static const uint64_t static_value2 = 0xb13595b361d43ae5ULL;
};

template<class ContainerAllocator>
struct DataType< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xf_mic_asr_offline/Set_Major_Mic_srvResponse";
  }

  static const char* value(const ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string result\n"
"string fail_reason\n"
"\n"
;
  }

  static const char* value(const ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.fail_reason);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Set_Major_Mic_srvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xf_mic_asr_offline::Set_Major_Mic_srvResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.result);
    s << indent << "fail_reason: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.fail_reason);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XF_MIC_ASR_OFFLINE_MESSAGE_SET_MAJOR_MIC_SRVRESPONSE_H
