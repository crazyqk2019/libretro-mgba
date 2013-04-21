#ifndef GBA_THREAD_H
#define GBA_THREAD_H

#include <pthread.h>

struct GBAThread {
	// Output
	int started;
	struct GBA* gba;
	struct ARMDebugger* debugger;

	// Input
	struct GBAVideoRenderer* renderer;
	int fd;

	// Threading state
	pthread_mutex_t mutex;
	pthread_cond_t cond;
	pthread_t thread;
};

int GBAThreadStart(struct GBAThread* threadContext);
void GBAThreadJoin(struct GBAThread* threadContext);

#endif