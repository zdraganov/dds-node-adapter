#include <v8.h>
#include <node.h>

#include "src/calc-dd-table.h"

using namespace v8;

extern "C" {
	static void start(Handle<Object> target) {
		HandleScope scope(Isolate::GetCurrent());
	   
	   NODE_SET_METHOD(target, "SetMaxThreads", NODE_SetMaxThreads);
		NODE_SET_METHOD(target, "CalcDDtablePBN", NODE_CalcDDtablePBN);
	}
}

// what the hell is app3?!
NODE_MODULE(app3, start)