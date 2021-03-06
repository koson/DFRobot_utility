#include <Arduino.h>

class DFTimer {
	public:
		void *args;
		void check (); 
		void start (); 
		void stop (); 
		DFTimer (void (*theTimeHandler)(), uint32_t theDelayTime); 
		DFTimer (void (*theTimeHandler)(void*), uint32_t theDelayTime, void *args);
		DFTimer (void (*theTimeHandler)(), uint32_t theDelayTime, uint32_t startTime); 
		DFTimer (void (*timeHandler)(void*), uint32_t delayTime, uint32_t startTime, void *args); 
	private:
		uint32_t delayTime;
		uint32_t startTime;
		uint32_t nowTime;
		boolean isFirst;
		boolean isRun;
		void (*timeHandlern) ();
		void (*timeHandler) (void*);		
};

