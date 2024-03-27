# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mvp_msgs/MSISInfo.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class MSISInfo(genpy.Message):
  _md5sum = "59d3f83483205f23af9acdf27bc7d76d"
  _type = "mvp_msgs/MSISInfo"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """#
# This message defines meta information for a mechanical scanning imaging sonar (MSIS).
#

# Time of sonar acquisition, sonar coordinate frame ID and seq 
Header header

# size of the rotation step [deg]
float64 step_angle

# a range resolution of the sonar image
uint64 bins

# horizontal beam width [deg]
float32 horizontal_beam

# vertical beam width [deg]
float32 vertical_beam

# minimum measured range [m]
float64 min_range

# maximum measured range [m]
float64 max_range

# minimum rotation of the sonar head [deg]
float32 min_rotation

# maximum rotation of the sonar head [deg]
float32 max_rotation

# gain
float64 gain 
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','step_angle','bins','horizontal_beam','vertical_beam','min_range','max_range','min_rotation','max_rotation','gain']
  _slot_types = ['std_msgs/Header','float64','uint64','float32','float32','float64','float64','float32','float32','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,step_angle,bins,horizontal_beam,vertical_beam,min_range,max_range,min_rotation,max_rotation,gain

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MSISInfo, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.step_angle is None:
        self.step_angle = 0.
      if self.bins is None:
        self.bins = 0
      if self.horizontal_beam is None:
        self.horizontal_beam = 0.
      if self.vertical_beam is None:
        self.vertical_beam = 0.
      if self.min_range is None:
        self.min_range = 0.
      if self.max_range is None:
        self.max_range = 0.
      if self.min_rotation is None:
        self.min_rotation = 0.
      if self.max_rotation is None:
        self.max_rotation = 0.
      if self.gain is None:
        self.gain = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.step_angle = 0.
      self.bins = 0
      self.horizontal_beam = 0.
      self.vertical_beam = 0.
      self.min_range = 0.
      self.max_range = 0.
      self.min_rotation = 0.
      self.max_rotation = 0.
      self.gain = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_dQ2f2d2fd().pack(_x.step_angle, _x.bins, _x.horizontal_beam, _x.vertical_beam, _x.min_range, _x.max_range, _x.min_rotation, _x.max_rotation, _x.gain))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.step_angle, _x.bins, _x.horizontal_beam, _x.vertical_beam, _x.min_range, _x.max_range, _x.min_rotation, _x.max_rotation, _x.gain,) = _get_struct_dQ2f2d2fd().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_dQ2f2d2fd().pack(_x.step_angle, _x.bins, _x.horizontal_beam, _x.vertical_beam, _x.min_range, _x.max_range, _x.min_rotation, _x.max_rotation, _x.gain))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.step_angle, _x.bins, _x.horizontal_beam, _x.vertical_beam, _x.min_range, _x.max_range, _x.min_rotation, _x.max_rotation, _x.gain,) = _get_struct_dQ2f2d2fd().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_dQ2f2d2fd = None
def _get_struct_dQ2f2d2fd():
    global _struct_dQ2f2d2fd
    if _struct_dQ2f2d2fd is None:
        _struct_dQ2f2d2fd = struct.Struct("<dQ2f2d2fd")
    return _struct_dQ2f2d2fd
