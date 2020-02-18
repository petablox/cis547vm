.PRECIOUS: %.ll

all: simple0.out simple1.out simple2.out simple3.out simple4.out simple5.out simple6.out simple7.out simple8.out simple9.out simple10.out simple11.out simple12.out simple13.out simple14.out

%.ll: %.c
	clang -emit-llvm -S -fno-discard-value-names -Xclang -disable-O0-optnone -c -o $@ $< 

%.out: %.ll
	opt -load ../build/DataflowPass.so -DivZero $< -disable-output > $@

clean:
	rm -f *.ll *.out *.err
