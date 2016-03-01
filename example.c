#include <stdio.h>
#include <stdlib.h>
#include <sqlext.h>
#include <sql.h>

#define NAME_LEN 50
#define PHONE_LEN 20

void show_error()
{
  printf("errorn");
}

int main()
{
  SQLHENV henv;
  SQLHDBC hdbc;
  SQLHSTMT hstmt = 0;
  SQLRETURN retcode;
  SQLCHAR name[NAME_LEN], phone[PHONE_LEN], cus_id[NAME_LEN];
  SQLLEN len_name = 0, len_cus_id = 0, len_phone = 0;

  SQLDisconnect(hdbc);
 // retcode = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &henv);
 
  printf("haha");
  return 0;
}
