/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: log_logstores.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "log_logstores.pb-c.h"
void   log_logstores__log__content__init
                     (LogLogstores__Log__Content         *message)
{
  static LogLogstores__Log__Content init_value = LOG_LOGSTORES__LOG__CONTENT__INIT;
  *message = init_value;
}
void   log_logstores__log__init
                     (LogLogstores__Log         *message)
{
  static LogLogstores__Log init_value = LOG_LOGSTORES__LOG__INIT;
  *message = init_value;
}
size_t log_logstores__log__get_packed_size
                     (const LogLogstores__Log *message)
{
  assert(message->base.descriptor == &log_logstores__log__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t log_logstores__log__pack
                     (const LogLogstores__Log *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &log_logstores__log__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t log_logstores__log__pack_to_buffer
                     (const LogLogstores__Log *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &log_logstores__log__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
LogLogstores__Log *
       log_logstores__log__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (LogLogstores__Log *)
     protobuf_c_message_unpack (&log_logstores__log__descriptor,
                                allocator, len, data);
}
void   log_logstores__log__free_unpacked
                     (LogLogstores__Log *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &log_logstores__log__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   log_logstores__log_group__init
                     (LogLogstores__LogGroup         *message)
{
  static LogLogstores__LogGroup init_value = LOG_LOGSTORES__LOG_GROUP__INIT;
  *message = init_value;
}
size_t log_logstores__log_group__get_packed_size
                     (const LogLogstores__LogGroup *message)
{
  assert(message->base.descriptor == &log_logstores__log_group__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t log_logstores__log_group__pack
                     (const LogLogstores__LogGroup *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &log_logstores__log_group__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t log_logstores__log_group__pack_to_buffer
                     (const LogLogstores__LogGroup *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &log_logstores__log_group__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
LogLogstores__LogGroup *
       log_logstores__log_group__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (LogLogstores__LogGroup *)
     protobuf_c_message_unpack (&log_logstores__log_group__descriptor,
                                allocator, len, data);
}
void   log_logstores__log_group__free_unpacked
                     (LogLogstores__LogGroup *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &log_logstores__log_group__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor log_logstores__log__content__field_descriptors[2] =
{
  {
    "key",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogLogstores__Log__Content, key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "value",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogLogstores__Log__Content, value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned log_logstores__log__content__field_indices_by_name[] = {
  0,   /* field[0] = key */
  1,   /* field[1] = value */
};
static const ProtobufCIntRange log_logstores__log__content__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor log_logstores__log__content__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "log_logstores.Log.Content",
  "Content",
  "LogLogstores__Log__Content",
  "log_logstores",
  sizeof(LogLogstores__Log__Content),
  2,
  log_logstores__log__content__field_descriptors,
  log_logstores__log__content__field_indices_by_name,
  1,  log_logstores__log__content__number_ranges,
  (ProtobufCMessageInit) log_logstores__log__content__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor log_logstores__log__field_descriptors[2] =
{
  {
    "time",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(LogLogstores__Log, time),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "contents",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(LogLogstores__Log, n_contents),
    offsetof(LogLogstores__Log, contents),
    &log_logstores__log__content__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned log_logstores__log__field_indices_by_name[] = {
  1,   /* field[1] = contents */
  0,   /* field[0] = time */
};
static const ProtobufCIntRange log_logstores__log__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor log_logstores__log__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "log_logstores.Log",
  "Log",
  "LogLogstores__Log",
  "log_logstores",
  sizeof(LogLogstores__Log),
  2,
  log_logstores__log__field_descriptors,
  log_logstores__log__field_indices_by_name,
  1,  log_logstores__log__number_ranges,
  (ProtobufCMessageInit) log_logstores__log__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor log_logstores__log_group__field_descriptors[4] =
{
  {
    "logs",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(LogLogstores__LogGroup, n_logs),
    offsetof(LogLogstores__LogGroup, logs),
    &log_logstores__log__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "reserved",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogLogstores__LogGroup, reserved),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "topic",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogLogstores__LogGroup, topic),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "source",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogLogstores__LogGroup, source),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned log_logstores__log_group__field_indices_by_name[] = {
  0,   /* field[0] = logs */
  1,   /* field[1] = reserved */
  3,   /* field[3] = source */
  2,   /* field[2] = topic */
};
static const ProtobufCIntRange log_logstores__log_group__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor log_logstores__log_group__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "log_logstores.LogGroup",
  "LogGroup",
  "LogLogstores__LogGroup",
  "log_logstores",
  sizeof(LogLogstores__LogGroup),
  4,
  log_logstores__log_group__field_descriptors,
  log_logstores__log_group__field_indices_by_name,
  1,  log_logstores__log_group__number_ranges,
  (ProtobufCMessageInit) log_logstores__log_group__init,
  NULL,NULL,NULL    /* reserved[123] */
};