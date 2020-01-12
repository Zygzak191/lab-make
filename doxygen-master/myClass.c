#include "myClass.h"
static struct Complex new(int real, int imag) {
	return (struct Complex){.re=real, .im=imag};
}
const struct ComplexClass Complex={.new=&new};
