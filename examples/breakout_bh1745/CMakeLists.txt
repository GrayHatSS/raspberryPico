add_executable(
  breakout_bh1745_demo
  demo.cpp
)

# Pull in pico libraries that we need
target_link_libraries(breakout_bh1745_demo pico_stdlib hardware_spi bh1745)

# create map/bin/hex file etc.
pico_add_extra_outputs(breakout_bh1745_demo)