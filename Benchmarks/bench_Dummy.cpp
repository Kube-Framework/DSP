/**
 * @ Author: Matthieu Moinvaziri
 * @ Description: Benchmark of DSP
 */

#include <benchmark/benchmark.h>

static void DSP_Dummy(benchmark::State &state)
{
    for (auto _ : state) {
    }
}
BENCHMARK(DSP_Dummy);
