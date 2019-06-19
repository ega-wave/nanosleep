
#include <time.h>

int main()
{
	struct timespec req = {0};
	req.tv_sec = 0;
	req.tv_nsec = (long)100000000; /* 0 <= .tv_nsec <= 999,999,999 */

	return nanosleep(&req, NULL) == 0 ? 0 :1;
}

