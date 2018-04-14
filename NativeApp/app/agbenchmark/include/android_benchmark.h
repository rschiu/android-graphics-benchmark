/*
 * Copyright 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_GRAPHICS_BENCHMARK_H
#define ANDROID_GRAPHICS_BENCHMARK_H

#include <jni.h>
#include <android/native_activity.h>

namespace android {

class AndroidGraphicsBenchmark {
private:
    class Impl;
    Impl* mImpl;

    AndroidGraphicsBenchmark(const AndroidGraphicsBenchmark& that);
public:
    AndroidGraphicsBenchmark();
    ~AndroidGraphicsBenchmark();

    /*
     * Signal Android Graphics Benchmark the start of a loop.
     *
     * For use with app with JNI.  context should be a jobject of type android.content.Context.
     */
    void startBenchmark(jobject context);

    /*
     * Signal Android Graphics Benchmark the start of a loop.
     *
     * For use with pure native app using ANativeActivity.
     */
    void startBenchmark(ANativeActivity* activity);
};

} // end of namespace android

#endif // ANDROID_GRAPHICS_BENCHMARK_H
