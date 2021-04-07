# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: transition.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='transition.proto',
  package='ddrl',
  syntax='proto3',
  serialized_pb=_b('\n\x10transition.proto\x12\x04\x64\x64rl\x1a\x1fgoogle/protobuf/timestamp.proto\"l\n\rue_transition\x12\x0c\n\x04rnti\x18\x01 \x01(\r\x12\n\n\x02id\x18\x02 \x01(\r\x12\x0e\n\x06reward\x18\x03 \x01(\x02\x12\r\n\x05state\x18\x04 \x03(\x02\x12\x0e\n\x06\x61\x63tion\x18\x05 \x03(\x02\x12\x12\n\nnext_state\x18\x06 \x03(\x02\"u\n\x0e\x65nb_transition\x12\x0b\n\x03tti\x18\x01 \x01(\x04\x12-\n\ttimestamp\x18\x02 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\'\n\ntransition\x18\x03 \x03(\x0b\x32\x13.ddrl.ue_transitionb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_UE_TRANSITION = _descriptor.Descriptor(
  name='ue_transition',
  full_name='ddrl.ue_transition',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='rnti', full_name='ddrl.ue_transition.rnti', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='id', full_name='ddrl.ue_transition.id', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='reward', full_name='ddrl.ue_transition.reward', index=2,
      number=3, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='state', full_name='ddrl.ue_transition.state', index=3,
      number=4, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='action', full_name='ddrl.ue_transition.action', index=4,
      number=5, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='next_state', full_name='ddrl.ue_transition.next_state', index=5,
      number=6, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=59,
  serialized_end=167,
)


_ENB_TRANSITION = _descriptor.Descriptor(
  name='enb_transition',
  full_name='ddrl.enb_transition',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='tti', full_name='ddrl.enb_transition.tti', index=0,
      number=1, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='timestamp', full_name='ddrl.enb_transition.timestamp', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='transition', full_name='ddrl.enb_transition.transition', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=169,
  serialized_end=286,
)

_ENB_TRANSITION.fields_by_name['timestamp'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_ENB_TRANSITION.fields_by_name['transition'].message_type = _UE_TRANSITION
DESCRIPTOR.message_types_by_name['ue_transition'] = _UE_TRANSITION
DESCRIPTOR.message_types_by_name['enb_transition'] = _ENB_TRANSITION

ue_transition = _reflection.GeneratedProtocolMessageType('ue_transition', (_message.Message,), dict(
  DESCRIPTOR = _UE_TRANSITION,
  __module__ = 'transition_pb2'
  # @@protoc_insertion_point(class_scope:ddrl.ue_transition)
  ))
_sym_db.RegisterMessage(ue_transition)

enb_transition = _reflection.GeneratedProtocolMessageType('enb_transition', (_message.Message,), dict(
  DESCRIPTOR = _ENB_TRANSITION,
  __module__ = 'transition_pb2'
  # @@protoc_insertion_point(class_scope:ddrl.enb_transition)
  ))
_sym_db.RegisterMessage(enb_transition)


# @@protoc_insertion_point(module_scope)
