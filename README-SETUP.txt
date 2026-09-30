Persistent Ubuntu C/OS lab environment

Windows folder: C:\Users\A C E R\os-labs
Ubuntu folder:   /workspace
Container:       ubuntu-c-dev
Old container:   ubuntu-c (preserved and unchanged)

Open an Ubuntu shell:
  docker exec -it ubuntu-c-dev bash

Stop the environment:
  docker compose -f "C:\Users\A C E R\os-labs\compose.yaml" stop

Start it again:
  docker compose -f "C:\Users\A C E R\os-labs\compose.yaml" up -d

Rebuild after editing the Dockerfile:
  docker compose -f "C:\Users\A C E R\os-labs\compose.yaml" up -d --build

Your files live on Windows, so they remain even if the development container is
stopped or recreated. The legacy-ubuntu-c-tmp folder is a safety copy of the old
container's /tmp directory.
