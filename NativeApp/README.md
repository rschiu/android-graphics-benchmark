Native Activity
===============
This example is based on the [native-activity](https://github.com/googlesamples/android-ndk/tree/master/native-activity)
sample from android-ndk.

The relevant code can be found in main.cpp in the touch handling code for AINPUT\_SOURCE\_TOUCHSCREEN.
Typically, a test app should call AndroidGraphicsBenchmark::startBenchmark at the beginning of a
game loop.

The library in NativeApp/app/agbenchmark/lib is prebuilt from [https://android.googlesource.com/platform/tools/test/graphicsbenchmark/+/master/benchmark_libs/](https://android.googlesource.com/platform/tools/test/graphicsbenchmark/+/master/benchmark_libs/)
