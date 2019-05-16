#pragma once



#define MTPMOUNT_RETURN_SUCESS 0

//IPC Client Errors
#define MTPMOUNT_PROCESS_CREATION_FAILED -1
#define MTPMOUNT_CREATED_PROCESS_NO_RESPONSE -2
#define MTPMOUNT_DAEMONCTL_NO_DAEMON -3

//IPC Remote Errors
#define MTPMOUNT_SUBCOMMAND_DOES_NOT_EXIST 1
#define MTPMOUNT_WRONG_PARAMETRIZATION 2
#define MTPMOUNT_HELP_INVALID_SUBCOMMAND 3
#define MTPMOUNT_NO_MORE_DRIVE_LETTERS 4
#define MTPMOUNT_CONNECTION_FAIL 5
#define MTPMOUNT_STORAGE_UNAVAILABLE 6
#define MTPMOUNT_NOT_A_DRIVE_LETTER 7;
#define MTPMOUNT_DRIVE_LETTER_OCCUPIED 8;
#define MTPMOUNT_CONNECTION_NOT_OPEN 9;
#define MTPMOUNT_DRIVE_NOT_MAPPED 10;