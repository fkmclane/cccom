#include "CCCom.h"

uint8_t CCCom::readRegister(uint8_t reg) {
}

void CCCom::writeRegister(uint8_t reg, uint8_t val) {
}

void CCCom::begin() {
}

void CCCom::begin(uint8_t addr) {
}

void CCCom::begin(int addr) {
}

void CCCom::beginTransmission(uint8_t addr) {
}

void CCCom::beginTransmission(int addr) {
}

uint8_t CCCom::endTransmission() {
}

uint8_t CCCom::endTransmission(uint8_t stop) {
}

uint8_t CCCom::requestFrom(uint8_t addr, uint8_t quant) {
}

uint8_t CCCom::requestFrom(uint8_t addr, uint8_t quant, uint8_t stop) {
}

uint8_t CCCom::requestFrom(int addr, int quant) {
}

uint8_t CCCom::requestFrom(int addr, int quant, int stop) {
}

void CCCom::onReceive(void (*)(int) handler) {
}

void CCCom::onRequest(void (*)(void) handler) {
}

size_t CCCom::write(uint8_t val) {
}

size_t CCCom::write(const uint8_t * buf, size_t size) {
}

int CCCom::available() {
}

int CCCom::read() {
}

int CCCom::peek() {
}

void CCCom::flush() {
}
