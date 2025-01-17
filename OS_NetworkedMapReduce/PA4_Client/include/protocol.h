#ifndef SERVER_CLIENT_PROTOCOL_H
#define SERVER_CLIENT_PROTOCOL_H

#include "phase1.h"

#define ALPHABETSIZE                26
#define REQUEST_MSG_SIZE            28
#define RESPONSE_MSG_SIZE           3
#define LONG_RESPONSE_MSG_SIZE      28
#define MAX_MAPPER_PER_MASTER       32
#define MAX_CONCURRENT_CLIENTS      50
#define MAX_STATUS_TABLE_LINES      50

//Update Status Table Index
#define US_MAPPER_PID               1
#define US_NUM_UPDATES              2
#define US_IS_CHECKEDIN             3

//Request Commands
#define CHECKIN                     1
#define UPDATE_AZLIST               2
#define GET_AZLIST                  3
#define GET_MAPPER_UPDATES          4
#define GET_ALL_UPDATES             5
#define CHECKOUT                    6

//Request Structure Index
#define RQS_COMMAND_ID              1
#define RQS_MAPPER_PID              2
#define RQS_DATA                    3

//Response Structure Index
#define RSP_COMMAND_ID              1
#define RSP_CODE                    2
#define RSP_DATA                    3

//Response Codes
#define RSP_OK                      0
#define RSP_NOK                     1

//for path processing
#define MAX_PATH                    255
#define LINE_SIZE                   100

//Master process (EC)
#define MASTER_ID                   -1

#endif //SERVER_CLIENT_PROTOCOL_H
