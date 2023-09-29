FROM ubuntu:22.04

RUN apt-get update && \
    apt-get install -y \
        build-essential \
        bsdmainutils \
        libreadline-dev \
        libsdl2-dev \
        libglew-dev \
        libcurl4-openssl-dev

WORKDIR /sm64

# docker build . -t sm64ex-coop
# cp /path/to/baserom.us.z64 .
# docker run --rm -v $(pwd):/sm64 sm64ex-coop sh -c "TOUCH_CONTROLS=1 make -j$(nproc)"
