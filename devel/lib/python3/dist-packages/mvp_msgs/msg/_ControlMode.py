# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mvp_msgs/ControlMode.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import mvp_msgs.msg

class ControlMode(genpy.Message):
  _md5sum = "5d6ffb9dbcb11283ec4e54683a5c1e8d"
  _type = "mvp_msgs/ControlMode"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#
#   This file is part of MVP-Mission program.
#
#   MVP-Mission is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#
#   MVP-Mission is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with MVP-Mission.  If not, see <https://www.gnu.org/licenses/>.
#
#   Author: Emir Cem Gezer
#   Email: emircem@uri.edu;emircem.gezer@gmail.com
#   Year: 2022
#
#   Copyright (C) 2022 Smart Ocean Systems Laboratory
#

int32 DOF_X          = 0
int32 DOF_Y          = 1
int32 DOF_Z          = 2
int32 DOF_ROLL       = 3
int32 DOF_PITCH      = 4
int32 DOF_YAW        = 5
int32 DOF_SURGE      = 6
int32 DOF_SWAY       = 7
int32 DOF_HEAVE      = 8
int32 DOF_ROLL_RATE  = 9
int32 DOF_PITCH_RATE = 10
int32 DOF_YAW_RATE   = 11

string name
int32[] dofs

mvp_msgs/PIDgains pid_x
mvp_msgs/PIDgains pid_y
mvp_msgs/PIDgains pid_z

mvp_msgs/PIDgains pid_roll
mvp_msgs/PIDgains pid_pitch
mvp_msgs/PIDgains pid_yaw

mvp_msgs/PIDgains pid_surge
mvp_msgs/PIDgains pid_sway
mvp_msgs/PIDgains pid_heave

mvp_msgs/PIDgains pid_roll_rate
mvp_msgs/PIDgains pid_pitch_rate
mvp_msgs/PIDgains pid_yaw_rate
================================================================================
MSG: mvp_msgs/PIDgains
#
#   This file is part of MVP-Mission program.
#
#   MVP-Mission is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#
#   MVP-Mission is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with MVP-Mission.  If not, see <https://www.gnu.org/licenses/>.
#
#   Author: Emir Cem Gezer
#   Email: emircem@uri.edu;emircem.gezer@gmail.com
#   Year: 2022
#
#   Copyright (C) 2022 Smart Ocean Systems Laboratory
#

float64 kp
float64 ki
float64 kd
float64 k_i_max
float64 k_i_min"""
  # Pseudo-constants
  DOF_X = 0
  DOF_Y = 1
  DOF_Z = 2
  DOF_ROLL = 3
  DOF_PITCH = 4
  DOF_YAW = 5
  DOF_SURGE = 6
  DOF_SWAY = 7
  DOF_HEAVE = 8
  DOF_ROLL_RATE = 9
  DOF_PITCH_RATE = 10
  DOF_YAW_RATE = 11

  __slots__ = ['name','dofs','pid_x','pid_y','pid_z','pid_roll','pid_pitch','pid_yaw','pid_surge','pid_sway','pid_heave','pid_roll_rate','pid_pitch_rate','pid_yaw_rate']
  _slot_types = ['string','int32[]','mvp_msgs/PIDgains','mvp_msgs/PIDgains','mvp_msgs/PIDgains','mvp_msgs/PIDgains','mvp_msgs/PIDgains','mvp_msgs/PIDgains','mvp_msgs/PIDgains','mvp_msgs/PIDgains','mvp_msgs/PIDgains','mvp_msgs/PIDgains','mvp_msgs/PIDgains','mvp_msgs/PIDgains']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       name,dofs,pid_x,pid_y,pid_z,pid_roll,pid_pitch,pid_yaw,pid_surge,pid_sway,pid_heave,pid_roll_rate,pid_pitch_rate,pid_yaw_rate

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ControlMode, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.name is None:
        self.name = ''
      if self.dofs is None:
        self.dofs = []
      if self.pid_x is None:
        self.pid_x = mvp_msgs.msg.PIDgains()
      if self.pid_y is None:
        self.pid_y = mvp_msgs.msg.PIDgains()
      if self.pid_z is None:
        self.pid_z = mvp_msgs.msg.PIDgains()
      if self.pid_roll is None:
        self.pid_roll = mvp_msgs.msg.PIDgains()
      if self.pid_pitch is None:
        self.pid_pitch = mvp_msgs.msg.PIDgains()
      if self.pid_yaw is None:
        self.pid_yaw = mvp_msgs.msg.PIDgains()
      if self.pid_surge is None:
        self.pid_surge = mvp_msgs.msg.PIDgains()
      if self.pid_sway is None:
        self.pid_sway = mvp_msgs.msg.PIDgains()
      if self.pid_heave is None:
        self.pid_heave = mvp_msgs.msg.PIDgains()
      if self.pid_roll_rate is None:
        self.pid_roll_rate = mvp_msgs.msg.PIDgains()
      if self.pid_pitch_rate is None:
        self.pid_pitch_rate = mvp_msgs.msg.PIDgains()
      if self.pid_yaw_rate is None:
        self.pid_yaw_rate = mvp_msgs.msg.PIDgains()
    else:
      self.name = ''
      self.dofs = []
      self.pid_x = mvp_msgs.msg.PIDgains()
      self.pid_y = mvp_msgs.msg.PIDgains()
      self.pid_z = mvp_msgs.msg.PIDgains()
      self.pid_roll = mvp_msgs.msg.PIDgains()
      self.pid_pitch = mvp_msgs.msg.PIDgains()
      self.pid_yaw = mvp_msgs.msg.PIDgains()
      self.pid_surge = mvp_msgs.msg.PIDgains()
      self.pid_sway = mvp_msgs.msg.PIDgains()
      self.pid_heave = mvp_msgs.msg.PIDgains()
      self.pid_roll_rate = mvp_msgs.msg.PIDgains()
      self.pid_pitch_rate = mvp_msgs.msg.PIDgains()
      self.pid_yaw_rate = mvp_msgs.msg.PIDgains()

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
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.dofs)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.Struct(pattern).pack(*self.dofs))
      _x = self
      buff.write(_get_struct_60d().pack(_x.pid_x.kp, _x.pid_x.ki, _x.pid_x.kd, _x.pid_x.k_i_max, _x.pid_x.k_i_min, _x.pid_y.kp, _x.pid_y.ki, _x.pid_y.kd, _x.pid_y.k_i_max, _x.pid_y.k_i_min, _x.pid_z.kp, _x.pid_z.ki, _x.pid_z.kd, _x.pid_z.k_i_max, _x.pid_z.k_i_min, _x.pid_roll.kp, _x.pid_roll.ki, _x.pid_roll.kd, _x.pid_roll.k_i_max, _x.pid_roll.k_i_min, _x.pid_pitch.kp, _x.pid_pitch.ki, _x.pid_pitch.kd, _x.pid_pitch.k_i_max, _x.pid_pitch.k_i_min, _x.pid_yaw.kp, _x.pid_yaw.ki, _x.pid_yaw.kd, _x.pid_yaw.k_i_max, _x.pid_yaw.k_i_min, _x.pid_surge.kp, _x.pid_surge.ki, _x.pid_surge.kd, _x.pid_surge.k_i_max, _x.pid_surge.k_i_min, _x.pid_sway.kp, _x.pid_sway.ki, _x.pid_sway.kd, _x.pid_sway.k_i_max, _x.pid_sway.k_i_min, _x.pid_heave.kp, _x.pid_heave.ki, _x.pid_heave.kd, _x.pid_heave.k_i_max, _x.pid_heave.k_i_min, _x.pid_roll_rate.kp, _x.pid_roll_rate.ki, _x.pid_roll_rate.kd, _x.pid_roll_rate.k_i_max, _x.pid_roll_rate.k_i_min, _x.pid_pitch_rate.kp, _x.pid_pitch_rate.ki, _x.pid_pitch_rate.kd, _x.pid_pitch_rate.k_i_max, _x.pid_pitch_rate.k_i_min, _x.pid_yaw_rate.kp, _x.pid_yaw_rate.ki, _x.pid_yaw_rate.kd, _x.pid_yaw_rate.k_i_max, _x.pid_yaw_rate.k_i_min))
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
      if self.pid_x is None:
        self.pid_x = mvp_msgs.msg.PIDgains()
      if self.pid_y is None:
        self.pid_y = mvp_msgs.msg.PIDgains()
      if self.pid_z is None:
        self.pid_z = mvp_msgs.msg.PIDgains()
      if self.pid_roll is None:
        self.pid_roll = mvp_msgs.msg.PIDgains()
      if self.pid_pitch is None:
        self.pid_pitch = mvp_msgs.msg.PIDgains()
      if self.pid_yaw is None:
        self.pid_yaw = mvp_msgs.msg.PIDgains()
      if self.pid_surge is None:
        self.pid_surge = mvp_msgs.msg.PIDgains()
      if self.pid_sway is None:
        self.pid_sway = mvp_msgs.msg.PIDgains()
      if self.pid_heave is None:
        self.pid_heave = mvp_msgs.msg.PIDgains()
      if self.pid_roll_rate is None:
        self.pid_roll_rate = mvp_msgs.msg.PIDgains()
      if self.pid_pitch_rate is None:
        self.pid_pitch_rate = mvp_msgs.msg.PIDgains()
      if self.pid_yaw_rate is None:
        self.pid_yaw_rate = mvp_msgs.msg.PIDgains()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.dofs = s.unpack(str[start:end])
      _x = self
      start = end
      end += 480
      (_x.pid_x.kp, _x.pid_x.ki, _x.pid_x.kd, _x.pid_x.k_i_max, _x.pid_x.k_i_min, _x.pid_y.kp, _x.pid_y.ki, _x.pid_y.kd, _x.pid_y.k_i_max, _x.pid_y.k_i_min, _x.pid_z.kp, _x.pid_z.ki, _x.pid_z.kd, _x.pid_z.k_i_max, _x.pid_z.k_i_min, _x.pid_roll.kp, _x.pid_roll.ki, _x.pid_roll.kd, _x.pid_roll.k_i_max, _x.pid_roll.k_i_min, _x.pid_pitch.kp, _x.pid_pitch.ki, _x.pid_pitch.kd, _x.pid_pitch.k_i_max, _x.pid_pitch.k_i_min, _x.pid_yaw.kp, _x.pid_yaw.ki, _x.pid_yaw.kd, _x.pid_yaw.k_i_max, _x.pid_yaw.k_i_min, _x.pid_surge.kp, _x.pid_surge.ki, _x.pid_surge.kd, _x.pid_surge.k_i_max, _x.pid_surge.k_i_min, _x.pid_sway.kp, _x.pid_sway.ki, _x.pid_sway.kd, _x.pid_sway.k_i_max, _x.pid_sway.k_i_min, _x.pid_heave.kp, _x.pid_heave.ki, _x.pid_heave.kd, _x.pid_heave.k_i_max, _x.pid_heave.k_i_min, _x.pid_roll_rate.kp, _x.pid_roll_rate.ki, _x.pid_roll_rate.kd, _x.pid_roll_rate.k_i_max, _x.pid_roll_rate.k_i_min, _x.pid_pitch_rate.kp, _x.pid_pitch_rate.ki, _x.pid_pitch_rate.kd, _x.pid_pitch_rate.k_i_max, _x.pid_pitch_rate.k_i_min, _x.pid_yaw_rate.kp, _x.pid_yaw_rate.ki, _x.pid_yaw_rate.kd, _x.pid_yaw_rate.k_i_max, _x.pid_yaw_rate.k_i_min,) = _get_struct_60d().unpack(str[start:end])
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
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.dofs)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.dofs.tostring())
      _x = self
      buff.write(_get_struct_60d().pack(_x.pid_x.kp, _x.pid_x.ki, _x.pid_x.kd, _x.pid_x.k_i_max, _x.pid_x.k_i_min, _x.pid_y.kp, _x.pid_y.ki, _x.pid_y.kd, _x.pid_y.k_i_max, _x.pid_y.k_i_min, _x.pid_z.kp, _x.pid_z.ki, _x.pid_z.kd, _x.pid_z.k_i_max, _x.pid_z.k_i_min, _x.pid_roll.kp, _x.pid_roll.ki, _x.pid_roll.kd, _x.pid_roll.k_i_max, _x.pid_roll.k_i_min, _x.pid_pitch.kp, _x.pid_pitch.ki, _x.pid_pitch.kd, _x.pid_pitch.k_i_max, _x.pid_pitch.k_i_min, _x.pid_yaw.kp, _x.pid_yaw.ki, _x.pid_yaw.kd, _x.pid_yaw.k_i_max, _x.pid_yaw.k_i_min, _x.pid_surge.kp, _x.pid_surge.ki, _x.pid_surge.kd, _x.pid_surge.k_i_max, _x.pid_surge.k_i_min, _x.pid_sway.kp, _x.pid_sway.ki, _x.pid_sway.kd, _x.pid_sway.k_i_max, _x.pid_sway.k_i_min, _x.pid_heave.kp, _x.pid_heave.ki, _x.pid_heave.kd, _x.pid_heave.k_i_max, _x.pid_heave.k_i_min, _x.pid_roll_rate.kp, _x.pid_roll_rate.ki, _x.pid_roll_rate.kd, _x.pid_roll_rate.k_i_max, _x.pid_roll_rate.k_i_min, _x.pid_pitch_rate.kp, _x.pid_pitch_rate.ki, _x.pid_pitch_rate.kd, _x.pid_pitch_rate.k_i_max, _x.pid_pitch_rate.k_i_min, _x.pid_yaw_rate.kp, _x.pid_yaw_rate.ki, _x.pid_yaw_rate.kd, _x.pid_yaw_rate.k_i_max, _x.pid_yaw_rate.k_i_min))
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
      if self.pid_x is None:
        self.pid_x = mvp_msgs.msg.PIDgains()
      if self.pid_y is None:
        self.pid_y = mvp_msgs.msg.PIDgains()
      if self.pid_z is None:
        self.pid_z = mvp_msgs.msg.PIDgains()
      if self.pid_roll is None:
        self.pid_roll = mvp_msgs.msg.PIDgains()
      if self.pid_pitch is None:
        self.pid_pitch = mvp_msgs.msg.PIDgains()
      if self.pid_yaw is None:
        self.pid_yaw = mvp_msgs.msg.PIDgains()
      if self.pid_surge is None:
        self.pid_surge = mvp_msgs.msg.PIDgains()
      if self.pid_sway is None:
        self.pid_sway = mvp_msgs.msg.PIDgains()
      if self.pid_heave is None:
        self.pid_heave = mvp_msgs.msg.PIDgains()
      if self.pid_roll_rate is None:
        self.pid_roll_rate = mvp_msgs.msg.PIDgains()
      if self.pid_pitch_rate is None:
        self.pid_pitch_rate = mvp_msgs.msg.PIDgains()
      if self.pid_yaw_rate is None:
        self.pid_yaw_rate = mvp_msgs.msg.PIDgains()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.dofs = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      _x = self
      start = end
      end += 480
      (_x.pid_x.kp, _x.pid_x.ki, _x.pid_x.kd, _x.pid_x.k_i_max, _x.pid_x.k_i_min, _x.pid_y.kp, _x.pid_y.ki, _x.pid_y.kd, _x.pid_y.k_i_max, _x.pid_y.k_i_min, _x.pid_z.kp, _x.pid_z.ki, _x.pid_z.kd, _x.pid_z.k_i_max, _x.pid_z.k_i_min, _x.pid_roll.kp, _x.pid_roll.ki, _x.pid_roll.kd, _x.pid_roll.k_i_max, _x.pid_roll.k_i_min, _x.pid_pitch.kp, _x.pid_pitch.ki, _x.pid_pitch.kd, _x.pid_pitch.k_i_max, _x.pid_pitch.k_i_min, _x.pid_yaw.kp, _x.pid_yaw.ki, _x.pid_yaw.kd, _x.pid_yaw.k_i_max, _x.pid_yaw.k_i_min, _x.pid_surge.kp, _x.pid_surge.ki, _x.pid_surge.kd, _x.pid_surge.k_i_max, _x.pid_surge.k_i_min, _x.pid_sway.kp, _x.pid_sway.ki, _x.pid_sway.kd, _x.pid_sway.k_i_max, _x.pid_sway.k_i_min, _x.pid_heave.kp, _x.pid_heave.ki, _x.pid_heave.kd, _x.pid_heave.k_i_max, _x.pid_heave.k_i_min, _x.pid_roll_rate.kp, _x.pid_roll_rate.ki, _x.pid_roll_rate.kd, _x.pid_roll_rate.k_i_max, _x.pid_roll_rate.k_i_min, _x.pid_pitch_rate.kp, _x.pid_pitch_rate.ki, _x.pid_pitch_rate.kd, _x.pid_pitch_rate.k_i_max, _x.pid_pitch_rate.k_i_min, _x.pid_yaw_rate.kp, _x.pid_yaw_rate.ki, _x.pid_yaw_rate.kd, _x.pid_yaw_rate.k_i_max, _x.pid_yaw_rate.k_i_min,) = _get_struct_60d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_60d = None
def _get_struct_60d():
    global _struct_60d
    if _struct_60d is None:
        _struct_60d = struct.Struct("<60d")
    return _struct_60d
