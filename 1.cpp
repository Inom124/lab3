#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
int i = 0;
void* thread_func(void*arg){
   phtread_setcancelstate(PTHREAD_CANEL_DISABLE,NULL);
   for (i=0; i<4; i++){
                  printf("I'm still renning!\n");
                  sleep(1);
 
  }
  pthread_setcancelstate(PTHREAD_CANEL_ENABLE,NULL);
  pthread_testcanel();
printf("YOU WILL NOT STOP ME!!!\n";

}
int main (int argc, char * argv[]){
  pthread_thread;
  pthread_create(&thread,NULL,thread_func,NULL);
  while(i<1)sleep(1);
  pthread_cacel(thread);
  printf("Requested to canel the thread\n");
  pthread_join(thread,NULL);
  printf("The thread is stopped.\n");
 retum EXIT_SUCCESS;

}
