#ifndef __CONNECT_H__
#define __CONNECT_H__

typedef char *String;
typedef int Bool;

typedef struct _input
{
    String connectionAddress;
    String contextName;
    String groupName;
} Input;

typedef struct _output
{
    String topic;
    String accessToken;
} Output;

Bool Connect(int retries, Input *input, Output *output);

#endif