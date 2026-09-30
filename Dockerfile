FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        build-essential \
        nano \
        git \
        gdb \
        strace \
        valgrind \
        ltrace \
        procps \
        lsof \
        file \
        man-db \
        less \
        curl \
        ca-certificates \
        pkg-config \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace

CMD ["sleep", "infinity"]
