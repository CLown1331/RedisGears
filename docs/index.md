<img src="images/RedisGears.png" alt="logo" width="200"/>

# RedisGears
[![Mailing List](https://img.shields.io/badge/Mailing%20List-RedisGears-blue)](https://groups.google.com/forum/#!forum/redisgears)
[![Gitter](https://badges.gitter.im/RedisLabs/RedisGears.svg)](https://gitter.im/RedisLabs/RedisGears?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)

A Dynamic Execution Framework for Redis, simply:
```
GearsBuilder().filter(filter_function).map(map_function).groupby(key_extractor_function, reducer_function).run('*')
```
RedisGears supports full python syntax and low level c api. In addition you can run it on cluster.

!!! note "Quick Links:"
    * [Source Code at GitHub](https://github.com/RedisGears/RedisGears).
    * [Latest Release](https://github.com/RedisGears/RedisGears/releases)
    * [Docker Image: redislabs/redisgears](https://hub.docker.com/r/redislabs/redisgears/)
    * [Quick Start Guide](quickstart.md)

!!! tip "Supported Platforms"
    RedisGears is developed and tested on Linux x86_64 CPUs.

# Client libraries

| Project | Language | License | Author | URL |
| ------- | -------- | ------- | ------ | --- |
| redisgears-py | Python | BSD-3 | [RedisLabs](https://redislabs.com/) | [Github](https://github.com/RedisGears/redisgears-py) |

# Future plans
* GearsQL - SQL like language for quering your data.

# Mailing List / Forum
Got questions? Feel free to ask at the [RedisGears mailing list](https://groups.google.com/forum/#!forum/redisgears).

# License
Redis Source Available License Agreement - see [LICENSE](https://github.com/RedisGears/RedisGears/blob/master/LICENSE)

