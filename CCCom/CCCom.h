#ifndef CCCOM_H
#define CCCOM_H
#include "Stream.h"

class CCCom : public Stream {
	private:
		uint8_t readRegister(uint8_t reg);
		void writeRegister(uint8_t reg, uint8_t val);

	public:
		void begin();
		void begin(uint8_t addr);
		void begin(int addr);
		void beginTransmission(uint8_t addr);
		void beginTransmission(int addr);
		uint8_t endTransmission(void);
		uint8_t endTransmission(uint8_t);
		uint8_t requestFrom(uint8_t, uint8_t);
		uint8_t requestFrom(uint8_t, uint8_t, uint8_t);
		uint8_t requestFrom(int, int);
		uint8_t requestFrom(int, int, int);
		void onReceive(void (*)(int));
		void onRequest(void (*)(void));
		virtual size_t write(uint8_t);
		virtual size_t write(const uint8_t *, size_t);
		virtual int available(void);
		virtual int read(void);
		virtual int peek(void);
		virtual void flush(void);

		inline size_t write(unsigned long n) { return write((uint8_t)n); }
		inline size_t write(long n) { return write((uint8_t)n); }
		inline size_t write(unsigned int n) { return write((uint8_t)n); }
		inline size_t write(int n) { return write((uint8_t)n); }
}
#endif
