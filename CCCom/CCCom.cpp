#include "CCCom.h"

uint8_t CCComInternal::readRegister(uint8_t reg) {
}

void CCComInternal::writeRegister(uint8_t reg, uint8_t val) {
}

void CCComInternal::begin() {
}

void CCComInternal::begin(uint8_t addr) {
}

void CCComInternal::begin(int addr) {
}

void CCComInternal::beginTransmission(uint8_t addr) {
}

void CCComInternal::beginTransmission(int addr) {
}

uint8_t CCComInternal::endTransmission() {
}

uint8_t CCComInternal::endTransmission(uint8_t stop) {
}

uint8_t CCComInternal::requestFrom(uint8_t addr, uint8_t quant) {
}

uint8_t CCComInternal::requestFrom(uint8_t addr, uint8_t quant, uint8_t stop) {
}

uint8_t CCComInternal::requestFrom(int addr, int quant) {
}

uint8_t CCComInternal::requestFrom(int addr, int quant, int stop) {
}

void CCComInternal::onReceive(void (*)(int) handler) {
}

void CCComInternal::onRequest(void (*)(void) handler) {
}

size_t CCComInternal::write(uint8_t val) {
}

size_t CCComInternal::write(const uint8_t * buf, size_t size) {
}

int CCComInternal::available() {
}

int CCComInternal::read() {
}

int CCComInternal::peek() {
}

void CCComInternal::flush() {
}
