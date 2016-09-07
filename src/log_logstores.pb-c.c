/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: log_logstore.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "log_logstore.pb-c.h"
void   log__content__init
                     (Log__Content         *message)
{
  static Log__Content init_value = LOG__CONTENT__INIT;
  *message = init_value;
}
void   log__init
                     (Log         *message)
{
  static Log init_value = LOG__INIT;
  *message = init_value;
}
size_t log__get_packed_size
                     (const Log *message)
{
  assert(message->base.descriptor == &log__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t log__pack
                     (const Log *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &log__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t log__pack_to_buffer
                     (const Log *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &log__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Log *
       log__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Log *)
     protobuf_c_message_unpack (&log__descriptor,
                                allocator, len, data);
}
void   log__free_unpacked
                     (Log *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &log__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   log_tag__init
                     (LogTag         *message)
{
  static LogTag init_value = LOG_TAG__INIT;
  *message = init_value;
}
size_t log_tag__get_packed_size
                     (const LogTag *message)
{
  assert(message->base.descriptor == &log_tag__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t log_tag__pack
                     (const LogTag *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &log_tag__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t log_tag__pack_to_buffer
                     (const LogTag *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &log_tag__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
LogTag *
       log_tag__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (LogTag *)
     protobuf_c_message_unpack (&log_tag__descriptor,
                                allocator, len, data);
}
void   log_tag__free_unpacked
                     (LogTag *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &log_tag__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   log_group__init
                     (LogGroup         *message)
{
  static LogGroup init_value = LOG_GROUP__INIT;
  *message = init_value;
}
size_t log_group__get_packed_size
                     (const LogGroup *message)
{
  assert(message->base.descriptor == &log_group__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t log_group__pack
                     (const LogGroup *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &log_group__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t log_group__pack_to_buffer
                     (const LogGroup *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &log_group__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
LogGroup *
       log_group__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (LogGroup *)
     protobuf_c_message_unpack (&log_group__descriptor,
                                allocator, len, data);
}
void   log_group__free_unpacked
                     (LogGroup *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &log_group__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor log__content__field_descriptors[2] =
{
  {
    "Key",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Log__Content, key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Value",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Log__Content, value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned log__content__field_indices_by_name[] = {
  0,   /* field[0] = Key */
  1,   /* field[1] = Value */
};
static const ProtobufCIntRange log__content__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor log__content__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Log.Content",
  "Content",
  "Log__Content",
  "",
  sizeof(Log__Content),
  2,
  log__content__field_descriptors,
  log__content__field_indices_by_name,
  1,  log__content__number_ranges,
  (ProtobufCMessageInit) log__content__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor log__field_descriptors[2] =
{
  {
    "Time",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Log, time),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Contents",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Log, n_contents),
    offsetof(Log, contents),
    &log__content__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned log__field_indices_by_name[] = {
  1,   /* field[1] = Contents */
  0,   /* field[0] = Time */
};
static const ProtobufCIntRange log__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor log__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Log",
  "Log",
  "Log",
  "",
  sizeof(Log),
  2,
  log__field_descriptors,
  log__field_indices_by_name,
  1,  log__number_ranges,
  (ProtobufCMessageInit) log__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor log_tag__field_descriptors[2] =
{
  {
    "Key",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogTag, key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Value",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogTag, value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned log_tag__field_indices_by_name[] = {
  0,   /* field[0] = Key */
  1,   /* field[1] = Value */
};
static const ProtobufCIntRange log_tag__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor log_tag__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "LogTag",
  "LogTag",
  "LogTag",
  "",
  sizeof(LogTag),
  2,
  log_tag__field_descriptors,
  log_tag__field_indices_by_name,
  1,  log_tag__number_ranges,
  (ProtobufCMessageInit) log_tag__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor log_group__field_descriptors[6] =
{
  {
    "Logs",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(LogGroup, n_logs),
    offsetof(LogGroup, logs),
    &log__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Category",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogGroup, category),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Topic",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogGroup, topic),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Source",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogGroup, source),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "MachineUUID",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogGroup, machineuuid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "LogTags",
    6,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(LogGroup, n_logtags),
    offsetof(LogGroup, logtags),
    &log_tag__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned log_group__field_indices_by_name[] = {
  1,   /* field[1] = Category */
  5,   /* field[5] = LogTags */
  0,   /* field[0] = Logs */
  4,   /* field[4] = MachineUUID */
  3,   /* field[3] = Source */
  2,   /* field[2] = Topic */
};
static const ProtobufCIntRange log_group__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor log_group__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "LogGroup",
  "LogGroup",
  "LogGroup",
  "",
  sizeof(LogGroup),
  6,
  log_group__field_descriptors,
  log_group__field_indices_by_name,
  1,  log_group__number_ranges,
  (ProtobufCMessageInit) log_group__init,
  NULL,NULL,NULL    /* reserved[123] */
};
