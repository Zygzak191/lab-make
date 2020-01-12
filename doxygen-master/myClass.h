/** @file myClass.h
 * @brief Plik z klasa
 * @details Klasa tworzaca liczbe zespolona
 * @author Karol Bialas
 */

#ifndef MYCLASS_H
#define MYCLASS_H
/** @brief Instancja Complex
 * @details Liczba zespolona
 * @param re Czesc rzeczywista
 * @param im Czesc urojona
 */
struct Complex {
	int re, im;
};
/** /relates Complex
 * @brief Konstruktor Complex
 * @details dwadawdwaddawdadwadadaw
 * @param real Czesc rzeczywista -> .re
 * @param imag Czesc urojona -> .im
 */
extern const struct ComplexClass {
	struct Complex (*new)(int real, int imag);
} Complex;
#endif
