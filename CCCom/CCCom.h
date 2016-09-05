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
		uint8_t endTransmission();
		uint8_t endTransmission(uint8_t stop);
		uint8_t requestFrom(uint8_t addr, uint8_t quant);
		uint8_t requestFrom(uint8_t addr, uint8_t quant, uint8_t stop);
		uint8_t requestFrom(int addr, int quant);
		uint8_t requestFrom(int addr, int quant, int stop);
		void onReceive(void (*)(int) handler);
		void onRequest(void (*)(void) handler);
		virtual size_t write(uint8_t val);
		virtual size_t write(const uint8_t * buf, size_t size);
		virtual int available();
		virtual int read();
		virtual int peek();
		virtual void flush();

		inline size_t write(unsigned long n) { return write((uint8_t)n); }
		inline size_t write(long n) { return write((uint8_t)n); }
		inline size_t write(unsigned int n) { return write((uint8_t)n); }
		inline size_t write(int n) { return write((uint8_t)n); }
}
#endif
