#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <sys/time.h>

#include <pthread.h>
#include <getopt.h>





int main(int argc, char **argv) {

  uint32_t threads_num = 0;
  uint32_t faktorial = 0;
  uint32_t mod = 0;
  pthread_t threads[threads_num];

   while (true) {
    int current_optind = optind ? optind : 1;

    static struct option options[] = {{"mod", required_argument, 0, 0},
                                      {"faktorial", required_argument, 0, 0},
                                      {"threads_num", required_argument, 0, 0},
                                      {0, 0, 0, 0}};

    int option_index = 0;
    int c = getopt_long(argc, argv, "f", options, &option_index);

    if (c == -1) break;

    switch (c) {
      case 0:
        switch (option_index) {
          case 0:
            mod = atoi(optarg);
              if (mod <= 0) {
                printf("mod is a positive number\n");
                 return 1;
                }
            break;
          case 1:
            faktorial = atoi(optarg);
             if (faktorial <= 0) {
                printf("faktorial is a positive number\n");
                 return 1;
                }
            break;
          case 2:
            threads_num = atoi(optarg);
             if (threads_num <= 0) {
                printf("threads_num is a positive number\n");
                 return 1;
                }
            break;

          defalut:
            printf("Index %d is out of options\n", option_index);
        }
        break;

      case '?':
        break;

      default:
        printf("getopt returned character code 0%o?\n", c);
    }
  }

  if (optind < argc) {
    printf("Has at least one no option argument\n");
    return 1;
  }

  if (mod == 0 || faktorial == 0 || threads_num == 0) {
    printf("Usage: %s --mod \"num\" --faktorial \"num\" --thread_num \"num\" \n",
           argv[0]);
    return 1;
  }


  
}