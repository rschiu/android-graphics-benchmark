Android Graphics Benchmark Examples
===================================
This project is intended to show examples of how to create test application for Android Graphics
Benchmarking.  The source code for the project can be found at
[https://android.googlesource.com/platform/tools/test/graphicsbenchmark/+/master]([https://android.googlesource.com/platform/tools/test/graphicsbenchmark/+/master).

The benchmark infrastructure requires the test application to send an [Intent](https://developer.android.com/reference/android/content/Intent.html)
to signal the start of a game loop.

In the AOSP source code, the benchmark\_libs/ directory contains code to create a library that will
create this Intent.  NativeApp in this project shows an example of how the library can be used.
