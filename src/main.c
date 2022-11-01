#include "raylib.h"
#include "flecs.h"

int main(void)
{
	ecs_world_t *world = ecs_init();

	return ecs_fini(world);
}
