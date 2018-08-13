// Generated by gencpp from file seer/SeerFeedback.msg
// DO NOT EDIT!


#ifndef SEER_MESSAGE_SEERFEEDBACK_H
#define SEER_MESSAGE_SEERFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace seer
{
template <class ContainerAllocator>
struct SeerFeedback_
{
  typedef SeerFeedback_<ContainerAllocator> Type;

  SeerFeedback_()
    : obstacle_scan(0)
    , master_ammobox_list()
    , wing_ammobox_list()  {
    }
  SeerFeedback_(const ContainerAllocator& _alloc)
    : obstacle_scan(0)
    , master_ammobox_list(_alloc)
    , wing_ammobox_list(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _obstacle_scan_type;
  _obstacle_scan_type obstacle_scan;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _master_ammobox_list_type;
  _master_ammobox_list_type master_ammobox_list;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _wing_ammobox_list_type;
  _wing_ammobox_list_type wing_ammobox_list;





  typedef boost::shared_ptr< ::seer::SeerFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::seer::SeerFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct SeerFeedback_

typedef ::seer::SeerFeedback_<std::allocator<void> > SeerFeedback;

typedef boost::shared_ptr< ::seer::SeerFeedback > SeerFeedbackPtr;
typedef boost::shared_ptr< ::seer::SeerFeedback const> SeerFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::seer::SeerFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::seer::SeerFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace seer

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'seer': ['/home/zwa/my_ws_actual/devel/share/seer/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::seer::SeerFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::seer::SeerFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::seer::SeerFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::seer::SeerFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::seer::SeerFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::seer::SeerFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::seer::SeerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f6014b7b0e96c76ad725fed5743d41f7";
  }

  static const char* value(const ::seer::SeerFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf6014b7b0e96c76aULL;
  static const uint64_t static_value2 = 0xd725fed5743d41f7ULL;
};

template<class ContainerAllocator>
struct DataType< ::seer::SeerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "seer/SeerFeedback";
  }

  static const char* value(const ::seer::SeerFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::seer::SeerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
int32 obstacle_scan\n\
int32[] master_ammobox_list\n\
int32[] wing_ammobox_list\n\
\n\
";
  }

  static const char* value(const ::seer::SeerFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::seer::SeerFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.obstacle_scan);
      stream.next(m.master_ammobox_list);
      stream.next(m.wing_ammobox_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SeerFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::seer::SeerFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::seer::SeerFeedback_<ContainerAllocator>& v)
  {
    s << indent << "obstacle_scan: ";
    Printer<int32_t>::stream(s, indent + "  ", v.obstacle_scan);
    s << indent << "master_ammobox_list[]" << std::endl;
    for (size_t i = 0; i < v.master_ammobox_list.size(); ++i)
    {
      s << indent << "  master_ammobox_list[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.master_ammobox_list[i]);
    }
    s << indent << "wing_ammobox_list[]" << std::endl;
    for (size_t i = 0; i < v.wing_ammobox_list.size(); ++i)
    {
      s << indent << "  wing_ammobox_list[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.wing_ammobox_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEER_MESSAGE_SEERFEEDBACK_H
